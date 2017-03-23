
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_6.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_4.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_5.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::PcedScope()
    :
    all_scope_info_bits{YType::uint32, "all-scope-info-bits"},
    lbit{YType::boolean, "lbit"},
    pref_l{YType::uint8, "pref-l"},
    pref_r{YType::uint8, "pref-r"},
    pref_s{YType::uint8, "pref-s"},
    pref_y{YType::uint8, "pref-y"},
    rbit{YType::boolean, "rbit"},
    rd_bit{YType::boolean, "rd-bit"},
    sbit{YType::boolean, "sbit"},
    sd_bit{YType::boolean, "sd-bit"},
    ybit{YType::boolean, "ybit"}
{
    yang_name = "pced-scope"; yang_parent_name = "pcedtlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::~PcedScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_data() const
{
    return all_scope_info_bits.is_set
	|| lbit.is_set
	|| pref_l.is_set
	|| pref_r.is_set
	|| pref_s.is_set
	|| pref_y.is_set
	|| rbit.is_set
	|| rd_bit.is_set
	|| sbit.is_set
	|| sd_bit.is_set
	|| ybit.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_operation() const
{
    return is_set(operation)
	|| is_set(all_scope_info_bits.operation)
	|| is_set(lbit.operation)
	|| is_set(pref_l.operation)
	|| is_set(pref_r.operation)
	|| is_set(pref_s.operation)
	|| is_set(pref_y.operation)
	|| is_set(rbit.operation)
	|| is_set(rd_bit.operation)
	|| is_set(sbit.operation)
	|| is_set(sd_bit.operation)
	|| is_set(ybit.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-scope";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PcedScope' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_scope_info_bits.is_set || is_set(all_scope_info_bits.operation)) leaf_name_data.push_back(all_scope_info_bits.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.operation)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (pref_l.is_set || is_set(pref_l.operation)) leaf_name_data.push_back(pref_l.get_name_leafdata());
    if (pref_r.is_set || is_set(pref_r.operation)) leaf_name_data.push_back(pref_r.get_name_leafdata());
    if (pref_s.is_set || is_set(pref_s.operation)) leaf_name_data.push_back(pref_s.get_name_leafdata());
    if (pref_y.is_set || is_set(pref_y.operation)) leaf_name_data.push_back(pref_y.get_name_leafdata());
    if (rbit.is_set || is_set(rbit.operation)) leaf_name_data.push_back(rbit.get_name_leafdata());
    if (rd_bit.is_set || is_set(rd_bit.operation)) leaf_name_data.push_back(rd_bit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (sd_bit.is_set || is_set(sd_bit.operation)) leaf_name_data.push_back(sd_bit.get_name_leafdata());
    if (ybit.is_set || is_set(ybit.operation)) leaf_name_data.push_back(ybit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits = value;
    }
    if(value_path == "lbit")
    {
        lbit = value;
    }
    if(value_path == "pref-l")
    {
        pref_l = value;
    }
    if(value_path == "pref-r")
    {
        pref_r = value;
    }
    if(value_path == "pref-s")
    {
        pref_s = value;
    }
    if(value_path == "pref-y")
    {
        pref_y = value;
    }
    if(value_path == "rbit")
    {
        rbit = value;
    }
    if(value_path == "rd-bit")
    {
        rd_bit = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "sd-bit")
    {
        sd_bit = value;
    }
    if(value_path == "ybit")
    {
        ybit = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoTlv()
    :
    sr_algo_length{YType::uint16, "sr-algo-length"},
    sr_algo_value{YType::str, "sr-algo-value"}
{
    yang_name = "sr-algo-tlv"; yang_parent_name = "opaque-ritlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::~SrAlgoTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_data() const
{
    return sr_algo_length.is_set
	|| sr_algo_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(sr_algo_length.operation)
	|| is_set(sr_algo_value.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-algo-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrAlgoTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_algo_length.is_set || is_set(sr_algo_length.operation)) leaf_name_data.push_back(sr_algo_length.get_name_leafdata());
    if (sr_algo_value.is_set || is_set(sr_algo_value.operation)) leaf_name_data.push_back(sr_algo_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sr-algo-length")
    {
        sr_algo_length = value;
    }
    if(value_path == "sr-algo-value")
    {
        sr_algo_value = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::SrRangeTlv()
    :
    sr_range_length{YType::uint16, "sr-range-length"},
    sr_range_size{YType::uint32, "sr-range-size"}
    	,
    sidtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>())
{
    sidtlv->parent = this;
    children["sidtlv"] = sidtlv;

    yang_name = "sr-range-tlv"; yang_parent_name = "opaque-ritlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::~SrRangeTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_data() const
{
    return sr_range_length.is_set
	|| sr_range_size.is_set
	|| (sidtlv !=  nullptr && sidtlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(sr_range_length.operation)
	|| is_set(sr_range_size.operation)
	|| (sidtlv !=  nullptr && sidtlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-range-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrRangeTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_range_length.is_set || is_set(sr_range_length.operation)) leaf_name_data.push_back(sr_range_length.get_name_leafdata());
    if (sr_range_size.is_set || is_set(sr_range_size.operation)) leaf_name_data.push_back(sr_range_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sidtlv")
    {
        if(sidtlv != nullptr)
        {
            children["sidtlv"] = sidtlv;
        }
        else
        {
            sidtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>();
            sidtlv->parent = this;
            children["sidtlv"] = sidtlv;
        }
        return children.at("sidtlv");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_children()
{
    if(children.find("sidtlv") == children.end())
    {
        if(sidtlv != nullptr)
        {
            children["sidtlv"] = sidtlv;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sr-range-length")
    {
        sr_range_length = value;
    }
    if(value_path == "sr-range-size")
    {
        sr_range_size = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::Sidtlv()
    :
    sr_sid_length{YType::uint16, "sr-sid-length"},
    sr_sid_value{YType::uint32, "sr-sid-value"}
{
    yang_name = "sidtlv"; yang_parent_name = "sr-range-tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::~Sidtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_data() const
{
    return sr_sid_length.is_set
	|| sr_sid_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_operation() const
{
    return is_set(operation)
	|| is_set(sr_sid_length.operation)
	|| is_set(sr_sid_value.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sidtlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sidtlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_sid_length.is_set || is_set(sr_sid_length.operation)) leaf_name_data.push_back(sr_sid_length.get_name_leafdata());
    if (sr_sid_value.is_set || is_set(sr_sid_value.operation)) leaf_name_data.push_back(sr_sid_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length = value;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::OpaqueEpLsaType()
{
    yang_name = "opaque-ep-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::~OpaqueEpLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ep-lsa-type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueEpLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(std::move(c));
        children[segment_path] = tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_children()
{
    for (auto const & c : tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::Tlv()
    :
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    tlv_data{YType::str, "tlv-data"},
    tlv_length{YType::uint16, "tlv-length"},
    tlv_type{YType::uint16, "tlv-type"}
{
    yang_name = "tlv"; yang_parent_name = "opaque-ep-lsa-type";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return mpls_dste_link.is_set
	|| mpls_router_id.is_set
	|| tlv_data.is_set
	|| tlv_length.is_set
	|| tlv_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mpls_dste_link.operation)
	|| is_set(mpls_router_id.operation)
	|| is_set(tlv_data.operation)
	|| is_set(tlv_length.operation)
	|| is_set(tlv_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_dste_link.is_set || is_set(mpls_dste_link.operation)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.operation)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.operation)) leaf_name_data.push_back(tlv_data.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.operation)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (tlv_type.is_set || is_set(tlv_type.operation)) leaf_name_data.push_back(tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "te-link-sub-tlv")
    {
        for(auto const & c : te_link_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(std::move(c));
        children[segment_path] = te_link_sub_tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_children()
{
    for (auto const & c : te_link_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
    }
    if(value_path == "tlv-type")
    {
        tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{
    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_length.is_set
	|| sub_tlv_type.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(sub_tlv_length.operation)
	|| is_set(sub_tlv_type.operation)
	|| is_set(sub_tlv_value.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeLinkSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_length.is_set || is_set(sub_tlv_length.operation)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_type.is_set || is_set(sub_tlv_type.operation)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.operation)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::OpaqueElLsaType()
{
    yang_name = "opaque-el-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::~OpaqueElLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-el-lsa-type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueElLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(std::move(c));
        children[segment_path] = tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_children()
{
    for (auto const & c : tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::Tlv()
    :
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    tlv_data{YType::str, "tlv-data"},
    tlv_length{YType::uint16, "tlv-length"},
    tlv_type{YType::uint16, "tlv-type"}
{
    yang_name = "tlv"; yang_parent_name = "opaque-el-lsa-type";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return mpls_dste_link.is_set
	|| mpls_router_id.is_set
	|| tlv_data.is_set
	|| tlv_length.is_set
	|| tlv_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mpls_dste_link.operation)
	|| is_set(mpls_router_id.operation)
	|| is_set(tlv_data.operation)
	|| is_set(tlv_length.operation)
	|| is_set(tlv_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_dste_link.is_set || is_set(mpls_dste_link.operation)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.operation)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.operation)) leaf_name_data.push_back(tlv_data.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.operation)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (tlv_type.is_set || is_set(tlv_type.operation)) leaf_name_data.push_back(tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "te-link-sub-tlv")
    {
        for(auto const & c : te_link_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(std::move(c));
        children[segment_path] = te_link_sub_tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_children()
{
    for (auto const & c : te_link_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
    }
    if(value_path == "tlv-type")
    {
        tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{
    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_length.is_set
	|| sub_tlv_type.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(sub_tlv_length.operation)
	|| is_set(sub_tlv_type.operation)
	|| is_set(sub_tlv_value.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeLinkSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_length.is_set || is_set(sub_tlv_length.operation)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_type.is_set || is_set(sub_tlv_type.operation)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.operation)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummaries()
{
    yang_name = "lsa-summaries"; yang_parent_name = "database";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::~LsaSummaries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::has_data() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::has_operation() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summaries";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaSummaries' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-summary")
    {
        for(auto const & c : lsa_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary>();
        c->parent = this;
        lsa_summary.push_back(std::move(c));
        children[segment_path] = lsa_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::get_children()
{
    for (auto const & c : lsa_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaSummary()
    :
    advertising_router{YType::str, "advertising-router"},
    area_id{YType::int32, "area-id"},
    external_tag{YType::uint32, "external-tag"},
    interface_name{YType::str, "interface-name"},
    link_count{YType::uint16, "link-count"},
    ls_id{YType::str, "ls-id"},
    ls_type{YType::enumeration, "ls-type"}
    	,
    lsa_header(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader>())
{
    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "lsa-summary"; yang_parent_name = "lsa-summaries";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::~LsaSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::has_data() const
{
    return advertising_router.is_set
	|| area_id.is_set
	|| external_tag.is_set
	|| interface_name.is_set
	|| link_count.is_set
	|| ls_id.is_set
	|| ls_type.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(area_id.operation)
	|| is_set(external_tag.operation)
	|| is_set(interface_name.operation)
	|| is_set(link_count.operation)
	|| is_set(ls_id.operation)
	|| is_set(ls_type.operation)
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaSummary' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.operation)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_count.is_set || is_set(link_count.operation)) leaf_name_data.push_back(link_count.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.operation)) leaf_name_data.push_back(ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::get_children()
{
    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "link-count")
    {
        link_count = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    ls_type{YType::enumeration, "ls-type"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsid{YType::str, "lsid"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "lsa-summary";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| dn_age_lsa.is_set
	|| ls_type.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsid.is_set
	|| nsf.is_set
	|| sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(dn_age_lsa.operation)
	|| is_set(ls_type.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsid.operation)
	|| is_set(nsf.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.operation)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.operation)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.operation)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.operation)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsid")
    {
        lsid = value;
    }
    if(value_path == "nsf")
    {
        nsf = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixes()
{
    yang_name = "summary-prefixes"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefixes' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary-prefix")
    {
        for(auto const & c : summary_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(std::move(c));
        children[segment_path] = summary_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_children()
{
    for (auto const & c : summary_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    netmask{YType::str, "netmask"},
    prefix{YType::str, "prefix"},
    summary_mask{YType::str, "summary-mask"},
    summary_metric{YType::uint32, "summary-metric"},
    summary_metric_type{YType::enumeration, "summary-metric-type"},
    summary_prefix{YType::str, "summary-prefix"},
    summary_tag{YType::uint32, "summary-tag"}
{
    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes";
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_data() const
{
    return netmask.is_set
	|| prefix.is_set
	|| summary_mask.is_set
	|| summary_metric.is_set
	|| summary_metric_type.is_set
	|| summary_prefix.is_set
	|| summary_tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(netmask.operation)
	|| is_set(prefix.operation)
	|| is_set(summary_mask.operation)
	|| is_set(summary_metric.operation)
	|| is_set(summary_metric_type.operation)
	|| is_set(summary_prefix.operation)
	|| is_set(summary_tag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefix' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (summary_mask.is_set || is_set(summary_mask.operation)) leaf_name_data.push_back(summary_mask.get_name_leafdata());
    if (summary_metric.is_set || is_set(summary_metric.operation)) leaf_name_data.push_back(summary_metric.get_name_leafdata());
    if (summary_metric_type.is_set || is_set(summary_metric_type.operation)) leaf_name_data.push_back(summary_metric_type.get_name_leafdata());
    if (summary_prefix.is_set || is_set(summary_prefix.operation)) leaf_name_data.push_back(summary_prefix.get_name_leafdata());
    if (summary_tag.is_set || is_set(summary_tag.operation)) leaf_name_data.push_back(summary_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "netmask")
    {
        netmask = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "summary-mask")
    {
        summary_mask = value;
    }
    if(value_path == "summary-metric")
    {
        summary_metric = value;
    }
    if(value_path == "summary-metric-type")
    {
        summary_metric_type = value;
    }
    if(value_path == "summary-prefix")
    {
        summary_prefix = value;
    }
    if(value_path == "summary-tag")
    {
        summary_tag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::AreaStatistics()
    :
    interface_stats_entries(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries>())
{
    interface_stats_entries->parent = this;
    children["interface-stats-entries"] = interface_stats_entries;

    yang_name = "area-statistics"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::~AreaStatistics()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::has_data() const
{
    return (interface_stats_entries !=  nullptr && interface_stats_entries->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::has_operation() const
{
    return is_set(operation)
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaStatistics' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries != nullptr)
        {
            children["interface-stats-entries"] = interface_stats_entries;
        }
        else
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries>();
            interface_stats_entries->parent = this;
            children["interface-stats-entries"] = interface_stats_entries;
        }
        return children.at("interface-stats-entries");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_children()
{
    if(children.find("interface-stats-entries") == children.end())
    {
        if(interface_stats_entries != nullptr)
        {
            children["interface-stats-entries"] = interface_stats_entries;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntries()
{
    yang_name = "interface-stats-entries"; yang_parent_name = "area-statistics";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatsEntries' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-stats-entry")
    {
        for(auto const & c : interface_stats_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(std::move(c));
        children[segment_path] = interface_stats_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_children()
{
    for (auto const & c : interface_stats_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{
    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| handle.is_set
	|| if_name_str.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(handle.operation)
	|| is_set(if_name_str.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatsEntry' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.operation)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.operation)) leaf_name_data.push_back(if_name_str.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "if-entry")
    {
        for(auto const & c : if_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(std::move(c));
        children[segment_path] = if_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children()
{
    for (auto const & c : if_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "handle")
    {
        handle = value;
    }
    if(value_path == "if-name-str")
    {
        if_name_str = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"},
    if_stat{YType::uint32, "if-stat"},
    madj_intf{YType::boolean, "madj-intf"}
{
    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry";
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
{
    for (auto const & leaf : if_stat.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return area_id.is_set
	|| area_id_str.is_set
	|| madj_intf.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
{
    for (auto const & leaf : if_stat.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(area_id_str.operation)
	|| is_set(if_stat.operation)
	|| is_set(madj_intf.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfEntry' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.operation)) leaf_name_data.push_back(area_id_str.get_name_leafdata());
    if (madj_intf.is_set || is_set(madj_intf.operation)) leaf_name_data.push_back(madj_intf.get_name_leafdata());

    auto if_stat_name_datas = if_stat.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), if_stat_name_datas.begin(), if_stat_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "area-id-str")
    {
        area_id_str = value;
    }
    if(value_path == "if-stat")
    {
        if_stat.append(value);
    }
    if(value_path == "madj-intf")
    {
        madj_intf = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::OspfSummary()
    :
    sa_lsa_cnt_type_7ase{YType::uint32, "sa-lsa-cnt-type-7ase"},
    sa_lsa_cnt_type_8_ignore{YType::uint32, "sa-lsa-cnt-type-8-ignore"},
    sa_lsa_cnt_type_ase{YType::uint32, "sa-lsa-cnt-type-ase"},
    sa_lsa_cnt_type_mospf{YType::uint32, "sa-lsa-cnt-type-mospf"},
    sa_lsa_cnt_type_net{YType::uint32, "sa-lsa-cnt-type-net"},
    sa_lsa_cnt_type_opq_area{YType::uint32, "sa-lsa-cnt-type-opq-area"},
    sa_lsa_cnt_type_opq_as{YType::uint32, "sa-lsa-cnt-type-opq-as"},
    sa_lsa_cnt_type_opq_link{YType::uint32, "sa-lsa-cnt-type-opq-link"},
    sa_lsa_cnt_type_rtr{YType::uint32, "sa-lsa-cnt-type-rtr"},
    sa_lsa_cnt_type_sum_asb{YType::uint32, "sa-lsa-cnt-type-sum-asb"},
    sa_lsa_cnt_type_sum_net{YType::uint32, "sa-lsa-cnt-type-sum-net"},
    sa_num_areas{YType::uint32, "sa-num-areas"},
    sa_num_intf{YType::uint32, "sa-num-intf"},
    sa_num_intf_up{YType::uint32, "sa-num-intf-up"},
    sa_num_nbrs{YType::uint32, "sa-num-nbrs"},
    sa_num_nbrs_up{YType::uint32, "sa-num-nbrs-up"},
    sa_num_slintf_up{YType::uint32, "sa-num-slintf-up"},
    sa_num_vintf_up{YType::uint32, "sa-num-vintf-up"}
{
    yang_name = "ospf-summary"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::~OspfSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::has_data() const
{
    return sa_lsa_cnt_type_7ase.is_set
	|| sa_lsa_cnt_type_8_ignore.is_set
	|| sa_lsa_cnt_type_ase.is_set
	|| sa_lsa_cnt_type_mospf.is_set
	|| sa_lsa_cnt_type_net.is_set
	|| sa_lsa_cnt_type_opq_area.is_set
	|| sa_lsa_cnt_type_opq_as.is_set
	|| sa_lsa_cnt_type_opq_link.is_set
	|| sa_lsa_cnt_type_rtr.is_set
	|| sa_lsa_cnt_type_sum_asb.is_set
	|| sa_lsa_cnt_type_sum_net.is_set
	|| sa_num_areas.is_set
	|| sa_num_intf.is_set
	|| sa_num_intf_up.is_set
	|| sa_num_nbrs.is_set
	|| sa_num_nbrs_up.is_set
	|| sa_num_slintf_up.is_set
	|| sa_num_vintf_up.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(sa_lsa_cnt_type_7ase.operation)
	|| is_set(sa_lsa_cnt_type_8_ignore.operation)
	|| is_set(sa_lsa_cnt_type_ase.operation)
	|| is_set(sa_lsa_cnt_type_mospf.operation)
	|| is_set(sa_lsa_cnt_type_net.operation)
	|| is_set(sa_lsa_cnt_type_opq_area.operation)
	|| is_set(sa_lsa_cnt_type_opq_as.operation)
	|| is_set(sa_lsa_cnt_type_opq_link.operation)
	|| is_set(sa_lsa_cnt_type_rtr.operation)
	|| is_set(sa_lsa_cnt_type_sum_asb.operation)
	|| is_set(sa_lsa_cnt_type_sum_net.operation)
	|| is_set(sa_num_areas.operation)
	|| is_set(sa_num_intf.operation)
	|| is_set(sa_num_intf_up.operation)
	|| is_set(sa_num_nbrs.operation)
	|| is_set(sa_num_nbrs_up.operation)
	|| is_set(sa_num_slintf_up.operation)
	|| is_set(sa_num_vintf_up.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-summary";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OspfSummary' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_lsa_cnt_type_7ase.is_set || is_set(sa_lsa_cnt_type_7ase.operation)) leaf_name_data.push_back(sa_lsa_cnt_type_7ase.get_name_leafdata());
    if (sa_lsa_cnt_type_8_ignore.is_set || is_set(sa_lsa_cnt_type_8_ignore.operation)) leaf_name_data.push_back(sa_lsa_cnt_type_8_ignore.get_name_leafdata());
    if (sa_lsa_cnt_type_ase.is_set || is_set(sa_lsa_cnt_type_ase.operation)) leaf_name_data.push_back(sa_lsa_cnt_type_ase.get_name_leafdata());
    if (sa_lsa_cnt_type_mospf.is_set || is_set(sa_lsa_cnt_type_mospf.operation)) leaf_name_data.push_back(sa_lsa_cnt_type_mospf.get_name_leafdata());
    if (sa_lsa_cnt_type_net.is_set || is_set(sa_lsa_cnt_type_net.operation)) leaf_name_data.push_back(sa_lsa_cnt_type_net.get_name_leafdata());
    if (sa_lsa_cnt_type_opq_area.is_set || is_set(sa_lsa_cnt_type_opq_area.operation)) leaf_name_data.push_back(sa_lsa_cnt_type_opq_area.get_name_leafdata());
    if (sa_lsa_cnt_type_opq_as.is_set || is_set(sa_lsa_cnt_type_opq_as.operation)) leaf_name_data.push_back(sa_lsa_cnt_type_opq_as.get_name_leafdata());
    if (sa_lsa_cnt_type_opq_link.is_set || is_set(sa_lsa_cnt_type_opq_link.operation)) leaf_name_data.push_back(sa_lsa_cnt_type_opq_link.get_name_leafdata());
    if (sa_lsa_cnt_type_rtr.is_set || is_set(sa_lsa_cnt_type_rtr.operation)) leaf_name_data.push_back(sa_lsa_cnt_type_rtr.get_name_leafdata());
    if (sa_lsa_cnt_type_sum_asb.is_set || is_set(sa_lsa_cnt_type_sum_asb.operation)) leaf_name_data.push_back(sa_lsa_cnt_type_sum_asb.get_name_leafdata());
    if (sa_lsa_cnt_type_sum_net.is_set || is_set(sa_lsa_cnt_type_sum_net.operation)) leaf_name_data.push_back(sa_lsa_cnt_type_sum_net.get_name_leafdata());
    if (sa_num_areas.is_set || is_set(sa_num_areas.operation)) leaf_name_data.push_back(sa_num_areas.get_name_leafdata());
    if (sa_num_intf.is_set || is_set(sa_num_intf.operation)) leaf_name_data.push_back(sa_num_intf.get_name_leafdata());
    if (sa_num_intf_up.is_set || is_set(sa_num_intf_up.operation)) leaf_name_data.push_back(sa_num_intf_up.get_name_leafdata());
    if (sa_num_nbrs.is_set || is_set(sa_num_nbrs.operation)) leaf_name_data.push_back(sa_num_nbrs.get_name_leafdata());
    if (sa_num_nbrs_up.is_set || is_set(sa_num_nbrs_up.operation)) leaf_name_data.push_back(sa_num_nbrs_up.get_name_leafdata());
    if (sa_num_slintf_up.is_set || is_set(sa_num_slintf_up.operation)) leaf_name_data.push_back(sa_num_slintf_up.get_name_leafdata());
    if (sa_num_vintf_up.is_set || is_set(sa_num_vintf_up.operation)) leaf_name_data.push_back(sa_num_vintf_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sa-lsa-cnt-type-7ase")
    {
        sa_lsa_cnt_type_7ase = value;
    }
    if(value_path == "sa-lsa-cnt-type-8-ignore")
    {
        sa_lsa_cnt_type_8_ignore = value;
    }
    if(value_path == "sa-lsa-cnt-type-ase")
    {
        sa_lsa_cnt_type_ase = value;
    }
    if(value_path == "sa-lsa-cnt-type-mospf")
    {
        sa_lsa_cnt_type_mospf = value;
    }
    if(value_path == "sa-lsa-cnt-type-net")
    {
        sa_lsa_cnt_type_net = value;
    }
    if(value_path == "sa-lsa-cnt-type-opq-area")
    {
        sa_lsa_cnt_type_opq_area = value;
    }
    if(value_path == "sa-lsa-cnt-type-opq-as")
    {
        sa_lsa_cnt_type_opq_as = value;
    }
    if(value_path == "sa-lsa-cnt-type-opq-link")
    {
        sa_lsa_cnt_type_opq_link = value;
    }
    if(value_path == "sa-lsa-cnt-type-rtr")
    {
        sa_lsa_cnt_type_rtr = value;
    }
    if(value_path == "sa-lsa-cnt-type-sum-asb")
    {
        sa_lsa_cnt_type_sum_asb = value;
    }
    if(value_path == "sa-lsa-cnt-type-sum-net")
    {
        sa_lsa_cnt_type_sum_net = value;
    }
    if(value_path == "sa-num-areas")
    {
        sa_num_areas = value;
    }
    if(value_path == "sa-num-intf")
    {
        sa_num_intf = value;
    }
    if(value_path == "sa-num-intf-up")
    {
        sa_num_intf_up = value;
    }
    if(value_path == "sa-num-nbrs")
    {
        sa_num_nbrs = value;
    }
    if(value_path == "sa-num-nbrs-up")
    {
        sa_num_nbrs_up = value;
    }
    if(value_path == "sa-num-slintf-up")
    {
        sa_num_slintf_up = value;
    }
    if(value_path == "sa-num-vintf-up")
    {
        sa_num_vintf_up = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::FastReroute()
    :
    topologies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies>())
{
    topologies->parent = this;
    children["topologies"] = topologies;

    yang_name = "fast-reroute"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::has_data() const
{
    return (topologies !=  nullptr && topologies->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::has_operation() const
{
    return is_set(operation)
	|| (topologies !=  nullptr && topologies->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topologies")
    {
        if(topologies != nullptr)
        {
            children["topologies"] = topologies;
        }
        else
        {
            topologies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies>();
            topologies->parent = this;
            children["topologies"] = topologies;
        }
        return children.at("topologies");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_children()
{
    if(children.find("topologies") == children.end())
    {
        if(topologies != nullptr)
        {
            children["topologies"] = topologies;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topologies()
{
    yang_name = "topologies"; yang_parent_name = "fast-reroute";
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::~Topologies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topologies' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology>();
        c->parent = this;
        topology.push_back(std::move(c));
        children[segment_path] = topology.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::get_children()
{
    for (auto const & c : topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::Topology()
    :
    area_id{YType::int32, "area-id"},
    ipfrr_area_revision{YType::uint32, "ipfrr-area-revision"},
    ipfrr_router_id{YType::str, "ipfrr-router-id"},
    ipfrr_topo_area_id{YType::str, "ipfrr-topo-area-id"},
    router_id{YType::str, "router-id"}
{
    yang_name = "topology"; yang_parent_name = "topologies";
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::~Topology()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::has_data() const
{
    for (std::size_t index=0; index<ipfrr_topo.size(); index++)
    {
        if(ipfrr_topo[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| ipfrr_area_revision.is_set
	|| ipfrr_router_id.is_set
	|| ipfrr_topo_area_id.is_set
	|| router_id.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_topo.size(); index++)
    {
        if(ipfrr_topo[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(ipfrr_area_revision.operation)
	|| is_set(ipfrr_router_id.operation)
	|| is_set(ipfrr_topo_area_id.operation)
	|| is_set(router_id.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ipfrr_area_revision.is_set || is_set(ipfrr_area_revision.operation)) leaf_name_data.push_back(ipfrr_area_revision.get_name_leafdata());
    if (ipfrr_router_id.is_set || is_set(ipfrr_router_id.operation)) leaf_name_data.push_back(ipfrr_router_id.get_name_leafdata());
    if (ipfrr_topo_area_id.is_set || is_set(ipfrr_topo_area_id.operation)) leaf_name_data.push_back(ipfrr_topo_area_id.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipfrr-topo")
    {
        for(auto const & c : ipfrr_topo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo>();
        c->parent = this;
        ipfrr_topo.push_back(std::move(c));
        children[segment_path] = ipfrr_topo.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::get_children()
{
    for (auto const & c : ipfrr_topo)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "ipfrr-area-revision")
    {
        ipfrr_area_revision = value;
    }
    if(value_path == "ipfrr-router-id")
    {
        ipfrr_router_id = value;
    }
    if(value_path == "ipfrr-topo-area-id")
    {
        ipfrr_topo_area_id = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::IpfrrTopo()
    :
    distance{YType::uint32, "distance"},
    distance_reverse{YType::uint32, "distance-reverse"},
    dr{YType::boolean, "dr"},
    neighbor_sourced{YType::boolean, "neighbor-sourced"},
    node_id{YType::str, "node-id"},
    poison{YType::boolean, "poison"},
    revision{YType::uint32, "revision"},
    type4{YType::boolean, "type4"}
{
    yang_name = "ipfrr-topo"; yang_parent_name = "topology";
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::~IpfrrTopo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::has_data() const
{
    return distance.is_set
	|| distance_reverse.is_set
	|| dr.is_set
	|| neighbor_sourced.is_set
	|| node_id.is_set
	|| poison.is_set
	|| revision.is_set
	|| type4.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::has_operation() const
{
    return is_set(operation)
	|| is_set(distance.operation)
	|| is_set(distance_reverse.operation)
	|| is_set(dr.operation)
	|| is_set(neighbor_sourced.operation)
	|| is_set(node_id.operation)
	|| is_set(poison.operation)
	|| is_set(revision.operation)
	|| is_set(type4.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-topo";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrTopo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (distance_reverse.is_set || is_set(distance_reverse.operation)) leaf_name_data.push_back(distance_reverse.get_name_leafdata());
    if (dr.is_set || is_set(dr.operation)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (neighbor_sourced.is_set || is_set(neighbor_sourced.operation)) leaf_name_data.push_back(neighbor_sourced.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (poison.is_set || is_set(poison.operation)) leaf_name_data.push_back(poison.get_name_leafdata());
    if (revision.is_set || is_set(revision.operation)) leaf_name_data.push_back(revision.get_name_leafdata());
    if (type4.is_set || is_set(type4.operation)) leaf_name_data.push_back(type4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::get_children()
{
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "distance-reverse")
    {
        distance_reverse = value;
    }
    if(value_path == "dr")
    {
        dr = value;
    }
    if(value_path == "neighbor-sourced")
    {
        neighbor_sourced = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "poison")
    {
        poison = value;
    }
    if(value_path == "revision")
    {
        revision = value;
    }
    if(value_path == "type4")
    {
        type4 = value;
    }
}

Ospf::Processes::Process::Srms::Srms()
    :
    policy(std::make_shared<Ospf::Processes::Process::Srms::Policy>())
{
    policy->parent = this;
    children["policy"] = policy;

    yang_name = "srms"; yang_parent_name = "process";
}

Ospf::Processes::Process::Srms::~Srms()
{
}

bool Ospf::Processes::Process::Srms::has_data() const
{
    return (policy !=  nullptr && policy->has_data());
}

bool Ospf::Processes::Process::Srms::has_operation() const
{
    return is_set(operation)
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Ospf::Processes::Process::Srms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srms";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Srms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srms' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy")
    {
        if(policy != nullptr)
        {
            children["policy"] = policy;
        }
        else
        {
            policy = std::make_shared<Ospf::Processes::Process::Srms::Policy>();
            policy->parent = this;
            children["policy"] = policy;
        }
        return children.at("policy");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Srms::get_children()
{
    if(children.find("policy") == children.end())
    {
        if(policy != nullptr)
        {
            children["policy"] = policy;
        }
    }

    return children;
}

void Ospf::Processes::Process::Srms::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Srms::Policy::Policy()
    :
    policy_ipv4(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4>())
{
    policy_ipv4->parent = this;
    children["policy-ipv4"] = policy_ipv4;

    yang_name = "policy"; yang_parent_name = "srms";
}

Ospf::Processes::Process::Srms::Policy::~Policy()
{
}

bool Ospf::Processes::Process::Srms::Policy::has_data() const
{
    return (policy_ipv4 !=  nullptr && policy_ipv4->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::has_operation() const
{
    return is_set(operation)
	|| (policy_ipv4 !=  nullptr && policy_ipv4->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Srms::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Policy' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-ipv4")
    {
        if(policy_ipv4 != nullptr)
        {
            children["policy-ipv4"] = policy_ipv4;
        }
        else
        {
            policy_ipv4 = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4>();
            policy_ipv4->parent = this;
            children["policy-ipv4"] = policy_ipv4;
        }
        return children.at("policy-ipv4");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Srms::Policy::get_children()
{
    if(children.find("policy-ipv4") == children.end())
    {
        if(policy_ipv4 != nullptr)
        {
            children["policy-ipv4"] = policy_ipv4;
        }
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4()
    :
    policy_ipv4_active(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active>())
	,policy_ipv4_backup(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>())
{
    policy_ipv4_active->parent = this;
    children["policy-ipv4-active"] = policy_ipv4_active;

    policy_ipv4_backup->parent = this;
    children["policy-ipv4-backup"] = policy_ipv4_backup;

    yang_name = "policy-ipv4"; yang_parent_name = "policy";
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::~PolicyIpv4()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::has_data() const
{
    return (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_data())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::has_operation() const
{
    return is_set(operation)
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_operation())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv4' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-ipv4-active")
    {
        if(policy_ipv4_active != nullptr)
        {
            children["policy-ipv4-active"] = policy_ipv4_active;
        }
        else
        {
            policy_ipv4_active = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active>();
            policy_ipv4_active->parent = this;
            children["policy-ipv4-active"] = policy_ipv4_active;
        }
        return children.at("policy-ipv4-active");
    }

    if(child_yang_name == "policy-ipv4-backup")
    {
        if(policy_ipv4_backup != nullptr)
        {
            children["policy-ipv4-backup"] = policy_ipv4_backup;
        }
        else
        {
            policy_ipv4_backup = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>();
            policy_ipv4_backup->parent = this;
            children["policy-ipv4-backup"] = policy_ipv4_backup;
        }
        return children.at("policy-ipv4-backup");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_children()
{
    if(children.find("policy-ipv4-active") == children.end())
    {
        if(policy_ipv4_active != nullptr)
        {
            children["policy-ipv4-active"] = policy_ipv4_active;
        }
    }

    if(children.find("policy-ipv4-backup") == children.end())
    {
        if(policy_ipv4_backup != nullptr)
        {
            children["policy-ipv4-backup"] = policy_ipv4_backup;
        }
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyIpv4Backup()
{
    yang_name = "policy-ipv4-backup"; yang_parent_name = "policy-ipv4";
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::~PolicyIpv4Backup()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-backup";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv4Backup' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(std::move(c));
        children[segment_path] = policy_mi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_children()
{
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>())
{
    addr->parent = this;
    children["addr"] = addr;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-backup";
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::~PolicyMi()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_operation() const
{
    return is_set(operation)
	|| is_set(mi_id.operation)
	|| is_set(area.operation)
	|| is_set(flag_attached.operation)
	|| is_set(last_prefix.operation)
	|| is_set(last_sid_index.operation)
	|| is_set(prefix.operation)
	|| is_set(router.operation)
	|| is_set(sid_count.operation)
	|| is_set(sid_start.operation)
	|| is_set(src.operation)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMi' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.operation)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.operation)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.operation)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.operation)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.operation)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.operation)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.operation)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addr")
    {
        if(addr != nullptr)
        {
            children["addr"] = addr;
        }
        else
        {
            addr = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>();
            addr->parent = this;
            children["addr"] = addr;
        }
        return children.at("addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_children()
{
    if(children.find("addr") == children.end())
    {
        if(addr != nullptr)
        {
            children["addr"] = addr;
        }
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
    }
    if(value_path == "src")
    {
        src = value;
    }
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "policy-mi";
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::~Addr()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addr' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_children()
{
    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyIpv4Active()
{
    yang_name = "policy-ipv4-active"; yang_parent_name = "policy-ipv4";
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::~PolicyIpv4Active()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-active";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv4Active' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(std::move(c));
        children[segment_path] = policy_mi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_children()
{
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>())
{
    addr->parent = this;
    children["addr"] = addr;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-active";
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::~PolicyMi()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_operation() const
{
    return is_set(operation)
	|| is_set(mi_id.operation)
	|| is_set(area.operation)
	|| is_set(flag_attached.operation)
	|| is_set(last_prefix.operation)
	|| is_set(last_sid_index.operation)
	|| is_set(prefix.operation)
	|| is_set(router.operation)
	|| is_set(sid_count.operation)
	|| is_set(sid_start.operation)
	|| is_set(src.operation)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMi' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.operation)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.operation)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.operation)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.operation)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.operation)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.operation)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.operation)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addr")
    {
        if(addr != nullptr)
        {
            children["addr"] = addr;
        }
        else
        {
            addr = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>();
            addr->parent = this;
            children["addr"] = addr;
        }
        return children.at("addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_children()
{
    if(children.find("addr") == children.end())
    {
        if(addr != nullptr)
        {
            children["addr"] = addr;
        }
    }

    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
    }
    if(value_path == "src")
    {
        src = value;
    }
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "policy-mi";
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::~Addr()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addr' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_children()
{
    return children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Ospf::Processes::Process::DefaultVrf::DefaultVrf()
    :
    adjacency_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation>())
	,area_statistics(std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics>())
	,areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas>())
	,border_routers(std::make_shared<Ospf::Processes::Process::DefaultVrf::BorderRouters>())
	,database(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database>())
	,fast_reroute(std::make_shared<Ospf::Processes::Process::DefaultVrf::FastReroute>())
	,flood_list_table(std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable>())
	,interface_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation>())
	,mpls_te(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe>())
	,ospf_summary(std::make_shared<Ospf::Processes::Process::DefaultVrf::OspfSummary>())
	,process_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation>())
	,route_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation>())
	,statistics(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics>())
	,summary_prefixes(std::make_shared<Ospf::Processes::Process::DefaultVrf::SummaryPrefixes>())
{
    adjacency_information->parent = this;
    children["adjacency-information"] = adjacency_information;

    area_statistics->parent = this;
    children["area-statistics"] = area_statistics;

    areas->parent = this;
    children["areas"] = areas;

    border_routers->parent = this;
    children["border-routers"] = border_routers;

    database->parent = this;
    children["database"] = database;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    flood_list_table->parent = this;
    children["flood-list-table"] = flood_list_table;

    interface_information->parent = this;
    children["interface-information"] = interface_information;

    mpls_te->parent = this;
    children["mpls-te"] = mpls_te;

    ospf_summary->parent = this;
    children["ospf-summary"] = ospf_summary;

    process_information->parent = this;
    children["process-information"] = process_information;

    route_information->parent = this;
    children["route-information"] = route_information;

    statistics->parent = this;
    children["statistics"] = statistics;

    summary_prefixes->parent = this;
    children["summary-prefixes"] = summary_prefixes;

    yang_name = "default-vrf"; yang_parent_name = "process";
}

Ospf::Processes::Process::DefaultVrf::~DefaultVrf()
{
}

bool Ospf::Processes::Process::DefaultVrf::has_data() const
{
    return (adjacency_information !=  nullptr && adjacency_information->has_data())
	|| (area_statistics !=  nullptr && area_statistics->has_data())
	|| (areas !=  nullptr && areas->has_data())
	|| (border_routers !=  nullptr && border_routers->has_data())
	|| (database !=  nullptr && database->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (flood_list_table !=  nullptr && flood_list_table->has_data())
	|| (interface_information !=  nullptr && interface_information->has_data())
	|| (mpls_te !=  nullptr && mpls_te->has_data())
	|| (ospf_summary !=  nullptr && ospf_summary->has_data())
	|| (process_information !=  nullptr && process_information->has_data())
	|| (route_information !=  nullptr && route_information->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| (adjacency_information !=  nullptr && adjacency_information->has_operation())
	|| (area_statistics !=  nullptr && area_statistics->has_operation())
	|| (areas !=  nullptr && areas->has_operation())
	|| (border_routers !=  nullptr && border_routers->has_operation())
	|| (database !=  nullptr && database->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (flood_list_table !=  nullptr && flood_list_table->has_operation())
	|| (interface_information !=  nullptr && interface_information->has_operation())
	|| (mpls_te !=  nullptr && mpls_te->has_operation())
	|| (ospf_summary !=  nullptr && ospf_summary->has_operation())
	|| (process_information !=  nullptr && process_information->has_operation())
	|| (route_information !=  nullptr && route_information->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultVrf' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-information")
    {
        if(adjacency_information != nullptr)
        {
            children["adjacency-information"] = adjacency_information;
        }
        else
        {
            adjacency_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation>();
            adjacency_information->parent = this;
            children["adjacency-information"] = adjacency_information;
        }
        return children.at("adjacency-information");
    }

    if(child_yang_name == "area-statistics")
    {
        if(area_statistics != nullptr)
        {
            children["area-statistics"] = area_statistics;
        }
        else
        {
            area_statistics = std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics>();
            area_statistics->parent = this;
            children["area-statistics"] = area_statistics;
        }
        return children.at("area-statistics");
    }

    if(child_yang_name == "areas")
    {
        if(areas != nullptr)
        {
            children["areas"] = areas;
        }
        else
        {
            areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas>();
            areas->parent = this;
            children["areas"] = areas;
        }
        return children.at("areas");
    }

    if(child_yang_name == "border-routers")
    {
        if(border_routers != nullptr)
        {
            children["border-routers"] = border_routers;
        }
        else
        {
            border_routers = std::make_shared<Ospf::Processes::Process::DefaultVrf::BorderRouters>();
            border_routers->parent = this;
            children["border-routers"] = border_routers;
        }
        return children.at("border-routers");
    }

    if(child_yang_name == "database")
    {
        if(database != nullptr)
        {
            children["database"] = database;
        }
        else
        {
            database = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database>();
            database->parent = this;
            children["database"] = database;
        }
        return children.at("database");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::DefaultVrf::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "flood-list-table")
    {
        if(flood_list_table != nullptr)
        {
            children["flood-list-table"] = flood_list_table;
        }
        else
        {
            flood_list_table = std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable>();
            flood_list_table->parent = this;
            children["flood-list-table"] = flood_list_table;
        }
        return children.at("flood-list-table");
    }

    if(child_yang_name == "interface-information")
    {
        if(interface_information != nullptr)
        {
            children["interface-information"] = interface_information;
        }
        else
        {
            interface_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation>();
            interface_information->parent = this;
            children["interface-information"] = interface_information;
        }
        return children.at("interface-information");
    }

    if(child_yang_name == "mpls-te")
    {
        if(mpls_te != nullptr)
        {
            children["mpls-te"] = mpls_te;
        }
        else
        {
            mpls_te = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe>();
            mpls_te->parent = this;
            children["mpls-te"] = mpls_te;
        }
        return children.at("mpls-te");
    }

    if(child_yang_name == "ospf-summary")
    {
        if(ospf_summary != nullptr)
        {
            children["ospf-summary"] = ospf_summary;
        }
        else
        {
            ospf_summary = std::make_shared<Ospf::Processes::Process::DefaultVrf::OspfSummary>();
            ospf_summary->parent = this;
            children["ospf-summary"] = ospf_summary;
        }
        return children.at("ospf-summary");
    }

    if(child_yang_name == "process-information")
    {
        if(process_information != nullptr)
        {
            children["process-information"] = process_information;
        }
        else
        {
            process_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation>();
            process_information->parent = this;
            children["process-information"] = process_information;
        }
        return children.at("process-information");
    }

    if(child_yang_name == "route-information")
    {
        if(route_information != nullptr)
        {
            children["route-information"] = route_information;
        }
        else
        {
            route_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation>();
            route_information->parent = this;
            children["route-information"] = route_information;
        }
        return children.at("route-information");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
        else
        {
            summary_prefixes = std::make_shared<Ospf::Processes::Process::DefaultVrf::SummaryPrefixes>();
            summary_prefixes->parent = this;
            children["summary-prefixes"] = summary_prefixes;
        }
        return children.at("summary-prefixes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::get_children()
{
    if(children.find("adjacency-information") == children.end())
    {
        if(adjacency_information != nullptr)
        {
            children["adjacency-information"] = adjacency_information;
        }
    }

    if(children.find("area-statistics") == children.end())
    {
        if(area_statistics != nullptr)
        {
            children["area-statistics"] = area_statistics;
        }
    }

    if(children.find("areas") == children.end())
    {
        if(areas != nullptr)
        {
            children["areas"] = areas;
        }
    }

    if(children.find("border-routers") == children.end())
    {
        if(border_routers != nullptr)
        {
            children["border-routers"] = border_routers;
        }
    }

    if(children.find("database") == children.end())
    {
        if(database != nullptr)
        {
            children["database"] = database;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("flood-list-table") == children.end())
    {
        if(flood_list_table != nullptr)
        {
            children["flood-list-table"] = flood_list_table;
        }
    }

    if(children.find("interface-information") == children.end())
    {
        if(interface_information != nullptr)
        {
            children["interface-information"] = interface_information;
        }
    }

    if(children.find("mpls-te") == children.end())
    {
        if(mpls_te != nullptr)
        {
            children["mpls-te"] = mpls_te;
        }
    }

    if(children.find("ospf-summary") == children.end())
    {
        if(ospf_summary != nullptr)
        {
            children["ospf-summary"] = ospf_summary;
        }
    }

    if(children.find("process-information") == children.end())
    {
        if(process_information != nullptr)
        {
            children["process-information"] = process_information;
        }
    }

    if(children.find("route-information") == children.end())
    {
        if(route_information != nullptr)
        {
            children["route-information"] = route_information;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    if(children.find("summary-prefixes") == children.end())
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::FloodListTable()
{
    yang_name = "flood-list-table"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::~FloodListTable()
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::has_data() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::has_operation() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::FloodListTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-list-table";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::FloodListTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodListTable' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flood")
    {
        for(auto const & c : flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood>();
        c->parent = this;
        flood.push_back(std::move(c));
        children[segment_path] = flood.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::FloodListTable::get_children()
{
    for (auto const & c : flood)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::Flood()
    :
    interface_name{YType::str, "interface-name"},
    flood_interface_name{YType::str, "flood-interface-name"},
    flood_lsa_count{YType::uint32, "flood-lsa-count"},
    flood_pacing_timer{YType::uint32, "flood-pacing-timer"}
{
    yang_name = "flood"; yang_parent_name = "flood-list-table";
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::~Flood()
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::has_data() const
{
    for (std::size_t index=0; index<area_flood.size(); index++)
    {
        if(area_flood[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<as_flood.size(); index++)
    {
        if(as_flood[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| flood_interface_name.is_set
	|| flood_lsa_count.is_set
	|| flood_pacing_timer.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::has_operation() const
{
    for (std::size_t index=0; index<area_flood.size(); index++)
    {
        if(area_flood[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<as_flood.size(); index++)
    {
        if(as_flood[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(flood_interface_name.operation)
	|| is_set(flood_lsa_count.operation)
	|| is_set(flood_pacing_timer.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flood' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (flood_interface_name.is_set || is_set(flood_interface_name.operation)) leaf_name_data.push_back(flood_interface_name.get_name_leafdata());
    if (flood_lsa_count.is_set || is_set(flood_lsa_count.operation)) leaf_name_data.push_back(flood_lsa_count.get_name_leafdata());
    if (flood_pacing_timer.is_set || is_set(flood_pacing_timer.operation)) leaf_name_data.push_back(flood_pacing_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-flood")
    {
        for(auto const & c : area_flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood>();
        c->parent = this;
        area_flood.push_back(std::move(c));
        children[segment_path] = area_flood.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "as-flood")
    {
        for(auto const & c : as_flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood>();
        c->parent = this;
        as_flood.push_back(std::move(c));
        children[segment_path] = as_flood.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::get_children()
{
    for (auto const & c : area_flood)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : as_flood)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "flood-interface-name")
    {
        flood_interface_name = value;
    }
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count = value;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer = value;
    }
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::AreaFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "area-flood"; yang_parent_name = "flood";
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::~AreaFlood()
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-flood";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaFlood' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.operation)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.operation)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::AsFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "as-flood"; yang_parent_name = "flood";
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::~AsFlood()
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-flood";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsFlood' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.operation)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.operation)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTe()
    :
    mpls_te_fragments(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments>())
	,mpls_te_links(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks>())
{
    mpls_te_fragments->parent = this;
    children["mpls-te-fragments"] = mpls_te_fragments;

    mpls_te_links->parent = this;
    children["mpls-te-links"] = mpls_te_links;

    yang_name = "mpls-te"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::~MplsTe()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::has_data() const
{
    return (mpls_te_fragments !=  nullptr && mpls_te_fragments->has_data())
	|| (mpls_te_links !=  nullptr && mpls_te_links->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::has_operation() const
{
    return is_set(operation)
	|| (mpls_te_fragments !=  nullptr && mpls_te_fragments->has_operation())
	|| (mpls_te_links !=  nullptr && mpls_te_links->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTe' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-fragments")
    {
        if(mpls_te_fragments != nullptr)
        {
            children["mpls-te-fragments"] = mpls_te_fragments;
        }
        else
        {
            mpls_te_fragments = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments>();
            mpls_te_fragments->parent = this;
            children["mpls-te-fragments"] = mpls_te_fragments;
        }
        return children.at("mpls-te-fragments");
    }

    if(child_yang_name == "mpls-te-links")
    {
        if(mpls_te_links != nullptr)
        {
            children["mpls-te-links"] = mpls_te_links;
        }
        else
        {
            mpls_te_links = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks>();
            mpls_te_links->parent = this;
            children["mpls-te-links"] = mpls_te_links;
        }
        return children.at("mpls-te-links");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::get_children()
{
    if(children.find("mpls-te-fragments") == children.end())
    {
        if(mpls_te_fragments != nullptr)
        {
            children["mpls-te-fragments"] = mpls_te_fragments;
        }
    }

    if(children.find("mpls-te-links") == children.end())
    {
        if(mpls_te_links != nullptr)
        {
            children["mpls-te-links"] = mpls_te_links;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLinks()
{
    yang_name = "mpls-te-links"; yang_parent_name = "mpls-te";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::~MplsTeLinks()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::has_data() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-links";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeLinks' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-link")
    {
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink>();
        c->parent = this;
        mpls_te_link.push_back(std::move(c));
        children[segment_path] = mpls_te_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::get_children()
{
    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink()
    :
    area_id{YType::int32, "area-id"},
    mpls_te_area_id{YType::str, "mpls-te-area-id"},
    mpls_te_area_instance{YType::uint32, "mpls-te-area-instance"},
    mpls_te_enabled{YType::boolean, "mpls-te-enabled"},
    mpls_te_initialized{YType::boolean, "mpls-te-initialized"},
    mpls_te_next_fragment_id{YType::uint32, "mpls-te-next-fragment-id"},
    mpls_te_router_address{YType::str, "mpls-te-router-address"},
    mpls_te_router_id{YType::str, "mpls-te-router-id"},
    spacious_fragment{YType::boolean, "spacious-fragment"}
{
    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-links";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::~MplsTeLink()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::has_data() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| mpls_te_area_id.is_set
	|| mpls_te_area_instance.is_set
	|| mpls_te_enabled.is_set
	|| mpls_te_initialized.is_set
	|| mpls_te_next_fragment_id.is_set
	|| mpls_te_router_address.is_set
	|| mpls_te_router_id.is_set
	|| spacious_fragment.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(mpls_te_area_id.operation)
	|| is_set(mpls_te_area_instance.operation)
	|| is_set(mpls_te_enabled.operation)
	|| is_set(mpls_te_initialized.operation)
	|| is_set(mpls_te_next_fragment_id.operation)
	|| is_set(mpls_te_router_address.operation)
	|| is_set(mpls_te_router_id.operation)
	|| is_set(spacious_fragment.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeLink' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (mpls_te_area_id.is_set || is_set(mpls_te_area_id.operation)) leaf_name_data.push_back(mpls_te_area_id.get_name_leafdata());
    if (mpls_te_area_instance.is_set || is_set(mpls_te_area_instance.operation)) leaf_name_data.push_back(mpls_te_area_instance.get_name_leafdata());
    if (mpls_te_enabled.is_set || is_set(mpls_te_enabled.operation)) leaf_name_data.push_back(mpls_te_enabled.get_name_leafdata());
    if (mpls_te_initialized.is_set || is_set(mpls_te_initialized.operation)) leaf_name_data.push_back(mpls_te_initialized.get_name_leafdata());
    if (mpls_te_next_fragment_id.is_set || is_set(mpls_te_next_fragment_id.operation)) leaf_name_data.push_back(mpls_te_next_fragment_id.get_name_leafdata());
    if (mpls_te_router_address.is_set || is_set(mpls_te_router_address.operation)) leaf_name_data.push_back(mpls_te_router_address.get_name_leafdata());
    if (mpls_te_router_id.is_set || is_set(mpls_te_router_id.operation)) leaf_name_data.push_back(mpls_te_router_id.get_name_leafdata());
    if (spacious_fragment.is_set || is_set(spacious_fragment.operation)) leaf_name_data.push_back(spacious_fragment.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-fragment")
    {
        for(auto const & c : mpls_te_fragment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment>();
        c->parent = this;
        mpls_te_fragment.push_back(std::move(c));
        children[segment_path] = mpls_te_fragment.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-link")
    {
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_>();
        c->parent = this;
        mpls_te_link.push_back(std::move(c));
        children[segment_path] = mpls_te_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::get_children()
{
    for (auto const & c : mpls_te_fragment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "mpls-te-area-id")
    {
        mpls_te_area_id = value;
    }
    if(value_path == "mpls-te-area-instance")
    {
        mpls_te_area_instance = value;
    }
    if(value_path == "mpls-te-enabled")
    {
        mpls_te_enabled = value;
    }
    if(value_path == "mpls-te-initialized")
    {
        mpls_te_initialized = value;
    }
    if(value_path == "mpls-te-next-fragment-id")
    {
        mpls_te_next_fragment_id = value;
    }
    if(value_path == "mpls-te-router-address")
    {
        mpls_te_router_address = value;
    }
    if(value_path == "mpls-te-router-id")
    {
        mpls_te_router_id = value;
    }
    if(value_path == "spacious-fragment")
    {
        spacious_fragment = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsTeLink_()
    :
    affinity{YType::uint32, "affinity"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    fragment_id{YType::uint32, "fragment-id"},
    igp_metric{YType::uint32, "igp-metric"},
    input_interface_id{YType::uint32, "input-interface-id"},
    link_address{YType::str, "link-address"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    new_link{YType::boolean, "new-link"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"},
    output_interface_id{YType::uint32, "output-interface-id"},
    priority_count{YType::int32, "priority-count"},
    te_metric{YType::uint32, "te-metric"}
    	,
    extended_admin_group_list(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList>())
	,global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority>())
{
    extended_admin_group_list->parent = this;
    children["extended-admin-group-list"] = extended_admin_group_list;

    global_unreserve_bw_per_priority->parent = this;
    children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;

    link_protocol_priority_capability->parent = this;
    children["link-protocol-priority-capability"] = link_protocol_priority_capability;

    link_sw_capability->parent = this;
    children["link-sw-capability"] = link_sw_capability;

    sub_pool_unreserve_bw_per_priority->parent = this;
    children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::~MplsTeLink_()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_data())
            return true;
    }
    return affinity.is_set
	|| dste_allocation_model_id.is_set
	|| dste_in_use.is_set
	|| fragment_id.is_set
	|| igp_metric.is_set
	|| input_interface_id.is_set
	|| link_address.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_ip_address.is_set
	|| neighbor_system_id.is_set
	|| new_link.is_set
	|| number_of_optional_tl_vs.is_set
	|| output_interface_id.is_set
	|| priority_count.is_set
	|| te_metric.is_set
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(dste_allocation_model_id.operation)
	|| is_set(dste_in_use.operation)
	|| is_set(fragment_id.operation)
	|| is_set(igp_metric.operation)
	|| is_set(input_interface_id.operation)
	|| is_set(link_address.operation)
	|| is_set(maximum_link_bw.operation)
	|| is_set(maximum_link_reservable_bw.operation)
	|| is_set(maximum_link_sub_reservable_bw.operation)
	|| is_set(mpls_link_instance.operation)
	|| is_set(mpls_link_type.operation)
	|| is_set(neighbor_ip_address.operation)
	|| is_set(neighbor_system_id.operation)
	|| is_set(new_link.operation)
	|| is_set(number_of_optional_tl_vs.operation)
	|| is_set(output_interface_id.operation)
	|| is_set(priority_count.operation)
	|| is_set(te_metric.operation)
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeLink_' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.operation)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.operation)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.operation)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.operation)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.operation)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.operation)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.operation)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.operation)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.operation)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (new_link.is_set || is_set(new_link.operation)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.operation)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.operation)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.operation)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        else
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList>();
            extended_admin_group_list->parent = this;
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        return children.at("extended-admin-group-list");
    }

    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        else
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority>();
            global_unreserve_bw_per_priority->parent = this;
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        return children.at("global-unreserve-bw-per-priority");
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        else
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability>();
            link_protocol_priority_capability->parent = this;
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        return children.at("link-protocol-priority-capability");
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
        else
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability>();
            link_sw_capability->parent = this;
            children["link-sw-capability"] = link_sw_capability;
        }
        return children.at("link-sw-capability");
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        for(auto const & c : mplste_link_opt_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        else
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority>();
            sub_pool_unreserve_bw_per_priority->parent = this;
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        return children.at("sub-pool-unreserve-bw-per-priority");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_children()
{
    if(children.find("extended-admin-group-list") == children.end())
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
    }

    if(children.find("global-unreserve-bw-per-priority") == children.end())
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
    }

    if(children.find("link-protocol-priority-capability") == children.end())
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
    }

    if(children.find("link-sw-capability") == children.end())
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
    }

    for (auto const & c : mplste_link_opt_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("sub-pool-unreserve-bw-per-priority") == children.end())
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw = value;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw = value;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw = value;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance = value;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type = value;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
    }
    if(value_path == "new-link")
    {
        new_link = value;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubPoolUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{
    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::~LinkProtocolPriorityCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::has_data() const
{
    return link_protocol_capability.is_set
	|| link_protocol_priority.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::has_operation() const
{
    return is_set(operation)
	|| is_set(link_protocol_capability.operation)
	|| is_set(link_protocol_priority.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkProtocolPriorityCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.operation)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.operation)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability = value;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::LinkSwCapability()
    :
    link_encoding{YType::uint8, "link-encoding"},
    link_mtu{YType::uint16, "link-mtu"},
    link_switching_capability{YType::uint8, "link-switching-capability"},
    maximum_lsp_bw_per_priority{YType::uint64, "maximum-lsp-bw-per-priority"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"}
{
    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::has_data() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return link_encoding.is_set
	|| link_mtu.is_set
	|| link_switching_capability.is_set
	|| minimum_lsp_bw.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::has_operation() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(link_encoding.operation)
	|| is_set(link_mtu.operation)
	|| is_set(link_switching_capability.operation)
	|| is_set(maximum_lsp_bw_per_priority.operation)
	|| is_set(minimum_lsp_bw.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkSwCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_encoding.is_set || is_set(link_encoding.operation)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.operation)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (link_switching_capability.is_set || is_set(link_switching_capability.operation)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.operation)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());

    auto maximum_lsp_bw_per_priority_name_datas = maximum_lsp_bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), maximum_lsp_bw_per_priority_name_datas.begin(), maximum_lsp_bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-encoding")
    {
        link_encoding = value;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
    }
    if(value_path == "maximum-lsp-bw-per-priority")
    {
        maximum_lsp_bw_per_priority.append(value);
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    ext_admin_data{YType::uint32, "ext-admin-data"},
    extended_admin_size{YType::uint32, "extended-admin-size"}
{
    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::has_data() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::has_operation() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(ext_admin_data.operation)
	|| is_set(extended_admin_size.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedAdminGroupList' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.operation)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    auto ext_admin_data_name_datas = ext_admin_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_admin_data_name_datas.begin(), ext_admin_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ext-admin-data")
    {
        ext_admin_data.append(value);
    }
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"},
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"}
{
    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::~MplsteLinkOptTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_data())
            return true;
    }
    return mplste_link_opt_tlv_len.is_set
	|| mplste_link_opt_tlv_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_opt_tlv_len.operation)
	|| is_set(mplste_link_opt_tlv_type.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());
    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        for(auto const & c : mplste_link_opt_tlv_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv_value.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::get_children()
{
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    children["bctlv-value"] = bctlv_value;

    ixcdtlv_value->parent = this;
    children["ixcdtlv-value"] = ixcdtlv_value;

    srlgtlv_value->parent = this;
    children["srlgtlv-value"] = srlgtlv_value;

    unidtlv_value->parent = this;
    children["unidtlv-value"] = unidtlv_value;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(opaque_tlv_type.operation)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.operation)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
        else
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
            bctlv_value->parent = this;
            children["bctlv-value"] = bctlv_value;
        }
        return children.at("bctlv-value");
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        else
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
            ixcdtlv_value->parent = this;
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        return children.at("ixcdtlv-value");
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
        else
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
            srlgtlv_value->parent = this;
            children["srlgtlv-value"] = srlgtlv_value;
        }
        return children.at("srlgtlv-value");
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
        else
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
            unidtlv_value->parent = this;
            children["unidtlv-value"] = unidtlv_value;
        }
        return children.at("unidtlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children()
{
    if(children.find("bctlv-value") == children.end())
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
    }

    if(children.find("ixcdtlv-value") == children.end())
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
    }

    if(children.find("srlgtlv-value") == children.end())
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
    }

    if(children.find("unidtlv-value") == children.end())
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    mplste_link_bc_bandwidth{YType::uint64, "mplste-link-bc-bandwidth"},
    num_b_cs{YType::uint32, "num-b-cs"}
{
    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(model_id.operation)
	|| is_set(mplste_link_bc_bandwidth.operation)
	|| is_set(num_b_cs.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BctlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.operation)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.operation)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    auto mplste_link_bc_bandwidth_name_datas = mplste_link_bc_bandwidth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_bc_bandwidth_name_datas.begin(), mplste_link_bc_bandwidth_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "model-id")
    {
        model_id = value;
    }
    if(value_path == "mplste-link-bc-bandwidth")
    {
        mplste_link_bc_bandwidth.append(value);
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    mplste_link_srlg_data{YType::uint32, "mplste-link-srlg-data"},
    num_srl_gs{YType::uint32, "num-srl-gs"},
    srlg_len{YType::uint32, "srlg-len"}
{
    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return num_srl_gs.is_set
	|| srlg_len.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_srlg_data.operation)
	|| is_set(num_srl_gs.operation)
	|| is_set(srlg_len.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_srl_gs.is_set || is_set(num_srl_gs.operation)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());
    if (srlg_len.is_set || is_set(srlg_len.operation)) leaf_name_data.push_back(srlg_len.get_name_leafdata());

    auto mplste_link_srlg_data_name_datas = mplste_link_srlg_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_srlg_data_name_datas.begin(), mplste_link_srlg_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-srlg-data")
    {
        mplste_link_srlg_data.append(value);
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
    }
    if(value_path == "srlg-len")
    {
        srlg_len = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"},
    max_lspbw{YType::int64, "max-lspbw"},
    rile_len_code{YType::uint8, "rile-len-code"},
    switching_cap{YType::uint8, "switching-cap"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;
    children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| rile_len_code.is_set
	|| switching_cap.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(fixed_scsi_count.operation)
	|| is_set(flex_scsi_count.operation)
	|| is_set(max_lspbw.operation)
	|| is_set(rile_len_code.operation)
	|| is_set(switching_cap.operation)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.operation)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.operation)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.operation)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (switching_cap.is_set || is_set(switching_cap.operation)) leaf_name_data.push_back(switching_cap.get_name_leafdata());

    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        else
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
            ixcd_switching_cap_type->parent = this;
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        return children.at("ixcd-switching-cap-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children()
{
    if(children.find("ixcd-switching-cap-type") == children.end())
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count = value;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count = value;
    }
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
    }
    if(value_path == "switching-cap")
    {
        switching_cap = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
	,ixcdpsc_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
{
    ixcdbw_sub_tlv->parent = this;
    children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;

    ixcdpsc_info->parent = this;
    children["ixcdpsc-info"] = ixcdpsc_info;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(operation)
	|| is_set(switching_cap_type.operation)
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdSwitchingCapType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.operation)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        else
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
            ixcdbw_sub_tlv->parent = this;
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        return children.at("ixcdbw-sub-tlv");
    }

    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        else
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
            ixcdpsc_info->parent = this;
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        return children.at("ixcdpsc-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children()
{
    if(children.find("ixcdbw-sub-tlv") == children.end())
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
    }

    if(children.find("ixcdpsc-info") == children.end())
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{
    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::~IxcdpscInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_data() const
{
    return min_lsp_bandwidth.is_set
	|| psc_interface_mtu.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(min_lsp_bandwidth.operation)
	|| is_set(psc_interface_mtu.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdpscInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.operation)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.operation)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth = value;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{
    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::~IxcdbwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_data() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_operation() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdbwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "arr-bw-sub-tlv")
    {
        for(auto const & c : arr_bw_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(std::move(c));
        children[segment_path] = arr_bw_sub_tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children()
{
    for (auto const & c : arr_bw_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"},
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;
    children["bw-sub-tlv-value"] = bw_sub_tlv_value;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_length.is_set
	|| bw_sub_tlv_type.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(bw_sub_tlv_length.operation)
	|| is_set(bw_sub_tlv_type.operation)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArrBwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.operation)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());
    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.operation)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        else
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
            bw_sub_tlv_value->parent = this;
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        return children.at("bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children()
{
    if(children.find("bw-sub-tlv-value") == children.end())
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;

    flex_bw_sub_tlv_value->parent = this;
    children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::~BwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_data() const
{
    return ixcdbw_sub_tlv_type.is_set
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_data())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(ixcdbw_sub_tlv_type.operation)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.operation)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        else
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
            fixed_bw_sub_tlv_value->parent = this;
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        return children.at("fixed-bw-sub-tlv-value");
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        else
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
            flex_bw_sub_tlv_value->parent = this;
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        return children.at("flex-bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children()
{
    if(children.find("fixed-bw-sub-tlv-value") == children.end())
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
    }

    if(children.find("flex-bw-sub-tlv-value") == children.end())
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    unres_oduj_prio{YType::uint32, "unres-oduj-prio"}
    	,
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;
    children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(unres_oduj_prio.operation)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto unres_oduj_prio_name_datas = unres_oduj_prio.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_oduj_prio_name_datas.begin(), unres_oduj_prio_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        else
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
            fixed_sub_tlv_value->parent = this;
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        return children.at("fixed-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children()
{
    if(children.find("fixed-sub-tlv-value") == children.end())
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unres-oduj-prio")
    {
        unres_oduj_prio.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    max_lspbw{YType::uint64, "max-lspbw"},
    unres_lspbw{YType::uint64, "unres-lspbw"}
    	,
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;
    children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(max_lspbw.operation)
	|| is_set(unres_lspbw.operation)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());
    auto unres_lspbw_name_datas = unres_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_lspbw_name_datas.begin(), unres_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        else
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
            flex_sub_tlv_value_common->parent = this;
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        return children.at("flex-sub-tlv-value-common");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children()
{
    if(children.find("flex-sub-tlv-value-common") == children.end())
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "unres-lspbw")
    {
        unres_lspbw.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexSubTlvValueCommon' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{
    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::~UnidtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_data() const
{
    return uni_dir_delay.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(uni_dir_delay.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnidtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.operation)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeFragment()
    :
    dste_model_id{YType::uint8, "dste-model-id"},
    fragment_id{YType::uint32, "fragment-id"},
    fragment_instance{YType::uint32, "fragment-instance"},
    same_fragment_count{YType::uint8, "same-fragment-count"}
{
    yang_name = "mpls-te-fragment"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::~MplsTeFragment()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::has_data() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return dste_model_id.is_set
	|| fragment_id.is_set
	|| fragment_instance.is_set
	|| same_fragment_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dste_model_id.operation)
	|| is_set(fragment_id.operation)
	|| is_set(fragment_instance.operation)
	|| is_set(same_fragment_count.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragment";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeFragment' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_model_id.is_set || is_set(dste_model_id.operation)) leaf_name_data.push_back(dste_model_id.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.operation)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (fragment_instance.is_set || is_set(fragment_instance.operation)) leaf_name_data.push_back(fragment_instance.get_name_leafdata());
    if (same_fragment_count.is_set || is_set(same_fragment_count.operation)) leaf_name_data.push_back(same_fragment_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-link")
    {
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_>();
        c->parent = this;
        mpls_te_link.push_back(std::move(c));
        children[segment_path] = mpls_te_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::get_children()
{
    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dste-model-id")
    {
        dste_model_id = value;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
    }
    if(value_path == "fragment-instance")
    {
        fragment_instance = value;
    }
    if(value_path == "same-fragment-count")
    {
        same_fragment_count = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsTeLink_()
    :
    affinity{YType::uint32, "affinity"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    fragment_id{YType::uint32, "fragment-id"},
    igp_metric{YType::uint32, "igp-metric"},
    input_interface_id{YType::uint32, "input-interface-id"},
    link_address{YType::str, "link-address"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    new_link{YType::boolean, "new-link"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"},
    output_interface_id{YType::uint32, "output-interface-id"},
    priority_count{YType::int32, "priority-count"},
    te_metric{YType::uint32, "te-metric"}
    	,
    extended_admin_group_list(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList>())
	,global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority>())
{
    extended_admin_group_list->parent = this;
    children["extended-admin-group-list"] = extended_admin_group_list;

    global_unreserve_bw_per_priority->parent = this;
    children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;

    link_protocol_priority_capability->parent = this;
    children["link-protocol-priority-capability"] = link_protocol_priority_capability;

    link_sw_capability->parent = this;
    children["link-sw-capability"] = link_sw_capability;

    sub_pool_unreserve_bw_per_priority->parent = this;
    children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-fragment";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::~MplsTeLink_()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_data())
            return true;
    }
    return affinity.is_set
	|| dste_allocation_model_id.is_set
	|| dste_in_use.is_set
	|| fragment_id.is_set
	|| igp_metric.is_set
	|| input_interface_id.is_set
	|| link_address.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_ip_address.is_set
	|| neighbor_system_id.is_set
	|| new_link.is_set
	|| number_of_optional_tl_vs.is_set
	|| output_interface_id.is_set
	|| priority_count.is_set
	|| te_metric.is_set
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(dste_allocation_model_id.operation)
	|| is_set(dste_in_use.operation)
	|| is_set(fragment_id.operation)
	|| is_set(igp_metric.operation)
	|| is_set(input_interface_id.operation)
	|| is_set(link_address.operation)
	|| is_set(maximum_link_bw.operation)
	|| is_set(maximum_link_reservable_bw.operation)
	|| is_set(maximum_link_sub_reservable_bw.operation)
	|| is_set(mpls_link_instance.operation)
	|| is_set(mpls_link_type.operation)
	|| is_set(neighbor_ip_address.operation)
	|| is_set(neighbor_system_id.operation)
	|| is_set(new_link.operation)
	|| is_set(number_of_optional_tl_vs.operation)
	|| is_set(output_interface_id.operation)
	|| is_set(priority_count.operation)
	|| is_set(te_metric.operation)
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeLink_' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.operation)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.operation)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.operation)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.operation)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.operation)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.operation)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.operation)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.operation)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.operation)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (new_link.is_set || is_set(new_link.operation)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.operation)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.operation)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.operation)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        else
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList>();
            extended_admin_group_list->parent = this;
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        return children.at("extended-admin-group-list");
    }

    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        else
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority>();
            global_unreserve_bw_per_priority->parent = this;
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        return children.at("global-unreserve-bw-per-priority");
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        else
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability>();
            link_protocol_priority_capability->parent = this;
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        return children.at("link-protocol-priority-capability");
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
        else
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability>();
            link_sw_capability->parent = this;
            children["link-sw-capability"] = link_sw_capability;
        }
        return children.at("link-sw-capability");
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        for(auto const & c : mplste_link_opt_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        else
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority>();
            sub_pool_unreserve_bw_per_priority->parent = this;
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        return children.at("sub-pool-unreserve-bw-per-priority");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::get_children()
{
    if(children.find("extended-admin-group-list") == children.end())
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
    }

    if(children.find("global-unreserve-bw-per-priority") == children.end())
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
    }

    if(children.find("link-protocol-priority-capability") == children.end())
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
    }

    if(children.find("link-sw-capability") == children.end())
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
    }

    for (auto const & c : mplste_link_opt_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("sub-pool-unreserve-bw-per-priority") == children.end())
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw = value;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw = value;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw = value;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance = value;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type = value;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
    }
    if(value_path == "new-link")
    {
        new_link = value;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubPoolUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{
    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::~LinkProtocolPriorityCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::has_data() const
{
    return link_protocol_capability.is_set
	|| link_protocol_priority.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::has_operation() const
{
    return is_set(operation)
	|| is_set(link_protocol_capability.operation)
	|| is_set(link_protocol_priority.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkProtocolPriorityCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.operation)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.operation)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability = value;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::LinkSwCapability()
    :
    link_encoding{YType::uint8, "link-encoding"},
    link_mtu{YType::uint16, "link-mtu"},
    link_switching_capability{YType::uint8, "link-switching-capability"},
    maximum_lsp_bw_per_priority{YType::uint64, "maximum-lsp-bw-per-priority"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"}
{
    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::has_data() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return link_encoding.is_set
	|| link_mtu.is_set
	|| link_switching_capability.is_set
	|| minimum_lsp_bw.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::has_operation() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(link_encoding.operation)
	|| is_set(link_mtu.operation)
	|| is_set(link_switching_capability.operation)
	|| is_set(maximum_lsp_bw_per_priority.operation)
	|| is_set(minimum_lsp_bw.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkSwCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_encoding.is_set || is_set(link_encoding.operation)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.operation)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (link_switching_capability.is_set || is_set(link_switching_capability.operation)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.operation)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());

    auto maximum_lsp_bw_per_priority_name_datas = maximum_lsp_bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), maximum_lsp_bw_per_priority_name_datas.begin(), maximum_lsp_bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-encoding")
    {
        link_encoding = value;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
    }
    if(value_path == "maximum-lsp-bw-per-priority")
    {
        maximum_lsp_bw_per_priority.append(value);
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    ext_admin_data{YType::uint32, "ext-admin-data"},
    extended_admin_size{YType::uint32, "extended-admin-size"}
{
    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::has_data() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::has_operation() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(ext_admin_data.operation)
	|| is_set(extended_admin_size.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedAdminGroupList' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.operation)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    auto ext_admin_data_name_datas = ext_admin_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_admin_data_name_datas.begin(), ext_admin_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ext-admin-data")
    {
        ext_admin_data.append(value);
    }
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"},
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"}
{
    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::~MplsteLinkOptTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_data())
            return true;
    }
    return mplste_link_opt_tlv_len.is_set
	|| mplste_link_opt_tlv_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_opt_tlv_len.operation)
	|| is_set(mplste_link_opt_tlv_type.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());
    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        for(auto const & c : mplste_link_opt_tlv_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv_value.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::get_children()
{
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    children["bctlv-value"] = bctlv_value;

    ixcdtlv_value->parent = this;
    children["ixcdtlv-value"] = ixcdtlv_value;

    srlgtlv_value->parent = this;
    children["srlgtlv-value"] = srlgtlv_value;

    unidtlv_value->parent = this;
    children["unidtlv-value"] = unidtlv_value;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(opaque_tlv_type.operation)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.operation)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
        else
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
            bctlv_value->parent = this;
            children["bctlv-value"] = bctlv_value;
        }
        return children.at("bctlv-value");
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        else
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
            ixcdtlv_value->parent = this;
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        return children.at("ixcdtlv-value");
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
        else
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
            srlgtlv_value->parent = this;
            children["srlgtlv-value"] = srlgtlv_value;
        }
        return children.at("srlgtlv-value");
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
        else
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
            unidtlv_value->parent = this;
            children["unidtlv-value"] = unidtlv_value;
        }
        return children.at("unidtlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children()
{
    if(children.find("bctlv-value") == children.end())
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
    }

    if(children.find("ixcdtlv-value") == children.end())
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
    }

    if(children.find("srlgtlv-value") == children.end())
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
    }

    if(children.find("unidtlv-value") == children.end())
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    mplste_link_bc_bandwidth{YType::uint64, "mplste-link-bc-bandwidth"},
    num_b_cs{YType::uint32, "num-b-cs"}
{
    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(model_id.operation)
	|| is_set(mplste_link_bc_bandwidth.operation)
	|| is_set(num_b_cs.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BctlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.operation)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.operation)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    auto mplste_link_bc_bandwidth_name_datas = mplste_link_bc_bandwidth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_bc_bandwidth_name_datas.begin(), mplste_link_bc_bandwidth_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "model-id")
    {
        model_id = value;
    }
    if(value_path == "mplste-link-bc-bandwidth")
    {
        mplste_link_bc_bandwidth.append(value);
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    mplste_link_srlg_data{YType::uint32, "mplste-link-srlg-data"},
    num_srl_gs{YType::uint32, "num-srl-gs"},
    srlg_len{YType::uint32, "srlg-len"}
{
    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return num_srl_gs.is_set
	|| srlg_len.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_srlg_data.operation)
	|| is_set(num_srl_gs.operation)
	|| is_set(srlg_len.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_srl_gs.is_set || is_set(num_srl_gs.operation)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());
    if (srlg_len.is_set || is_set(srlg_len.operation)) leaf_name_data.push_back(srlg_len.get_name_leafdata());

    auto mplste_link_srlg_data_name_datas = mplste_link_srlg_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_srlg_data_name_datas.begin(), mplste_link_srlg_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-srlg-data")
    {
        mplste_link_srlg_data.append(value);
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
    }
    if(value_path == "srlg-len")
    {
        srlg_len = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"},
    max_lspbw{YType::int64, "max-lspbw"},
    rile_len_code{YType::uint8, "rile-len-code"},
    switching_cap{YType::uint8, "switching-cap"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;
    children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| rile_len_code.is_set
	|| switching_cap.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(fixed_scsi_count.operation)
	|| is_set(flex_scsi_count.operation)
	|| is_set(max_lspbw.operation)
	|| is_set(rile_len_code.operation)
	|| is_set(switching_cap.operation)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.operation)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.operation)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.operation)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (switching_cap.is_set || is_set(switching_cap.operation)) leaf_name_data.push_back(switching_cap.get_name_leafdata());

    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        else
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
            ixcd_switching_cap_type->parent = this;
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        return children.at("ixcd-switching-cap-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children()
{
    if(children.find("ixcd-switching-cap-type") == children.end())
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count = value;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count = value;
    }
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
    }
    if(value_path == "switching-cap")
    {
        switching_cap = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
	,ixcdpsc_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
{
    ixcdbw_sub_tlv->parent = this;
    children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;

    ixcdpsc_info->parent = this;
    children["ixcdpsc-info"] = ixcdpsc_info;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(operation)
	|| is_set(switching_cap_type.operation)
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdSwitchingCapType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.operation)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        else
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
            ixcdbw_sub_tlv->parent = this;
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        return children.at("ixcdbw-sub-tlv");
    }

    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        else
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
            ixcdpsc_info->parent = this;
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        return children.at("ixcdpsc-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children()
{
    if(children.find("ixcdbw-sub-tlv") == children.end())
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
    }

    if(children.find("ixcdpsc-info") == children.end())
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{
    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::~IxcdpscInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_data() const
{
    return min_lsp_bandwidth.is_set
	|| psc_interface_mtu.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(min_lsp_bandwidth.operation)
	|| is_set(psc_interface_mtu.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdpscInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.operation)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.operation)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth = value;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{
    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::~IxcdbwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_data() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_operation() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdbwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "arr-bw-sub-tlv")
    {
        for(auto const & c : arr_bw_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(std::move(c));
        children[segment_path] = arr_bw_sub_tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children()
{
    for (auto const & c : arr_bw_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"},
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;
    children["bw-sub-tlv-value"] = bw_sub_tlv_value;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_length.is_set
	|| bw_sub_tlv_type.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(bw_sub_tlv_length.operation)
	|| is_set(bw_sub_tlv_type.operation)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArrBwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.operation)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());
    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.operation)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        else
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
            bw_sub_tlv_value->parent = this;
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        return children.at("bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children()
{
    if(children.find("bw-sub-tlv-value") == children.end())
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;

    flex_bw_sub_tlv_value->parent = this;
    children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::~BwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_data() const
{
    return ixcdbw_sub_tlv_type.is_set
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_data())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(ixcdbw_sub_tlv_type.operation)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.operation)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        else
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
            fixed_bw_sub_tlv_value->parent = this;
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        return children.at("fixed-bw-sub-tlv-value");
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        else
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
            flex_bw_sub_tlv_value->parent = this;
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        return children.at("flex-bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children()
{
    if(children.find("fixed-bw-sub-tlv-value") == children.end())
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
    }

    if(children.find("flex-bw-sub-tlv-value") == children.end())
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    unres_oduj_prio{YType::uint32, "unres-oduj-prio"}
    	,
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;
    children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(unres_oduj_prio.operation)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto unres_oduj_prio_name_datas = unres_oduj_prio.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_oduj_prio_name_datas.begin(), unres_oduj_prio_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        else
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
            fixed_sub_tlv_value->parent = this;
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        return children.at("fixed-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children()
{
    if(children.find("fixed-sub-tlv-value") == children.end())
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unres-oduj-prio")
    {
        unres_oduj_prio.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    max_lspbw{YType::uint64, "max-lspbw"},
    unres_lspbw{YType::uint64, "unres-lspbw"}
    	,
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;
    children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(max_lspbw.operation)
	|| is_set(unres_lspbw.operation)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());
    auto unres_lspbw_name_datas = unres_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_lspbw_name_datas.begin(), unres_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        else
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
            flex_sub_tlv_value_common->parent = this;
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        return children.at("flex-sub-tlv-value-common");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children()
{
    if(children.find("flex-sub-tlv-value-common") == children.end())
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "unres-lspbw")
    {
        unres_lspbw.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexSubTlvValueCommon' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{
    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::~UnidtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_data() const
{
    return uni_dir_delay.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(uni_dir_delay.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnidtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.operation)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragments()
{
    yang_name = "mpls-te-fragments"; yang_parent_name = "mpls-te";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::~MplsTeFragments()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::has_data() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragments";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeFragments' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-fragment")
    {
        for(auto const & c : mpls_te_fragment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment>();
        c->parent = this;
        mpls_te_fragment.push_back(std::move(c));
        children[segment_path] = mpls_te_fragment.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::get_children()
{
    for (auto const & c : mpls_te_fragment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment()
    :
    area_id{YType::int32, "area-id"},
    mpls_te_area_id{YType::str, "mpls-te-area-id"},
    mpls_te_area_instance{YType::uint32, "mpls-te-area-instance"},
    mpls_te_enabled{YType::boolean, "mpls-te-enabled"},
    mpls_te_initialized{YType::boolean, "mpls-te-initialized"},
    mpls_te_next_fragment_id{YType::uint32, "mpls-te-next-fragment-id"},
    mpls_te_router_address{YType::str, "mpls-te-router-address"},
    mpls_te_router_id{YType::str, "mpls-te-router-id"},
    spacious_fragment{YType::boolean, "spacious-fragment"}
{
    yang_name = "mpls-te-fragment"; yang_parent_name = "mpls-te-fragments";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::~MplsTeFragment()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::has_data() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| mpls_te_area_id.is_set
	|| mpls_te_area_instance.is_set
	|| mpls_te_enabled.is_set
	|| mpls_te_initialized.is_set
	|| mpls_te_next_fragment_id.is_set
	|| mpls_te_router_address.is_set
	|| mpls_te_router_id.is_set
	|| spacious_fragment.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(mpls_te_area_id.operation)
	|| is_set(mpls_te_area_instance.operation)
	|| is_set(mpls_te_enabled.operation)
	|| is_set(mpls_te_initialized.operation)
	|| is_set(mpls_te_next_fragment_id.operation)
	|| is_set(mpls_te_router_address.operation)
	|| is_set(mpls_te_router_id.operation)
	|| is_set(spacious_fragment.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragment" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeFragment' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (mpls_te_area_id.is_set || is_set(mpls_te_area_id.operation)) leaf_name_data.push_back(mpls_te_area_id.get_name_leafdata());
    if (mpls_te_area_instance.is_set || is_set(mpls_te_area_instance.operation)) leaf_name_data.push_back(mpls_te_area_instance.get_name_leafdata());
    if (mpls_te_enabled.is_set || is_set(mpls_te_enabled.operation)) leaf_name_data.push_back(mpls_te_enabled.get_name_leafdata());
    if (mpls_te_initialized.is_set || is_set(mpls_te_initialized.operation)) leaf_name_data.push_back(mpls_te_initialized.get_name_leafdata());
    if (mpls_te_next_fragment_id.is_set || is_set(mpls_te_next_fragment_id.operation)) leaf_name_data.push_back(mpls_te_next_fragment_id.get_name_leafdata());
    if (mpls_te_router_address.is_set || is_set(mpls_te_router_address.operation)) leaf_name_data.push_back(mpls_te_router_address.get_name_leafdata());
    if (mpls_te_router_id.is_set || is_set(mpls_te_router_id.operation)) leaf_name_data.push_back(mpls_te_router_id.get_name_leafdata());
    if (spacious_fragment.is_set || is_set(spacious_fragment.operation)) leaf_name_data.push_back(spacious_fragment.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-fragment")
    {
        for(auto const & c : mpls_te_fragment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_>();
        c->parent = this;
        mpls_te_fragment.push_back(std::move(c));
        children[segment_path] = mpls_te_fragment.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-link")
    {
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink>();
        c->parent = this;
        mpls_te_link.push_back(std::move(c));
        children[segment_path] = mpls_te_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::get_children()
{
    for (auto const & c : mpls_te_fragment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "mpls-te-area-id")
    {
        mpls_te_area_id = value;
    }
    if(value_path == "mpls-te-area-instance")
    {
        mpls_te_area_instance = value;
    }
    if(value_path == "mpls-te-enabled")
    {
        mpls_te_enabled = value;
    }
    if(value_path == "mpls-te-initialized")
    {
        mpls_te_initialized = value;
    }
    if(value_path == "mpls-te-next-fragment-id")
    {
        mpls_te_next_fragment_id = value;
    }
    if(value_path == "mpls-te-router-address")
    {
        mpls_te_router_address = value;
    }
    if(value_path == "mpls-te-router-id")
    {
        mpls_te_router_id = value;
    }
    if(value_path == "spacious-fragment")
    {
        spacious_fragment = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsTeLink()
    :
    affinity{YType::uint32, "affinity"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    fragment_id{YType::uint32, "fragment-id"},
    igp_metric{YType::uint32, "igp-metric"},
    input_interface_id{YType::uint32, "input-interface-id"},
    link_address{YType::str, "link-address"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    new_link{YType::boolean, "new-link"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"},
    output_interface_id{YType::uint32, "output-interface-id"},
    priority_count{YType::int32, "priority-count"},
    te_metric{YType::uint32, "te-metric"}
    	,
    extended_admin_group_list(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList>())
	,global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority>())
{
    extended_admin_group_list->parent = this;
    children["extended-admin-group-list"] = extended_admin_group_list;

    global_unreserve_bw_per_priority->parent = this;
    children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;

    link_protocol_priority_capability->parent = this;
    children["link-protocol-priority-capability"] = link_protocol_priority_capability;

    link_sw_capability->parent = this;
    children["link-sw-capability"] = link_sw_capability;

    sub_pool_unreserve_bw_per_priority->parent = this;
    children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-fragment";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::~MplsTeLink()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_data())
            return true;
    }
    return affinity.is_set
	|| dste_allocation_model_id.is_set
	|| dste_in_use.is_set
	|| fragment_id.is_set
	|| igp_metric.is_set
	|| input_interface_id.is_set
	|| link_address.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_ip_address.is_set
	|| neighbor_system_id.is_set
	|| new_link.is_set
	|| number_of_optional_tl_vs.is_set
	|| output_interface_id.is_set
	|| priority_count.is_set
	|| te_metric.is_set
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(dste_allocation_model_id.operation)
	|| is_set(dste_in_use.operation)
	|| is_set(fragment_id.operation)
	|| is_set(igp_metric.operation)
	|| is_set(input_interface_id.operation)
	|| is_set(link_address.operation)
	|| is_set(maximum_link_bw.operation)
	|| is_set(maximum_link_reservable_bw.operation)
	|| is_set(maximum_link_sub_reservable_bw.operation)
	|| is_set(mpls_link_instance.operation)
	|| is_set(mpls_link_type.operation)
	|| is_set(neighbor_ip_address.operation)
	|| is_set(neighbor_system_id.operation)
	|| is_set(new_link.operation)
	|| is_set(number_of_optional_tl_vs.operation)
	|| is_set(output_interface_id.operation)
	|| is_set(priority_count.operation)
	|| is_set(te_metric.operation)
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeLink' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.operation)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.operation)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.operation)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.operation)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.operation)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.operation)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.operation)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.operation)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.operation)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (new_link.is_set || is_set(new_link.operation)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.operation)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.operation)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.operation)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        else
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList>();
            extended_admin_group_list->parent = this;
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        return children.at("extended-admin-group-list");
    }

    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        else
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority>();
            global_unreserve_bw_per_priority->parent = this;
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        return children.at("global-unreserve-bw-per-priority");
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        else
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability>();
            link_protocol_priority_capability->parent = this;
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        return children.at("link-protocol-priority-capability");
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
        else
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability>();
            link_sw_capability->parent = this;
            children["link-sw-capability"] = link_sw_capability;
        }
        return children.at("link-sw-capability");
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        for(auto const & c : mplste_link_opt_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        else
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority>();
            sub_pool_unreserve_bw_per_priority->parent = this;
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        return children.at("sub-pool-unreserve-bw-per-priority");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_children()
{
    if(children.find("extended-admin-group-list") == children.end())
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
    }

    if(children.find("global-unreserve-bw-per-priority") == children.end())
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
    }

    if(children.find("link-protocol-priority-capability") == children.end())
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
    }

    if(children.find("link-sw-capability") == children.end())
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
    }

    for (auto const & c : mplste_link_opt_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("sub-pool-unreserve-bw-per-priority") == children.end())
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw = value;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw = value;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw = value;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance = value;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type = value;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
    }
    if(value_path == "new-link")
    {
        new_link = value;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubPoolUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{
    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::~LinkProtocolPriorityCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::has_data() const
{
    return link_protocol_capability.is_set
	|| link_protocol_priority.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::has_operation() const
{
    return is_set(operation)
	|| is_set(link_protocol_capability.operation)
	|| is_set(link_protocol_priority.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkProtocolPriorityCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.operation)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.operation)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability = value;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::LinkSwCapability()
    :
    link_encoding{YType::uint8, "link-encoding"},
    link_mtu{YType::uint16, "link-mtu"},
    link_switching_capability{YType::uint8, "link-switching-capability"},
    maximum_lsp_bw_per_priority{YType::uint64, "maximum-lsp-bw-per-priority"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"}
{
    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::has_data() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return link_encoding.is_set
	|| link_mtu.is_set
	|| link_switching_capability.is_set
	|| minimum_lsp_bw.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::has_operation() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(link_encoding.operation)
	|| is_set(link_mtu.operation)
	|| is_set(link_switching_capability.operation)
	|| is_set(maximum_lsp_bw_per_priority.operation)
	|| is_set(minimum_lsp_bw.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkSwCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_encoding.is_set || is_set(link_encoding.operation)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.operation)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (link_switching_capability.is_set || is_set(link_switching_capability.operation)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.operation)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());

    auto maximum_lsp_bw_per_priority_name_datas = maximum_lsp_bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), maximum_lsp_bw_per_priority_name_datas.begin(), maximum_lsp_bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-encoding")
    {
        link_encoding = value;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
    }
    if(value_path == "maximum-lsp-bw-per-priority")
    {
        maximum_lsp_bw_per_priority.append(value);
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    ext_admin_data{YType::uint32, "ext-admin-data"},
    extended_admin_size{YType::uint32, "extended-admin-size"}
{
    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::has_data() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::has_operation() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(ext_admin_data.operation)
	|| is_set(extended_admin_size.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedAdminGroupList' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.operation)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    auto ext_admin_data_name_datas = ext_admin_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_admin_data_name_datas.begin(), ext_admin_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ext-admin-data")
    {
        ext_admin_data.append(value);
    }
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"},
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"}
{
    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::~MplsteLinkOptTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_data())
            return true;
    }
    return mplste_link_opt_tlv_len.is_set
	|| mplste_link_opt_tlv_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_opt_tlv_len.operation)
	|| is_set(mplste_link_opt_tlv_type.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());
    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        for(auto const & c : mplste_link_opt_tlv_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv_value.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_children()
{
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    children["bctlv-value"] = bctlv_value;

    ixcdtlv_value->parent = this;
    children["ixcdtlv-value"] = ixcdtlv_value;

    srlgtlv_value->parent = this;
    children["srlgtlv-value"] = srlgtlv_value;

    unidtlv_value->parent = this;
    children["unidtlv-value"] = unidtlv_value;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(opaque_tlv_type.operation)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.operation)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
        else
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
            bctlv_value->parent = this;
            children["bctlv-value"] = bctlv_value;
        }
        return children.at("bctlv-value");
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        else
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
            ixcdtlv_value->parent = this;
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        return children.at("ixcdtlv-value");
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
        else
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
            srlgtlv_value->parent = this;
            children["srlgtlv-value"] = srlgtlv_value;
        }
        return children.at("srlgtlv-value");
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
        else
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
            unidtlv_value->parent = this;
            children["unidtlv-value"] = unidtlv_value;
        }
        return children.at("unidtlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children()
{
    if(children.find("bctlv-value") == children.end())
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
    }

    if(children.find("ixcdtlv-value") == children.end())
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
    }

    if(children.find("srlgtlv-value") == children.end())
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
    }

    if(children.find("unidtlv-value") == children.end())
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    mplste_link_bc_bandwidth{YType::uint64, "mplste-link-bc-bandwidth"},
    num_b_cs{YType::uint32, "num-b-cs"}
{
    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(model_id.operation)
	|| is_set(mplste_link_bc_bandwidth.operation)
	|| is_set(num_b_cs.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BctlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.operation)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.operation)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    auto mplste_link_bc_bandwidth_name_datas = mplste_link_bc_bandwidth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_bc_bandwidth_name_datas.begin(), mplste_link_bc_bandwidth_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "model-id")
    {
        model_id = value;
    }
    if(value_path == "mplste-link-bc-bandwidth")
    {
        mplste_link_bc_bandwidth.append(value);
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    mplste_link_srlg_data{YType::uint32, "mplste-link-srlg-data"},
    num_srl_gs{YType::uint32, "num-srl-gs"},
    srlg_len{YType::uint32, "srlg-len"}
{
    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return num_srl_gs.is_set
	|| srlg_len.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_srlg_data.operation)
	|| is_set(num_srl_gs.operation)
	|| is_set(srlg_len.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_srl_gs.is_set || is_set(num_srl_gs.operation)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());
    if (srlg_len.is_set || is_set(srlg_len.operation)) leaf_name_data.push_back(srlg_len.get_name_leafdata());

    auto mplste_link_srlg_data_name_datas = mplste_link_srlg_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_srlg_data_name_datas.begin(), mplste_link_srlg_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-srlg-data")
    {
        mplste_link_srlg_data.append(value);
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
    }
    if(value_path == "srlg-len")
    {
        srlg_len = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"},
    max_lspbw{YType::int64, "max-lspbw"},
    rile_len_code{YType::uint8, "rile-len-code"},
    switching_cap{YType::uint8, "switching-cap"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;
    children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| rile_len_code.is_set
	|| switching_cap.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(fixed_scsi_count.operation)
	|| is_set(flex_scsi_count.operation)
	|| is_set(max_lspbw.operation)
	|| is_set(rile_len_code.operation)
	|| is_set(switching_cap.operation)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.operation)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.operation)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.operation)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (switching_cap.is_set || is_set(switching_cap.operation)) leaf_name_data.push_back(switching_cap.get_name_leafdata());

    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        else
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
            ixcd_switching_cap_type->parent = this;
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        return children.at("ixcd-switching-cap-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children()
{
    if(children.find("ixcd-switching-cap-type") == children.end())
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count = value;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count = value;
    }
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
    }
    if(value_path == "switching-cap")
    {
        switching_cap = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
	,ixcdpsc_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
{
    ixcdbw_sub_tlv->parent = this;
    children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;

    ixcdpsc_info->parent = this;
    children["ixcdpsc-info"] = ixcdpsc_info;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(operation)
	|| is_set(switching_cap_type.operation)
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdSwitchingCapType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.operation)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        else
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
            ixcdbw_sub_tlv->parent = this;
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        return children.at("ixcdbw-sub-tlv");
    }

    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        else
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
            ixcdpsc_info->parent = this;
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        return children.at("ixcdpsc-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children()
{
    if(children.find("ixcdbw-sub-tlv") == children.end())
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
    }

    if(children.find("ixcdpsc-info") == children.end())
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{
    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::~IxcdpscInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_data() const
{
    return min_lsp_bandwidth.is_set
	|| psc_interface_mtu.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(min_lsp_bandwidth.operation)
	|| is_set(psc_interface_mtu.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdpscInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.operation)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.operation)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth = value;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{
    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::~IxcdbwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_data() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_operation() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdbwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "arr-bw-sub-tlv")
    {
        for(auto const & c : arr_bw_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(std::move(c));
        children[segment_path] = arr_bw_sub_tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children()
{
    for (auto const & c : arr_bw_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"},
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;
    children["bw-sub-tlv-value"] = bw_sub_tlv_value;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_length.is_set
	|| bw_sub_tlv_type.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(bw_sub_tlv_length.operation)
	|| is_set(bw_sub_tlv_type.operation)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArrBwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.operation)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());
    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.operation)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        else
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
            bw_sub_tlv_value->parent = this;
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        return children.at("bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children()
{
    if(children.find("bw-sub-tlv-value") == children.end())
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;

    flex_bw_sub_tlv_value->parent = this;
    children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::~BwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_data() const
{
    return ixcdbw_sub_tlv_type.is_set
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_data())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(ixcdbw_sub_tlv_type.operation)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.operation)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        else
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
            fixed_bw_sub_tlv_value->parent = this;
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        return children.at("fixed-bw-sub-tlv-value");
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        else
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
            flex_bw_sub_tlv_value->parent = this;
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        return children.at("flex-bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children()
{
    if(children.find("fixed-bw-sub-tlv-value") == children.end())
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
    }

    if(children.find("flex-bw-sub-tlv-value") == children.end())
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    unres_oduj_prio{YType::uint32, "unres-oduj-prio"}
    	,
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;
    children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(unres_oduj_prio.operation)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto unres_oduj_prio_name_datas = unres_oduj_prio.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_oduj_prio_name_datas.begin(), unres_oduj_prio_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        else
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
            fixed_sub_tlv_value->parent = this;
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        return children.at("fixed-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children()
{
    if(children.find("fixed-sub-tlv-value") == children.end())
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unres-oduj-prio")
    {
        unres_oduj_prio.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    max_lspbw{YType::uint64, "max-lspbw"},
    unres_lspbw{YType::uint64, "unres-lspbw"}
    	,
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;
    children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(max_lspbw.operation)
	|| is_set(unres_lspbw.operation)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());
    auto unres_lspbw_name_datas = unres_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_lspbw_name_datas.begin(), unres_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        else
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
            flex_sub_tlv_value_common->parent = this;
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        return children.at("flex-sub-tlv-value-common");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children()
{
    if(children.find("flex-sub-tlv-value-common") == children.end())
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "unres-lspbw")
    {
        unres_lspbw.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexSubTlvValueCommon' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{
    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::~UnidtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_data() const
{
    return uni_dir_delay.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(uni_dir_delay.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnidtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.operation)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeFragment_()
    :
    dste_model_id{YType::uint8, "dste-model-id"},
    fragment_id{YType::uint32, "fragment-id"},
    fragment_instance{YType::uint32, "fragment-instance"},
    same_fragment_count{YType::uint8, "same-fragment-count"}
{
    yang_name = "mpls-te-fragment"; yang_parent_name = "mpls-te-fragment";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::~MplsTeFragment_()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::has_data() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return dste_model_id.is_set
	|| fragment_id.is_set
	|| fragment_instance.is_set
	|| same_fragment_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dste_model_id.operation)
	|| is_set(fragment_id.operation)
	|| is_set(fragment_instance.operation)
	|| is_set(same_fragment_count.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragment";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeFragment_' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_model_id.is_set || is_set(dste_model_id.operation)) leaf_name_data.push_back(dste_model_id.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.operation)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (fragment_instance.is_set || is_set(fragment_instance.operation)) leaf_name_data.push_back(fragment_instance.get_name_leafdata());
    if (same_fragment_count.is_set || is_set(same_fragment_count.operation)) leaf_name_data.push_back(same_fragment_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-te-link")
    {
        for(auto const & c : mpls_te_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink>();
        c->parent = this;
        mpls_te_link.push_back(std::move(c));
        children[segment_path] = mpls_te_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_children()
{
    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dste-model-id")
    {
        dste_model_id = value;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
    }
    if(value_path == "fragment-instance")
    {
        fragment_instance = value;
    }
    if(value_path == "same-fragment-count")
    {
        same_fragment_count = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsTeLink()
    :
    affinity{YType::uint32, "affinity"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    fragment_id{YType::uint32, "fragment-id"},
    igp_metric{YType::uint32, "igp-metric"},
    input_interface_id{YType::uint32, "input-interface-id"},
    link_address{YType::str, "link-address"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    new_link{YType::boolean, "new-link"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"},
    output_interface_id{YType::uint32, "output-interface-id"},
    priority_count{YType::int32, "priority-count"},
    te_metric{YType::uint32, "te-metric"}
    	,
    extended_admin_group_list(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList>())
	,global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority>())
{
    extended_admin_group_list->parent = this;
    children["extended-admin-group-list"] = extended_admin_group_list;

    global_unreserve_bw_per_priority->parent = this;
    children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;

    link_protocol_priority_capability->parent = this;
    children["link-protocol-priority-capability"] = link_protocol_priority_capability;

    link_sw_capability->parent = this;
    children["link-sw-capability"] = link_sw_capability;

    sub_pool_unreserve_bw_per_priority->parent = this;
    children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-fragment";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::~MplsTeLink()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_data())
            return true;
    }
    return affinity.is_set
	|| dste_allocation_model_id.is_set
	|| dste_in_use.is_set
	|| fragment_id.is_set
	|| igp_metric.is_set
	|| input_interface_id.is_set
	|| link_address.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_ip_address.is_set
	|| neighbor_system_id.is_set
	|| new_link.is_set
	|| number_of_optional_tl_vs.is_set
	|| output_interface_id.is_set
	|| priority_count.is_set
	|| te_metric.is_set
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(dste_allocation_model_id.operation)
	|| is_set(dste_in_use.operation)
	|| is_set(fragment_id.operation)
	|| is_set(igp_metric.operation)
	|| is_set(input_interface_id.operation)
	|| is_set(link_address.operation)
	|| is_set(maximum_link_bw.operation)
	|| is_set(maximum_link_reservable_bw.operation)
	|| is_set(maximum_link_sub_reservable_bw.operation)
	|| is_set(mpls_link_instance.operation)
	|| is_set(mpls_link_type.operation)
	|| is_set(neighbor_ip_address.operation)
	|| is_set(neighbor_system_id.operation)
	|| is_set(new_link.operation)
	|| is_set(number_of_optional_tl_vs.operation)
	|| is_set(output_interface_id.operation)
	|| is_set(priority_count.operation)
	|| is_set(te_metric.operation)
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation())
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeLink' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.operation)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.operation)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.operation)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.operation)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.operation)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.operation)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.operation)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.operation)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.operation)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.operation)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (new_link.is_set || is_set(new_link.operation)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.operation)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.operation)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.operation)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        else
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList>();
            extended_admin_group_list->parent = this;
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
        return children.at("extended-admin-group-list");
    }

    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        else
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority>();
            global_unreserve_bw_per_priority->parent = this;
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
        return children.at("global-unreserve-bw-per-priority");
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        else
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability>();
            link_protocol_priority_capability->parent = this;
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
        return children.at("link-protocol-priority-capability");
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
        else
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability>();
            link_sw_capability->parent = this;
            children["link-sw-capability"] = link_sw_capability;
        }
        return children.at("link-sw-capability");
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        for(auto const & c : mplste_link_opt_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        else
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority>();
            sub_pool_unreserve_bw_per_priority->parent = this;
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
        return children.at("sub-pool-unreserve-bw-per-priority");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_children()
{
    if(children.find("extended-admin-group-list") == children.end())
    {
        if(extended_admin_group_list != nullptr)
        {
            children["extended-admin-group-list"] = extended_admin_group_list;
        }
    }

    if(children.find("global-unreserve-bw-per-priority") == children.end())
    {
        if(global_unreserve_bw_per_priority != nullptr)
        {
            children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
        }
    }

    if(children.find("link-protocol-priority-capability") == children.end())
    {
        if(link_protocol_priority_capability != nullptr)
        {
            children["link-protocol-priority-capability"] = link_protocol_priority_capability;
        }
    }

    if(children.find("link-sw-capability") == children.end())
    {
        if(link_sw_capability != nullptr)
        {
            children["link-sw-capability"] = link_sw_capability;
        }
    }

    for (auto const & c : mplste_link_opt_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("sub-pool-unreserve-bw-per-priority") == children.end())
    {
        if(sub_pool_unreserve_bw_per_priority != nullptr)
        {
            children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw = value;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw = value;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw = value;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance = value;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type = value;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
    }
    if(value_path == "new-link")
    {
        new_link = value;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
    :
    bw_per_priority{YType::uint64, "bw-per-priority"}
{
    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (auto const & leaf : bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bw_per_priority.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubPoolUnreserveBwPerPriority' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bw_per_priority_name_datas = bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bw_per_priority_name_datas.begin(), bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-per-priority")
    {
        bw_per_priority.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{
    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::~LinkProtocolPriorityCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::has_data() const
{
    return link_protocol_capability.is_set
	|| link_protocol_priority.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::has_operation() const
{
    return is_set(operation)
	|| is_set(link_protocol_capability.operation)
	|| is_set(link_protocol_priority.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkProtocolPriorityCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.operation)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.operation)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability = value;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::LinkSwCapability()
    :
    link_encoding{YType::uint8, "link-encoding"},
    link_mtu{YType::uint16, "link-mtu"},
    link_switching_capability{YType::uint8, "link-switching-capability"},
    maximum_lsp_bw_per_priority{YType::uint64, "maximum-lsp-bw-per-priority"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"}
{
    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::has_data() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return link_encoding.is_set
	|| link_mtu.is_set
	|| link_switching_capability.is_set
	|| minimum_lsp_bw.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::has_operation() const
{
    for (auto const & leaf : maximum_lsp_bw_per_priority.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(link_encoding.operation)
	|| is_set(link_mtu.operation)
	|| is_set(link_switching_capability.operation)
	|| is_set(maximum_lsp_bw_per_priority.operation)
	|| is_set(minimum_lsp_bw.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkSwCapability' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_encoding.is_set || is_set(link_encoding.operation)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.operation)) leaf_name_data.push_back(link_mtu.get_name_leafdata());
    if (link_switching_capability.is_set || is_set(link_switching_capability.operation)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.operation)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());

    auto maximum_lsp_bw_per_priority_name_datas = maximum_lsp_bw_per_priority.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), maximum_lsp_bw_per_priority_name_datas.begin(), maximum_lsp_bw_per_priority_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-encoding")
    {
        link_encoding = value;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
    }
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
    }
    if(value_path == "maximum-lsp-bw-per-priority")
    {
        maximum_lsp_bw_per_priority.append(value);
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    ext_admin_data{YType::uint32, "ext-admin-data"},
    extended_admin_size{YType::uint32, "extended-admin-size"}
{
    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::has_data() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::has_operation() const
{
    for (auto const & leaf : ext_admin_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(ext_admin_data.operation)
	|| is_set(extended_admin_size.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedAdminGroupList' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.operation)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    auto ext_admin_data_name_datas = ext_admin_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ext_admin_data_name_datas.begin(), ext_admin_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ext-admin-data")
    {
        ext_admin_data.append(value);
    }
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"},
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"}
{
    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::~MplsteLinkOptTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::has_data() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_data())
            return true;
    }
    return mplste_link_opt_tlv_len.is_set
	|| mplste_link_opt_tlv_type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_opt_tlv_len.operation)
	|| is_set(mplste_link_opt_tlv_type.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());
    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.operation)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        for(auto const & c : mplste_link_opt_tlv_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(std::move(c));
        children[segment_path] = mplste_link_opt_tlv_value.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_children()
{
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
    }
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    children["bctlv-value"] = bctlv_value;

    ixcdtlv_value->parent = this;
    children["ixcdtlv-value"] = ixcdtlv_value;

    srlgtlv_value->parent = this;
    children["srlgtlv-value"] = srlgtlv_value;

    unidtlv_value->parent = this;
    children["unidtlv-value"] = unidtlv_value;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(opaque_tlv_type.operation)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsteLinkOptTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.operation)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
        else
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
            bctlv_value->parent = this;
            children["bctlv-value"] = bctlv_value;
        }
        return children.at("bctlv-value");
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        else
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
            ixcdtlv_value->parent = this;
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
        return children.at("ixcdtlv-value");
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
        else
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
            srlgtlv_value->parent = this;
            children["srlgtlv-value"] = srlgtlv_value;
        }
        return children.at("srlgtlv-value");
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
        else
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
            unidtlv_value->parent = this;
            children["unidtlv-value"] = unidtlv_value;
        }
        return children.at("unidtlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children()
{
    if(children.find("bctlv-value") == children.end())
    {
        if(bctlv_value != nullptr)
        {
            children["bctlv-value"] = bctlv_value;
        }
    }

    if(children.find("ixcdtlv-value") == children.end())
    {
        if(ixcdtlv_value != nullptr)
        {
            children["ixcdtlv-value"] = ixcdtlv_value;
        }
    }

    if(children.find("srlgtlv-value") == children.end())
    {
        if(srlgtlv_value != nullptr)
        {
            children["srlgtlv-value"] = srlgtlv_value;
        }
    }

    if(children.find("unidtlv-value") == children.end())
    {
        if(unidtlv_value != nullptr)
        {
            children["unidtlv-value"] = unidtlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    mplste_link_bc_bandwidth{YType::uint64, "mplste-link-bc-bandwidth"},
    num_b_cs{YType::uint32, "num-b-cs"}
{
    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_bc_bandwidth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(model_id.operation)
	|| is_set(mplste_link_bc_bandwidth.operation)
	|| is_set(num_b_cs.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BctlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.operation)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.operation)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    auto mplste_link_bc_bandwidth_name_datas = mplste_link_bc_bandwidth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_bc_bandwidth_name_datas.begin(), mplste_link_bc_bandwidth_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "model-id")
    {
        model_id = value;
    }
    if(value_path == "mplste-link-bc-bandwidth")
    {
        mplste_link_bc_bandwidth.append(value);
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    mplste_link_srlg_data{YType::uint32, "mplste-link-srlg-data"},
    num_srl_gs{YType::uint32, "num-srl-gs"},
    srlg_len{YType::uint32, "srlg-len"}
{
    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return num_srl_gs.is_set
	|| srlg_len.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (auto const & leaf : mplste_link_srlg_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mplste_link_srlg_data.operation)
	|| is_set(num_srl_gs.operation)
	|| is_set(srlg_len.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_srl_gs.is_set || is_set(num_srl_gs.operation)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());
    if (srlg_len.is_set || is_set(srlg_len.operation)) leaf_name_data.push_back(srlg_len.get_name_leafdata());

    auto mplste_link_srlg_data_name_datas = mplste_link_srlg_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mplste_link_srlg_data_name_datas.begin(), mplste_link_srlg_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplste-link-srlg-data")
    {
        mplste_link_srlg_data.append(value);
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
    }
    if(value_path == "srlg-len")
    {
        srlg_len = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"},
    max_lspbw{YType::int64, "max-lspbw"},
    rile_len_code{YType::uint8, "rile-len-code"},
    switching_cap{YType::uint8, "switching-cap"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;
    children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| rile_len_code.is_set
	|| switching_cap.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(fixed_scsi_count.operation)
	|| is_set(flex_scsi_count.operation)
	|| is_set(max_lspbw.operation)
	|| is_set(rile_len_code.operation)
	|| is_set(switching_cap.operation)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.operation)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.operation)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.operation)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (switching_cap.is_set || is_set(switching_cap.operation)) leaf_name_data.push_back(switching_cap.get_name_leafdata());

    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        else
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
            ixcd_switching_cap_type->parent = this;
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
        return children.at("ixcd-switching-cap-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children()
{
    if(children.find("ixcd-switching-cap-type") == children.end())
    {
        if(ixcd_switching_cap_type != nullptr)
        {
            children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count = value;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count = value;
    }
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
    }
    if(value_path == "switching-cap")
    {
        switching_cap = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
	,ixcdpsc_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
{
    ixcdbw_sub_tlv->parent = this;
    children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;

    ixcdpsc_info->parent = this;
    children["ixcdpsc-info"] = ixcdpsc_info;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(operation)
	|| is_set(switching_cap_type.operation)
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation())
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdSwitchingCapType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.operation)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        else
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
            ixcdbw_sub_tlv->parent = this;
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
        return children.at("ixcdbw-sub-tlv");
    }

    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        else
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
            ixcdpsc_info->parent = this;
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
        return children.at("ixcdpsc-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children()
{
    if(children.find("ixcdbw-sub-tlv") == children.end())
    {
        if(ixcdbw_sub_tlv != nullptr)
        {
            children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
        }
    }

    if(children.find("ixcdpsc-info") == children.end())
    {
        if(ixcdpsc_info != nullptr)
        {
            children["ixcdpsc-info"] = ixcdpsc_info;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{
    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::~IxcdpscInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_data() const
{
    return min_lsp_bandwidth.is_set
	|| psc_interface_mtu.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(min_lsp_bandwidth.operation)
	|| is_set(psc_interface_mtu.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdpscInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.operation)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.operation)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth = value;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{
    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::~IxcdbwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_data() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_operation() const
{
    for (std::size_t index=0; index<arr_bw_sub_tlv.size(); index++)
    {
        if(arr_bw_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IxcdbwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "arr-bw-sub-tlv")
    {
        for(auto const & c : arr_bw_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(std::move(c));
        children[segment_path] = arr_bw_sub_tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children()
{
    for (auto const & c : arr_bw_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"},
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;
    children["bw-sub-tlv-value"] = bw_sub_tlv_value;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_length.is_set
	|| bw_sub_tlv_type.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(bw_sub_tlv_length.operation)
	|| is_set(bw_sub_tlv_type.operation)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArrBwSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.operation)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());
    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.operation)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        else
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
            bw_sub_tlv_value->parent = this;
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
        return children.at("bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children()
{
    if(children.find("bw-sub-tlv-value") == children.end())
    {
        if(bw_sub_tlv_value != nullptr)
        {
            children["bw-sub-tlv-value"] = bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
    }
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;

    flex_bw_sub_tlv_value->parent = this;
    children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::~BwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_data() const
{
    return ixcdbw_sub_tlv_type.is_set
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_data())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(ixcdbw_sub_tlv_type.operation)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.operation)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        else
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
            fixed_bw_sub_tlv_value->parent = this;
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
        return children.at("fixed-bw-sub-tlv-value");
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        else
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
            flex_bw_sub_tlv_value->parent = this;
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
        return children.at("flex-bw-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children()
{
    if(children.find("fixed-bw-sub-tlv-value") == children.end())
    {
        if(fixed_bw_sub_tlv_value != nullptr)
        {
            children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
        }
    }

    if(children.find("flex-bw-sub-tlv-value") == children.end())
    {
        if(flex_bw_sub_tlv_value != nullptr)
        {
            children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    unres_oduj_prio{YType::uint32, "unres-oduj-prio"}
    	,
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;
    children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : unres_oduj_prio.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(unres_oduj_prio.operation)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto unres_oduj_prio_name_datas = unres_oduj_prio.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_oduj_prio_name_datas.begin(), unres_oduj_prio_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        else
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
            fixed_sub_tlv_value->parent = this;
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
        return children.at("fixed-sub-tlv-value");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children()
{
    if(children.find("fixed-sub-tlv-value") == children.end())
    {
        if(fixed_sub_tlv_value != nullptr)
        {
            children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unres-oduj-prio")
    {
        unres_oduj_prio.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FixedSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    max_lspbw{YType::uint64, "max-lspbw"},
    unres_lspbw{YType::uint64, "unres-lspbw"}
    	,
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;
    children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (auto const & leaf : max_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : unres_lspbw.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(max_lspbw.operation)
	|| is_set(unres_lspbw.operation)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexBwSubTlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto max_lspbw_name_datas = max_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lspbw_name_datas.begin(), max_lspbw_name_datas.end());
    auto unres_lspbw_name_datas = unres_lspbw.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unres_lspbw_name_datas.begin(), unres_lspbw_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        else
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
            flex_sub_tlv_value_common->parent = this;
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
        return children.at("flex-sub-tlv-value-common");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children()
{
    if(children.find("flex-sub-tlv-value-common") == children.end())
    {
        if(flex_sub_tlv_value_common != nullptr)
        {
            children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-lspbw")
    {
        max_lspbw.append(value);
    }
    if(value_path == "unres-lspbw")
    {
        unres_lspbw.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    num_stages{YType::uint8, "num-stages"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    res{YType::uint8, "res"},
    sbit{YType::uint8, "sbit"},
    signal_type{YType::uint8, "signal-type"},
    stage{YType::str, "stage"},
    tbit{YType::uint8, "tbit"},
    tsg{YType::uint8, "tsg"}
{
    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return num_stages.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| res.is_set
	|| sbit.is_set
	|| signal_type.is_set
	|| stage.is_set
	|| tbit.is_set
	|| tsg.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(operation)
	|| is_set(num_stages.operation)
	|| is_set(priority_bit0.operation)
	|| is_set(priority_bit1.operation)
	|| is_set(priority_bit2.operation)
	|| is_set(priority_bit3.operation)
	|| is_set(priority_bit4.operation)
	|| is_set(priority_bit5.operation)
	|| is_set(priority_bit6.operation)
	|| is_set(priority_bit7.operation)
	|| is_set(res.operation)
	|| is_set(sbit.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage.operation)
	|| is_set(tbit.operation)
	|| is_set(tsg.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlexSubTlvValueCommon' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_stages.is_set || is_set(num_stages.operation)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.operation)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.operation)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.operation)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.operation)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.operation)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.operation)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.operation)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.operation)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (res.is_set || is_set(res.operation)) leaf_name_data.push_back(res.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage.is_set || is_set(stage.operation)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.operation)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.operation)) leaf_name_data.push_back(tsg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-stages")
    {
        num_stages = value;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
    }
    if(value_path == "res")
    {
        res = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage")
    {
        stage = value;
    }
    if(value_path == "tbit")
    {
        tbit = value;
    }
    if(value_path == "tsg")
    {
        tsg = value;
    }
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{
    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value";
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::~UnidtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_data() const
{
    return uni_dir_delay.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_operation() const
{
    return is_set(operation)
	|| is_set(uni_dir_delay.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnidtlvValue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.operation)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::Statistics()
    :
    frr_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats>())
	,interface_stats_entries(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries>())
	,issu_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats>())
	,nsr_pl_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats>())
	,nsr_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats>())
	,protocol_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats>())
	,raw_io_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats>())
	,rib_batch_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats>())
	,rib_thread_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats>())
	,spf_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats>())
	,te_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::TeStats>())
{
    frr_stats->parent = this;
    children["frr-stats"] = frr_stats;

    interface_stats_entries->parent = this;
    children["interface-stats-entries"] = interface_stats_entries;

    issu_stats->parent = this;
    children["issu-stats"] = issu_stats;

    nsr_pl_stats->parent = this;
    children["nsr-pl-stats"] = nsr_pl_stats;

    nsr_stats->parent = this;
    children["nsr-stats"] = nsr_stats;

    protocol_stats->parent = this;
    children["protocol-stats"] = protocol_stats;

    raw_io_stats->parent = this;
    children["raw-io-stats"] = raw_io_stats;

    rib_batch_stats->parent = this;
    children["rib-batch-stats"] = rib_batch_stats;

    rib_thread_stats->parent = this;
    children["rib-thread-stats"] = rib_thread_stats;

    spf_stats->parent = this;
    children["spf-stats"] = spf_stats;

    te_stats->parent = this;
    children["te-stats"] = te_stats;

    yang_name = "statistics"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::Statistics::~Statistics()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::has_data() const
{
    return (frr_stats !=  nullptr && frr_stats->has_data())
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_data())
	|| (issu_stats !=  nullptr && issu_stats->has_data())
	|| (nsr_pl_stats !=  nullptr && nsr_pl_stats->has_data())
	|| (nsr_stats !=  nullptr && nsr_stats->has_data())
	|| (protocol_stats !=  nullptr && protocol_stats->has_data())
	|| (raw_io_stats !=  nullptr && raw_io_stats->has_data())
	|| (rib_batch_stats !=  nullptr && rib_batch_stats->has_data())
	|| (rib_thread_stats !=  nullptr && rib_thread_stats->has_data())
	|| (spf_stats !=  nullptr && spf_stats->has_data())
	|| (te_stats !=  nullptr && te_stats->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::has_operation() const
{
    return is_set(operation)
	|| (frr_stats !=  nullptr && frr_stats->has_operation())
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_operation())
	|| (issu_stats !=  nullptr && issu_stats->has_operation())
	|| (nsr_pl_stats !=  nullptr && nsr_pl_stats->has_operation())
	|| (nsr_stats !=  nullptr && nsr_stats->has_operation())
	|| (protocol_stats !=  nullptr && protocol_stats->has_operation())
	|| (raw_io_stats !=  nullptr && raw_io_stats->has_operation())
	|| (rib_batch_stats !=  nullptr && rib_batch_stats->has_operation())
	|| (rib_thread_stats !=  nullptr && rib_thread_stats->has_operation())
	|| (spf_stats !=  nullptr && spf_stats->has_operation())
	|| (te_stats !=  nullptr && te_stats->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-stats")
    {
        if(frr_stats != nullptr)
        {
            children["frr-stats"] = frr_stats;
        }
        else
        {
            frr_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats>();
            frr_stats->parent = this;
            children["frr-stats"] = frr_stats;
        }
        return children.at("frr-stats");
    }

    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries != nullptr)
        {
            children["interface-stats-entries"] = interface_stats_entries;
        }
        else
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries>();
            interface_stats_entries->parent = this;
            children["interface-stats-entries"] = interface_stats_entries;
        }
        return children.at("interface-stats-entries");
    }

    if(child_yang_name == "issu-stats")
    {
        if(issu_stats != nullptr)
        {
            children["issu-stats"] = issu_stats;
        }
        else
        {
            issu_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats>();
            issu_stats->parent = this;
            children["issu-stats"] = issu_stats;
        }
        return children.at("issu-stats");
    }

    if(child_yang_name == "nsr-pl-stats")
    {
        if(nsr_pl_stats != nullptr)
        {
            children["nsr-pl-stats"] = nsr_pl_stats;
        }
        else
        {
            nsr_pl_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats>();
            nsr_pl_stats->parent = this;
            children["nsr-pl-stats"] = nsr_pl_stats;
        }
        return children.at("nsr-pl-stats");
    }

    if(child_yang_name == "nsr-stats")
    {
        if(nsr_stats != nullptr)
        {
            children["nsr-stats"] = nsr_stats;
        }
        else
        {
            nsr_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats>();
            nsr_stats->parent = this;
            children["nsr-stats"] = nsr_stats;
        }
        return children.at("nsr-stats");
    }

    if(child_yang_name == "protocol-stats")
    {
        if(protocol_stats != nullptr)
        {
            children["protocol-stats"] = protocol_stats;
        }
        else
        {
            protocol_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats>();
            protocol_stats->parent = this;
            children["protocol-stats"] = protocol_stats;
        }
        return children.at("protocol-stats");
    }

    if(child_yang_name == "raw-io-stats")
    {
        if(raw_io_stats != nullptr)
        {
            children["raw-io-stats"] = raw_io_stats;
        }
        else
        {
            raw_io_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats>();
            raw_io_stats->parent = this;
            children["raw-io-stats"] = raw_io_stats;
        }
        return children.at("raw-io-stats");
    }

    if(child_yang_name == "rib-batch-stats")
    {
        if(rib_batch_stats != nullptr)
        {
            children["rib-batch-stats"] = rib_batch_stats;
        }
        else
        {
            rib_batch_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats>();
            rib_batch_stats->parent = this;
            children["rib-batch-stats"] = rib_batch_stats;
        }
        return children.at("rib-batch-stats");
    }

    if(child_yang_name == "rib-thread-stats")
    {
        if(rib_thread_stats != nullptr)
        {
            children["rib-thread-stats"] = rib_thread_stats;
        }
        else
        {
            rib_thread_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats>();
            rib_thread_stats->parent = this;
            children["rib-thread-stats"] = rib_thread_stats;
        }
        return children.at("rib-thread-stats");
    }

    if(child_yang_name == "spf-stats")
    {
        if(spf_stats != nullptr)
        {
            children["spf-stats"] = spf_stats;
        }
        else
        {
            spf_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats>();
            spf_stats->parent = this;
            children["spf-stats"] = spf_stats;
        }
        return children.at("spf-stats");
    }

    if(child_yang_name == "te-stats")
    {
        if(te_stats != nullptr)
        {
            children["te-stats"] = te_stats;
        }
        else
        {
            te_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::TeStats>();
            te_stats->parent = this;
            children["te-stats"] = te_stats;
        }
        return children.at("te-stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::get_children()
{
    if(children.find("frr-stats") == children.end())
    {
        if(frr_stats != nullptr)
        {
            children["frr-stats"] = frr_stats;
        }
    }

    if(children.find("interface-stats-entries") == children.end())
    {
        if(interface_stats_entries != nullptr)
        {
            children["interface-stats-entries"] = interface_stats_entries;
        }
    }

    if(children.find("issu-stats") == children.end())
    {
        if(issu_stats != nullptr)
        {
            children["issu-stats"] = issu_stats;
        }
    }

    if(children.find("nsr-pl-stats") == children.end())
    {
        if(nsr_pl_stats != nullptr)
        {
            children["nsr-pl-stats"] = nsr_pl_stats;
        }
    }

    if(children.find("nsr-stats") == children.end())
    {
        if(nsr_stats != nullptr)
        {
            children["nsr-stats"] = nsr_stats;
        }
    }

    if(children.find("protocol-stats") == children.end())
    {
        if(protocol_stats != nullptr)
        {
            children["protocol-stats"] = protocol_stats;
        }
    }

    if(children.find("raw-io-stats") == children.end())
    {
        if(raw_io_stats != nullptr)
        {
            children["raw-io-stats"] = raw_io_stats;
        }
    }

    if(children.find("rib-batch-stats") == children.end())
    {
        if(rib_batch_stats != nullptr)
        {
            children["rib-batch-stats"] = rib_batch_stats;
        }
    }

    if(children.find("rib-thread-stats") == children.end())
    {
        if(rib_thread_stats != nullptr)
        {
            children["rib-thread-stats"] = rib_thread_stats;
        }
    }

    if(children.find("spf-stats") == children.end())
    {
        if(spf_stats != nullptr)
        {
            children["spf-stats"] = spf_stats;
        }
    }

    if(children.find("te-stats") == children.end())
    {
        if(te_stats != nullptr)
        {
            children["te-stats"] = te_stats;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfStats()
    :
    spf_header(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader>())
{
    spf_header->parent = this;
    children["spf-header"] = spf_header;

    yang_name = "spf-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::~SpfStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::has_data() const
{
    for (std::size_t index=0; index<os_ex_runtime.size(); index++)
    {
        if(os_ex_runtime[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<os_runtime.size(); index++)
    {
        if(os_runtime[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<os_sum_runtime.size(); index++)
    {
        if(os_sum_runtime[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_data())
            return true;
    }
    return (spf_header !=  nullptr && spf_header->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::has_operation() const
{
    for (std::size_t index=0; index<os_ex_runtime.size(); index++)
    {
        if(os_ex_runtime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<os_runtime.size(); index++)
    {
        if(os_runtime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<os_sum_runtime.size(); index++)
    {
        if(os_sum_runtime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (spf_header !=  nullptr && spf_header->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "os-ex-runtime")
    {
        for(auto const & c : os_ex_runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime>();
        c->parent = this;
        os_ex_runtime.push_back(std::move(c));
        children[segment_path] = os_ex_runtime.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "os-runtime")
    {
        for(auto const & c : os_runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime>();
        c->parent = this;
        os_runtime.push_back(std::move(c));
        children[segment_path] = os_runtime.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "os-sum-runtime")
    {
        for(auto const & c : os_sum_runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime>();
        c->parent = this;
        os_sum_runtime.push_back(std::move(c));
        children[segment_path] = os_sum_runtime.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "runtime")
    {
        for(auto const & c : runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime>();
        c->parent = this;
        runtime.push_back(std::move(c));
        children[segment_path] = runtime.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "spf-header")
    {
        if(spf_header != nullptr)
        {
            children["spf-header"] = spf_header;
        }
        else
        {
            spf_header = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader>();
            spf_header->parent = this;
            children["spf-header"] = spf_header;
        }
        return children.at("spf-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::get_children()
{
    for (auto const & c : os_ex_runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : os_runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : os_sum_runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("spf-header") == children.end())
    {
        if(spf_header != nullptr)
        {
            children["spf-header"] = spf_header;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::SpfHeader()
    :
    router_id{YType::str, "router-id"},
    spf_count{YType::uint32, "spf-count"}
{
    yang_name = "spf-header"; yang_parent_name = "spf-stats";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::~SpfHeader()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::has_data() const
{
    for (std::size_t index=0; index<area_summ.size(); index++)
    {
        if(area_summ[index]->has_data())
            return true;
    }
    return router_id.is_set
	|| spf_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::has_operation() const
{
    for (std::size_t index=0; index<area_summ.size(); index++)
    {
        if(area_summ[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(router_id.operation)
	|| is_set(spf_count.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-header";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfHeader' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (spf_count.is_set || is_set(spf_count.operation)) leaf_name_data.push_back(spf_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-summ")
    {
        for(auto const & c : area_summ)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm>();
        c->parent = this;
        area_summ.push_back(std::move(c));
        children[segment_path] = area_summ.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::get_children()
{
    for (auto const & c : area_summ)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "spf-count")
    {
        spf_count = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::AreaSumm()
    :
    area_id{YType::uint32, "area-id"},
    spf_count{YType::uint32, "spf-count"}
{
    yang_name = "area-summ"; yang_parent_name = "spf-header";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::~AreaSumm()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::has_data() const
{
    return area_id.is_set
	|| spf_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(spf_count.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-summ";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaSumm' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (spf_count.is_set || is_set(spf_count.operation)) leaf_name_data.push_back(spf_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "spf-count")
    {
        spf_count = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::OsRuntime()
    :
    si_area_id_str{YType::str, "si-area-id-str"},
    si_change_flags{YType::uint16, "si-change-flags"}
    	,
    si_duration(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration>())
	,si_start_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime>())
{
    si_duration->parent = this;
    children["si-duration"] = si_duration;

    si_start_time->parent = this;
    children["si-start-time"] = si_start_time;

    yang_name = "os-runtime"; yang_parent_name = "spf-stats";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::~OsRuntime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::has_data() const
{
    return si_area_id_str.is_set
	|| si_change_flags.is_set
	|| (si_duration !=  nullptr && si_duration->has_data())
	|| (si_start_time !=  nullptr && si_start_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::has_operation() const
{
    return is_set(operation)
	|| is_set(si_area_id_str.operation)
	|| is_set(si_change_flags.operation)
	|| (si_duration !=  nullptr && si_duration->has_operation())
	|| (si_start_time !=  nullptr && si_start_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-runtime";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OsRuntime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si_area_id_str.is_set || is_set(si_area_id_str.operation)) leaf_name_data.push_back(si_area_id_str.get_name_leafdata());
    if (si_change_flags.is_set || is_set(si_change_flags.operation)) leaf_name_data.push_back(si_change_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "si-duration")
    {
        if(si_duration != nullptr)
        {
            children["si-duration"] = si_duration;
        }
        else
        {
            si_duration = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration>();
            si_duration->parent = this;
            children["si-duration"] = si_duration;
        }
        return children.at("si-duration");
    }

    if(child_yang_name == "si-start-time")
    {
        if(si_start_time != nullptr)
        {
            children["si-start-time"] = si_start_time;
        }
        else
        {
            si_start_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime>();
            si_start_time->parent = this;
            children["si-start-time"] = si_start_time;
        }
        return children.at("si-start-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::get_children()
{
    if(children.find("si-duration") == children.end())
    {
        if(si_duration != nullptr)
        {
            children["si-duration"] = si_duration;
        }
    }

    if(children.find("si-start-time") == children.end())
    {
        if(si_start_time != nullptr)
        {
            children["si-start-time"] = si_start_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "si-area-id-str")
    {
        si_area_id_str = value;
    }
    if(value_path == "si-change-flags")
    {
        si_change_flags = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::SiStartTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "si-start-time"; yang_parent_name = "os-runtime";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::~SiStartTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-start-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiStartTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::SiDuration()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "si-duration"; yang_parent_name = "os-runtime";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::~SiDuration()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-duration";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiDuration' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::OsSumRuntime()
    :
    sp_adv_rtr_id{YType::uint32, "sp-adv-rtr-id"},
    sp_dest_addr{YType::uint32, "sp-dest-addr"},
    sp_dest_count{YType::uint32, "sp-dest-count"}
    	,
    sp_duration(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration>())
	,sp_start_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime>())
{
    sp_duration->parent = this;
    children["sp-duration"] = sp_duration;

    sp_start_time->parent = this;
    children["sp-start-time"] = sp_start_time;

    yang_name = "os-sum-runtime"; yang_parent_name = "spf-stats";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::~OsSumRuntime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::has_data() const
{
    return sp_adv_rtr_id.is_set
	|| sp_dest_addr.is_set
	|| sp_dest_count.is_set
	|| (sp_duration !=  nullptr && sp_duration->has_data())
	|| (sp_start_time !=  nullptr && sp_start_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::has_operation() const
{
    return is_set(operation)
	|| is_set(sp_adv_rtr_id.operation)
	|| is_set(sp_dest_addr.operation)
	|| is_set(sp_dest_count.operation)
	|| (sp_duration !=  nullptr && sp_duration->has_operation())
	|| (sp_start_time !=  nullptr && sp_start_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-sum-runtime";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OsSumRuntime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sp_adv_rtr_id.is_set || is_set(sp_adv_rtr_id.operation)) leaf_name_data.push_back(sp_adv_rtr_id.get_name_leafdata());
    if (sp_dest_addr.is_set || is_set(sp_dest_addr.operation)) leaf_name_data.push_back(sp_dest_addr.get_name_leafdata());
    if (sp_dest_count.is_set || is_set(sp_dest_count.operation)) leaf_name_data.push_back(sp_dest_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sp-duration")
    {
        if(sp_duration != nullptr)
        {
            children["sp-duration"] = sp_duration;
        }
        else
        {
            sp_duration = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration>();
            sp_duration->parent = this;
            children["sp-duration"] = sp_duration;
        }
        return children.at("sp-duration");
    }

    if(child_yang_name == "sp-start-time")
    {
        if(sp_start_time != nullptr)
        {
            children["sp-start-time"] = sp_start_time;
        }
        else
        {
            sp_start_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime>();
            sp_start_time->parent = this;
            children["sp-start-time"] = sp_start_time;
        }
        return children.at("sp-start-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::get_children()
{
    if(children.find("sp-duration") == children.end())
    {
        if(sp_duration != nullptr)
        {
            children["sp-duration"] = sp_duration;
        }
    }

    if(children.find("sp-start-time") == children.end())
    {
        if(sp_start_time != nullptr)
        {
            children["sp-start-time"] = sp_start_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id = value;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr = value;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::SpStartTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "sp-start-time"; yang_parent_name = "os-sum-runtime";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::~SpStartTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-start-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpStartTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::SpDuration()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "sp-duration"; yang_parent_name = "os-sum-runtime";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::~SpDuration()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-duration";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpDuration' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::OsExRuntime()
    :
    sp_adv_rtr_id{YType::uint32, "sp-adv-rtr-id"},
    sp_dest_addr{YType::uint32, "sp-dest-addr"},
    sp_dest_count{YType::uint32, "sp-dest-count"}
    	,
    sp_duration(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration>())
	,sp_start_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime>())
{
    sp_duration->parent = this;
    children["sp-duration"] = sp_duration;

    sp_start_time->parent = this;
    children["sp-start-time"] = sp_start_time;

    yang_name = "os-ex-runtime"; yang_parent_name = "spf-stats";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::~OsExRuntime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::has_data() const
{
    return sp_adv_rtr_id.is_set
	|| sp_dest_addr.is_set
	|| sp_dest_count.is_set
	|| (sp_duration !=  nullptr && sp_duration->has_data())
	|| (sp_start_time !=  nullptr && sp_start_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::has_operation() const
{
    return is_set(operation)
	|| is_set(sp_adv_rtr_id.operation)
	|| is_set(sp_dest_addr.operation)
	|| is_set(sp_dest_count.operation)
	|| (sp_duration !=  nullptr && sp_duration->has_operation())
	|| (sp_start_time !=  nullptr && sp_start_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-ex-runtime";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OsExRuntime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sp_adv_rtr_id.is_set || is_set(sp_adv_rtr_id.operation)) leaf_name_data.push_back(sp_adv_rtr_id.get_name_leafdata());
    if (sp_dest_addr.is_set || is_set(sp_dest_addr.operation)) leaf_name_data.push_back(sp_dest_addr.get_name_leafdata());
    if (sp_dest_count.is_set || is_set(sp_dest_count.operation)) leaf_name_data.push_back(sp_dest_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sp-duration")
    {
        if(sp_duration != nullptr)
        {
            children["sp-duration"] = sp_duration;
        }
        else
        {
            sp_duration = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration>();
            sp_duration->parent = this;
            children["sp-duration"] = sp_duration;
        }
        return children.at("sp-duration");
    }

    if(child_yang_name == "sp-start-time")
    {
        if(sp_start_time != nullptr)
        {
            children["sp-start-time"] = sp_start_time;
        }
        else
        {
            sp_start_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime>();
            sp_start_time->parent = this;
            children["sp-start-time"] = sp_start_time;
        }
        return children.at("sp-start-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::get_children()
{
    if(children.find("sp-duration") == children.end())
    {
        if(sp_duration != nullptr)
        {
            children["sp-duration"] = sp_duration;
        }
    }

    if(children.find("sp-start-time") == children.end())
    {
        if(sp_start_time != nullptr)
        {
            children["sp-start-time"] = sp_start_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id = value;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr = value;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::SpStartTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "sp-start-time"; yang_parent_name = "os-ex-runtime";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::~SpStartTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-start-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpStartTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::SpDuration()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "sp-duration"; yang_parent_name = "os-ex-runtime";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::~SpDuration()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-duration";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpDuration' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::Runtime()
    :
    lsa_change_cnt{YType::int16, "lsa-change-cnt"},
    spf_start_time{YType::uint32, "spf-start-time"}
    	,
    gbl_spf_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime>())
{
    gbl_spf_time->parent = this;
    children["gbl-spf-time"] = gbl_spf_time;

    yang_name = "runtime"; yang_parent_name = "spf-stats";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::~Runtime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::has_data() const
{
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsa_info.size(); index++)
    {
        if(lsa_info[index]->has_data())
            return true;
    }
    return lsa_change_cnt.is_set
	|| spf_start_time.is_set
	|| (gbl_spf_time !=  nullptr && gbl_spf_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::has_operation() const
{
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsa_info.size(); index++)
    {
        if(lsa_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(lsa_change_cnt.operation)
	|| is_set(spf_start_time.operation)
	|| (gbl_spf_time !=  nullptr && gbl_spf_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Runtime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_change_cnt.is_set || is_set(lsa_change_cnt.operation)) leaf_name_data.push_back(lsa_change_cnt.get_name_leafdata());
    if (spf_start_time.is_set || is_set(spf_start_time.operation)) leaf_name_data.push_back(spf_start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-stat")
    {
        for(auto const & c : area_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat>();
        c->parent = this;
        area_stat.push_back(std::move(c));
        children[segment_path] = area_stat.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "gbl-spf-time")
    {
        if(gbl_spf_time != nullptr)
        {
            children["gbl-spf-time"] = gbl_spf_time;
        }
        else
        {
            gbl_spf_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime>();
            gbl_spf_time->parent = this;
            children["gbl-spf-time"] = gbl_spf_time;
        }
        return children.at("gbl-spf-time");
    }

    if(child_yang_name == "lsa-info")
    {
        for(auto const & c : lsa_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo>();
        c->parent = this;
        lsa_info.push_back(std::move(c));
        children[segment_path] = lsa_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::get_children()
{
    for (auto const & c : area_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("gbl-spf-time") == children.end())
    {
        if(gbl_spf_time != nullptr)
        {
            children["gbl-spf-time"] = gbl_spf_time;
        }
    }

    for (auto const & c : lsa_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-change-cnt")
    {
        lsa_change_cnt = value;
    }
    if(value_path == "spf-start-time")
    {
        spf_start_time = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::GblSpfTime()
    :
    spf_dijkstra{YType::uint32, "spf-dijkstra"},
    spf_ext_prefix{YType::uint32, "spf-ext-prefix"},
    spf_ext_prefix_del{YType::uint32, "spf-ext-prefix-del"},
    spf_inter_prefix{YType::uint32, "spf-inter-prefix"},
    spf_inter_prefix_del{YType::uint32, "spf-inter-prefix-del"},
    spf_intra_prefix{YType::uint32, "spf-intra-prefix"},
    spf_intra_prefix_del{YType::uint32, "spf-intra-prefix-del"}
{
    yang_name = "gbl-spf-time"; yang_parent_name = "runtime";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::~GblSpfTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::has_data() const
{
    return spf_dijkstra.is_set
	|| spf_ext_prefix.is_set
	|| spf_ext_prefix_del.is_set
	|| spf_inter_prefix.is_set
	|| spf_inter_prefix_del.is_set
	|| spf_intra_prefix.is_set
	|| spf_intra_prefix_del.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::has_operation() const
{
    return is_set(operation)
	|| is_set(spf_dijkstra.operation)
	|| is_set(spf_ext_prefix.operation)
	|| is_set(spf_ext_prefix_del.operation)
	|| is_set(spf_inter_prefix.operation)
	|| is_set(spf_inter_prefix_del.operation)
	|| is_set(spf_intra_prefix.operation)
	|| is_set(spf_intra_prefix_del.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gbl-spf-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GblSpfTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_dijkstra.is_set || is_set(spf_dijkstra.operation)) leaf_name_data.push_back(spf_dijkstra.get_name_leafdata());
    if (spf_ext_prefix.is_set || is_set(spf_ext_prefix.operation)) leaf_name_data.push_back(spf_ext_prefix.get_name_leafdata());
    if (spf_ext_prefix_del.is_set || is_set(spf_ext_prefix_del.operation)) leaf_name_data.push_back(spf_ext_prefix_del.get_name_leafdata());
    if (spf_inter_prefix.is_set || is_set(spf_inter_prefix.operation)) leaf_name_data.push_back(spf_inter_prefix.get_name_leafdata());
    if (spf_inter_prefix_del.is_set || is_set(spf_inter_prefix_del.operation)) leaf_name_data.push_back(spf_inter_prefix_del.get_name_leafdata());
    if (spf_intra_prefix.is_set || is_set(spf_intra_prefix.operation)) leaf_name_data.push_back(spf_intra_prefix.get_name_leafdata());
    if (spf_intra_prefix_del.is_set || is_set(spf_intra_prefix_del.operation)) leaf_name_data.push_back(spf_intra_prefix_del.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra = value;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix = value;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del = value;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix = value;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del = value;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix = value;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::LsaInfo()
    :
    adv_rtr{YType::str, "adv-rtr"},
    area_id{YType::uint32, "area-id"},
    flush{YType::boolean, "flush"},
    id{YType::str, "id"},
    type{YType::uint8, "type"}
{
    yang_name = "lsa-info"; yang_parent_name = "runtime";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::~LsaInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::has_data() const
{
    return adv_rtr.is_set
	|| area_id.is_set
	|| flush.is_set
	|| id.is_set
	|| type.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_rtr.operation)
	|| is_set(area_id.operation)
	|| is_set(flush.operation)
	|| is_set(id.operation)
	|| is_set(type.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_rtr.is_set || is_set(adv_rtr.operation)) leaf_name_data.push_back(adv_rtr.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (flush.is_set || is_set(flush.operation)) leaf_name_data.push_back(flush.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-rtr")
    {
        adv_rtr = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "flush")
    {
        flush = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::AreaStat()
    :
    area_id{YType::uint32, "area-id"},
    lsa_type_cnt{YType::uint32, "lsa-type-cnt"}
    	,
    spf_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime>())
{
    spf_time->parent = this;
    children["spf-time"] = spf_time;

    yang_name = "area-stat"; yang_parent_name = "runtime";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::~AreaStat()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::has_data() const
{
    for (auto const & leaf : lsa_type_cnt.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return area_id.is_set
	|| (spf_time !=  nullptr && spf_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::has_operation() const
{
    for (auto const & leaf : lsa_type_cnt.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type_cnt.operation)
	|| (spf_time !=  nullptr && spf_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-stat";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaStat' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());

    auto lsa_type_cnt_name_datas = lsa_type_cnt.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_type_cnt_name_datas.begin(), lsa_type_cnt_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spf-time")
    {
        if(spf_time != nullptr)
        {
            children["spf-time"] = spf_time;
        }
        else
        {
            spf_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime>();
            spf_time->parent = this;
            children["spf-time"] = spf_time;
        }
        return children.at("spf-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::get_children()
{
    if(children.find("spf-time") == children.end())
    {
        if(spf_time != nullptr)
        {
            children["spf-time"] = spf_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type-cnt")
    {
        lsa_type_cnt.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::SpfTime()
    :
    spf_dijkstra{YType::uint32, "spf-dijkstra"},
    spf_ext_prefix{YType::uint32, "spf-ext-prefix"},
    spf_ext_prefix_del{YType::uint32, "spf-ext-prefix-del"},
    spf_inter_prefix{YType::uint32, "spf-inter-prefix"},
    spf_inter_prefix_del{YType::uint32, "spf-inter-prefix-del"},
    spf_intra_prefix{YType::uint32, "spf-intra-prefix"},
    spf_intra_prefix_del{YType::uint32, "spf-intra-prefix-del"}
{
    yang_name = "spf-time"; yang_parent_name = "area-stat";
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::~SpfTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_data() const
{
    return spf_dijkstra.is_set
	|| spf_ext_prefix.is_set
	|| spf_ext_prefix_del.is_set
	|| spf_inter_prefix.is_set
	|| spf_inter_prefix_del.is_set
	|| spf_intra_prefix.is_set
	|| spf_intra_prefix_del.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_operation() const
{
    return is_set(operation)
	|| is_set(spf_dijkstra.operation)
	|| is_set(spf_ext_prefix.operation)
	|| is_set(spf_ext_prefix_del.operation)
	|| is_set(spf_inter_prefix.operation)
	|| is_set(spf_inter_prefix_del.operation)
	|| is_set(spf_intra_prefix.operation)
	|| is_set(spf_intra_prefix_del.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_dijkstra.is_set || is_set(spf_dijkstra.operation)) leaf_name_data.push_back(spf_dijkstra.get_name_leafdata());
    if (spf_ext_prefix.is_set || is_set(spf_ext_prefix.operation)) leaf_name_data.push_back(spf_ext_prefix.get_name_leafdata());
    if (spf_ext_prefix_del.is_set || is_set(spf_ext_prefix_del.operation)) leaf_name_data.push_back(spf_ext_prefix_del.get_name_leafdata());
    if (spf_inter_prefix.is_set || is_set(spf_inter_prefix.operation)) leaf_name_data.push_back(spf_inter_prefix.get_name_leafdata());
    if (spf_inter_prefix_del.is_set || is_set(spf_inter_prefix_del.operation)) leaf_name_data.push_back(spf_inter_prefix_del.get_name_leafdata());
    if (spf_intra_prefix.is_set || is_set(spf_intra_prefix.operation)) leaf_name_data.push_back(spf_intra_prefix.get_name_leafdata());
    if (spf_intra_prefix_del.is_set || is_set(spf_intra_prefix_del.operation)) leaf_name_data.push_back(spf_intra_prefix_del.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra = value;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix = value;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del = value;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix = value;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del = value;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix = value;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::RibBatchStats()
{
    yang_name = "rib-batch-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::~RibBatchStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::has_data() const
{
    for (std::size_t index=0; index<priority_batch.size(); index++)
    {
        if(priority_batch[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::has_operation() const
{
    for (std::size_t index=0; index<priority_batch.size(); index++)
    {
        if(priority_batch[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-batch-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibBatchStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "priority-batch")
    {
        for(auto const & c : priority_batch)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch>();
        c->parent = this;
        priority_batch.push_back(std::move(c));
        children[segment_path] = priority_batch.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::get_children()
{
    for (auto const & c : priority_batch)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::PriorityBatch()
    :
    batches_sent{YType::uint32, "batches-sent"},
    lfas_add{YType::uint32, "lfas-add"},
    lfas_del{YType::uint32, "lfas-del"},
    lfas_pending{YType::uint32, "lfas-pending"},
    lfas_sent{YType::uint32, "lfas-sent"},
    max_routes{YType::uint32, "max-routes"},
    paths_add{YType::uint32, "paths-add"},
    paths_add_errs{YType::uint32, "paths-add-errs"},
    paths_del{YType::uint32, "paths-del"},
    paths_del_errs{YType::uint32, "paths-del-errs"},
    paths_pending{YType::uint32, "paths-pending"},
    paths_sent{YType::uint32, "paths-sent"},
    priority_level{YType::str, "priority-level"},
    routes_pending{YType::uint32, "routes-pending"},
    routes_sent{YType::uint32, "routes-sent"}
{
    yang_name = "priority-batch"; yang_parent_name = "rib-batch-stats";
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::~PriorityBatch()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::has_data() const
{
    return batches_sent.is_set
	|| lfas_add.is_set
	|| lfas_del.is_set
	|| lfas_pending.is_set
	|| lfas_sent.is_set
	|| max_routes.is_set
	|| paths_add.is_set
	|| paths_add_errs.is_set
	|| paths_del.is_set
	|| paths_del_errs.is_set
	|| paths_pending.is_set
	|| paths_sent.is_set
	|| priority_level.is_set
	|| routes_pending.is_set
	|| routes_sent.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::has_operation() const
{
    return is_set(operation)
	|| is_set(batches_sent.operation)
	|| is_set(lfas_add.operation)
	|| is_set(lfas_del.operation)
	|| is_set(lfas_pending.operation)
	|| is_set(lfas_sent.operation)
	|| is_set(max_routes.operation)
	|| is_set(paths_add.operation)
	|| is_set(paths_add_errs.operation)
	|| is_set(paths_del.operation)
	|| is_set(paths_del_errs.operation)
	|| is_set(paths_pending.operation)
	|| is_set(paths_sent.operation)
	|| is_set(priority_level.operation)
	|| is_set(routes_pending.operation)
	|| is_set(routes_sent.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-batch";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityBatch' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batches_sent.is_set || is_set(batches_sent.operation)) leaf_name_data.push_back(batches_sent.get_name_leafdata());
    if (lfas_add.is_set || is_set(lfas_add.operation)) leaf_name_data.push_back(lfas_add.get_name_leafdata());
    if (lfas_del.is_set || is_set(lfas_del.operation)) leaf_name_data.push_back(lfas_del.get_name_leafdata());
    if (lfas_pending.is_set || is_set(lfas_pending.operation)) leaf_name_data.push_back(lfas_pending.get_name_leafdata());
    if (lfas_sent.is_set || is_set(lfas_sent.operation)) leaf_name_data.push_back(lfas_sent.get_name_leafdata());
    if (max_routes.is_set || is_set(max_routes.operation)) leaf_name_data.push_back(max_routes.get_name_leafdata());
    if (paths_add.is_set || is_set(paths_add.operation)) leaf_name_data.push_back(paths_add.get_name_leafdata());
    if (paths_add_errs.is_set || is_set(paths_add_errs.operation)) leaf_name_data.push_back(paths_add_errs.get_name_leafdata());
    if (paths_del.is_set || is_set(paths_del.operation)) leaf_name_data.push_back(paths_del.get_name_leafdata());
    if (paths_del_errs.is_set || is_set(paths_del_errs.operation)) leaf_name_data.push_back(paths_del_errs.get_name_leafdata());
    if (paths_pending.is_set || is_set(paths_pending.operation)) leaf_name_data.push_back(paths_pending.get_name_leafdata());
    if (paths_sent.is_set || is_set(paths_sent.operation)) leaf_name_data.push_back(paths_sent.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.operation)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (routes_pending.is_set || is_set(routes_pending.operation)) leaf_name_data.push_back(routes_pending.get_name_leafdata());
    if (routes_sent.is_set || is_set(routes_sent.operation)) leaf_name_data.push_back(routes_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "batches-sent")
    {
        batches_sent = value;
    }
    if(value_path == "lfas-add")
    {
        lfas_add = value;
    }
    if(value_path == "lfas-del")
    {
        lfas_del = value;
    }
    if(value_path == "lfas-pending")
    {
        lfas_pending = value;
    }
    if(value_path == "lfas-sent")
    {
        lfas_sent = value;
    }
    if(value_path == "max-routes")
    {
        max_routes = value;
    }
    if(value_path == "paths-add")
    {
        paths_add = value;
    }
    if(value_path == "paths-add-errs")
    {
        paths_add_errs = value;
    }
    if(value_path == "paths-del")
    {
        paths_del = value;
    }
    if(value_path == "paths-del-errs")
    {
        paths_del_errs = value;
    }
    if(value_path == "paths-pending")
    {
        paths_pending = value;
    }
    if(value_path == "paths-sent")
    {
        paths_sent = value;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
    }
    if(value_path == "routes-pending")
    {
        routes_pending = value;
    }
    if(value_path == "routes-sent")
    {
        routes_sent = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::IssuStats()
    :
    nsr_conn_to_active_attempts{YType::uint64, "nsr-conn-to-active-attempts"},
    nsr_conn_to_active_closes{YType::uint64, "nsr-conn-to-active-closes"},
    nsr_conn_to_active_errors{YType::uint64, "nsr-conn-to-active-errors"},
    nsr_conn_to_active_fails{YType::uint64, "nsr-conn-to-active-fails"},
    nsr_conn_to_active_opens{YType::uint64, "nsr-conn-to-active-opens"},
    nsr_fsm_state{YType::int32, "nsr-fsm-state"},
    nsr_intf_seq_no{YType::uint32, "nsr-intf-seq-no"},
    nsr_lsa_init_sync_pend_count{YType::int32, "nsr-lsa-init-sync-pend-count"},
    nsr_lsa_qad_mdata_count{YType::uint32, "nsr-lsa-qad-mdata-count"},
    nsr_lsa_qad_qid{YType::uint32, "nsr-lsa-qad-qid"},
    nsr_mtu{YType::uint32, "nsr-mtu"},
    nsr_nbr_init_sync_pend_count{YType::int32, "nsr-nbr-init-sync-pend-count"},
    nsr_nbr_qad_mdata_count{YType::uint32, "nsr-nbr-qad-mdata-count"},
    nsr_nbr_qad_qid{YType::uint32, "nsr-nbr-qad-qid"},
    nsr_nbr_seq_no{YType::uint32, "nsr-nbr-seq-no"},
    nsr_nodeid{YType::uint32, "nsr-nodeid"},
    nsr_peer_nodeid{YType::uint32, "nsr-peer-nodeid"},
    nsr_peer_version{YType::uint32, "nsr-peer-version"},
    nsr_rev{YType::int32, "nsr-rev"},
    nsr_tmr_quant{YType::int32, "nsr-tmr-quant"},
    nsr_version{YType::uint32, "nsr-version"}
    	,
    nsr_rtr_thd_sched(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched>())
	,nsr_thd_sched(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched>())
{
    nsr_rtr_thd_sched->parent = this;
    children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;

    nsr_thd_sched->parent = this;
    children["nsr-thd-sched"] = nsr_thd_sched;

    yang_name = "issu-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::~IssuStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::has_data() const
{
    return nsr_conn_to_active_attempts.is_set
	|| nsr_conn_to_active_closes.is_set
	|| nsr_conn_to_active_errors.is_set
	|| nsr_conn_to_active_fails.is_set
	|| nsr_conn_to_active_opens.is_set
	|| nsr_fsm_state.is_set
	|| nsr_intf_seq_no.is_set
	|| nsr_lsa_init_sync_pend_count.is_set
	|| nsr_lsa_qad_mdata_count.is_set
	|| nsr_lsa_qad_qid.is_set
	|| nsr_mtu.is_set
	|| nsr_nbr_init_sync_pend_count.is_set
	|| nsr_nbr_qad_mdata_count.is_set
	|| nsr_nbr_qad_qid.is_set
	|| nsr_nbr_seq_no.is_set
	|| nsr_nodeid.is_set
	|| nsr_peer_nodeid.is_set
	|| nsr_peer_version.is_set
	|| nsr_rev.is_set
	|| nsr_tmr_quant.is_set
	|| nsr_version.is_set
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_data())
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_conn_to_active_attempts.operation)
	|| is_set(nsr_conn_to_active_closes.operation)
	|| is_set(nsr_conn_to_active_errors.operation)
	|| is_set(nsr_conn_to_active_fails.operation)
	|| is_set(nsr_conn_to_active_opens.operation)
	|| is_set(nsr_fsm_state.operation)
	|| is_set(nsr_intf_seq_no.operation)
	|| is_set(nsr_lsa_init_sync_pend_count.operation)
	|| is_set(nsr_lsa_qad_mdata_count.operation)
	|| is_set(nsr_lsa_qad_qid.operation)
	|| is_set(nsr_mtu.operation)
	|| is_set(nsr_nbr_init_sync_pend_count.operation)
	|| is_set(nsr_nbr_qad_mdata_count.operation)
	|| is_set(nsr_nbr_qad_qid.operation)
	|| is_set(nsr_nbr_seq_no.operation)
	|| is_set(nsr_nodeid.operation)
	|| is_set(nsr_peer_nodeid.operation)
	|| is_set(nsr_peer_version.operation)
	|| is_set(nsr_rev.operation)
	|| is_set(nsr_tmr_quant.operation)
	|| is_set(nsr_version.operation)
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_operation())
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IssuStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_conn_to_active_attempts.is_set || is_set(nsr_conn_to_active_attempts.operation)) leaf_name_data.push_back(nsr_conn_to_active_attempts.get_name_leafdata());
    if (nsr_conn_to_active_closes.is_set || is_set(nsr_conn_to_active_closes.operation)) leaf_name_data.push_back(nsr_conn_to_active_closes.get_name_leafdata());
    if (nsr_conn_to_active_errors.is_set || is_set(nsr_conn_to_active_errors.operation)) leaf_name_data.push_back(nsr_conn_to_active_errors.get_name_leafdata());
    if (nsr_conn_to_active_fails.is_set || is_set(nsr_conn_to_active_fails.operation)) leaf_name_data.push_back(nsr_conn_to_active_fails.get_name_leafdata());
    if (nsr_conn_to_active_opens.is_set || is_set(nsr_conn_to_active_opens.operation)) leaf_name_data.push_back(nsr_conn_to_active_opens.get_name_leafdata());
    if (nsr_fsm_state.is_set || is_set(nsr_fsm_state.operation)) leaf_name_data.push_back(nsr_fsm_state.get_name_leafdata());
    if (nsr_intf_seq_no.is_set || is_set(nsr_intf_seq_no.operation)) leaf_name_data.push_back(nsr_intf_seq_no.get_name_leafdata());
    if (nsr_lsa_init_sync_pend_count.is_set || is_set(nsr_lsa_init_sync_pend_count.operation)) leaf_name_data.push_back(nsr_lsa_init_sync_pend_count.get_name_leafdata());
    if (nsr_lsa_qad_mdata_count.is_set || is_set(nsr_lsa_qad_mdata_count.operation)) leaf_name_data.push_back(nsr_lsa_qad_mdata_count.get_name_leafdata());
    if (nsr_lsa_qad_qid.is_set || is_set(nsr_lsa_qad_qid.operation)) leaf_name_data.push_back(nsr_lsa_qad_qid.get_name_leafdata());
    if (nsr_mtu.is_set || is_set(nsr_mtu.operation)) leaf_name_data.push_back(nsr_mtu.get_name_leafdata());
    if (nsr_nbr_init_sync_pend_count.is_set || is_set(nsr_nbr_init_sync_pend_count.operation)) leaf_name_data.push_back(nsr_nbr_init_sync_pend_count.get_name_leafdata());
    if (nsr_nbr_qad_mdata_count.is_set || is_set(nsr_nbr_qad_mdata_count.operation)) leaf_name_data.push_back(nsr_nbr_qad_mdata_count.get_name_leafdata());
    if (nsr_nbr_qad_qid.is_set || is_set(nsr_nbr_qad_qid.operation)) leaf_name_data.push_back(nsr_nbr_qad_qid.get_name_leafdata());
    if (nsr_nbr_seq_no.is_set || is_set(nsr_nbr_seq_no.operation)) leaf_name_data.push_back(nsr_nbr_seq_no.get_name_leafdata());
    if (nsr_nodeid.is_set || is_set(nsr_nodeid.operation)) leaf_name_data.push_back(nsr_nodeid.get_name_leafdata());
    if (nsr_peer_nodeid.is_set || is_set(nsr_peer_nodeid.operation)) leaf_name_data.push_back(nsr_peer_nodeid.get_name_leafdata());
    if (nsr_peer_version.is_set || is_set(nsr_peer_version.operation)) leaf_name_data.push_back(nsr_peer_version.get_name_leafdata());
    if (nsr_rev.is_set || is_set(nsr_rev.operation)) leaf_name_data.push_back(nsr_rev.get_name_leafdata());
    if (nsr_tmr_quant.is_set || is_set(nsr_tmr_quant.operation)) leaf_name_data.push_back(nsr_tmr_quant.get_name_leafdata());
    if (nsr_version.is_set || is_set(nsr_version.operation)) leaf_name_data.push_back(nsr_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-rtr-thd-sched")
    {
        if(nsr_rtr_thd_sched != nullptr)
        {
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
        else
        {
            nsr_rtr_thd_sched = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched>();
            nsr_rtr_thd_sched->parent = this;
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
        return children.at("nsr-rtr-thd-sched");
    }

    if(child_yang_name == "nsr-thd-sched")
    {
        if(nsr_thd_sched != nullptr)
        {
            children["nsr-thd-sched"] = nsr_thd_sched;
        }
        else
        {
            nsr_thd_sched = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched>();
            nsr_thd_sched->parent = this;
            children["nsr-thd-sched"] = nsr_thd_sched;
        }
        return children.at("nsr-thd-sched");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::get_children()
{
    if(children.find("nsr-rtr-thd-sched") == children.end())
    {
        if(nsr_rtr_thd_sched != nullptr)
        {
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
    }

    if(children.find("nsr-thd-sched") == children.end())
    {
        if(nsr_thd_sched != nullptr)
        {
            children["nsr-thd-sched"] = nsr_thd_sched;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts = value;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes = value;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors = value;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails = value;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens = value;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state = value;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no = value;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count = value;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count = value;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid = value;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu = value;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count = value;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count = value;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid = value;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no = value;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid = value;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid = value;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version = value;
    }
    if(value_path == "nsr-rev")
    {
        nsr_rev = value;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant = value;
    }
    if(value_path == "nsr-version")
    {
        nsr_version = value;
    }
}


}
}

