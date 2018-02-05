
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_4.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::MplsteLinkBcBandwidth()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "mplste-link-bc-bandwidth"; yang_parent_name = "bctlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::~MplsteLinkBcBandwidth()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-bc-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    srlg_len{YType::uint32, "srlg-len"},
    num_srl_gs{YType::uint32, "num-srl-gs"}
{

    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_data())
            return true;
    }
    return srlg_len.is_set
	|| num_srl_gs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srlg_len.yfilter)
	|| ydk::is_set(num_srl_gs.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_len.is_set || is_set(srlg_len.yfilter)) leaf_name_data.push_back(srlg_len.get_name_leafdata());
    if (num_srl_gs.is_set || is_set(num_srl_gs.yfilter)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-srlg-data")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData>();
        c->parent = this;
        mplste_link_srlg_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplste_link_srlg_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-len")
    {
        srlg_len = value;
        srlg_len.value_namespace = name_space;
        srlg_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
        num_srl_gs.value_namespace = name_space;
        num_srl_gs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-len")
    {
        srlg_len.yfilter = yfilter;
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-srlg-data" || name == "srlg-len" || name == "num-srl-gs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::MplsteLinkSrlgData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mplste-link-srlg-data"; yang_parent_name = "srlgtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::~MplsteLinkSrlgData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-srlg-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    switching_cap{YType::uint8, "switching-cap"},
    rile_len_code{YType::uint8, "rile-len-code"},
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    return switching_cap.is_set
	|| rile_len_code.is_set
	|| fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(switching_cap.yfilter)
	|| ydk::is_set(rile_len_code.yfilter)
	|| ydk::is_set(fixed_scsi_count.yfilter)
	|| ydk::is_set(flex_scsi_count.yfilter)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap.is_set || is_set(switching_cap.yfilter)) leaf_name_data.push_back(switching_cap.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.yfilter)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.yfilter)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.yfilter)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type == nullptr)
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
        }
        return ixcd_switching_cap_type;
    }

    if(child_yang_name == "max-lspbw")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ixcd_switching_cap_type != nullptr)
    {
        children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
    }

    count = 0;
    for (auto const & c : max_lspbw)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switching-cap")
    {
        switching_cap = value;
        switching_cap.value_namespace = name_space;
        switching_cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
        rile_len_code.value_namespace = name_space;
        rile_len_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count = value;
        fixed_scsi_count.value_namespace = name_space;
        fixed_scsi_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count = value;
        flex_scsi_count.value_namespace = name_space;
        flex_scsi_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switching-cap")
    {
        switching_cap.yfilter = yfilter;
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code.yfilter = yfilter;
    }
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count.yfilter = yfilter;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcd-switching-cap-type" || name == "max-lspbw" || name == "switching-cap" || name == "rile-len-code" || name == "fixed-scsi-count" || name == "flex-scsi-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdpsc_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
	,ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
{
    ixcdpsc_info->parent = this;
    ixcdbw_sub_tlv->parent = this;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data())
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switching_cap_type.yfilter)
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation())
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.yfilter)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info == nullptr)
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
        }
        return ixcdpsc_info;
    }

    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv == nullptr)
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
        }
        return ixcdbw_sub_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ixcdpsc_info != nullptr)
    {
        children["ixcdpsc-info"] = ixcdpsc_info;
    }

    if(ixcdbw_sub_tlv != nullptr)
    {
        children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
        switching_cap_type.value_namespace = name_space;
        switching_cap_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcdpsc-info" || name == "ixcdbw-sub-tlv" || name == "switching-cap-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{

    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(min_lsp_bandwidth.yfilter)
	|| ydk::is_set(psc_interface_mtu.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.yfilter)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.yfilter)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth = value;
        min_lsp_bandwidth.value_namespace = name_space;
        min_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu = value;
        psc_interface_mtu.value_namespace = name_space;
        psc_interface_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-lsp-bandwidth" || name == "psc-interface-mtu")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{

    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arr-bw-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : arr_bw_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arr-bw-sub-tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"},
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_type.is_set
	|| bw_sub_tlv_length.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_sub_tlv_type.yfilter)
	|| ydk::is_set(bw_sub_tlv_length.yfilter)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.yfilter)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());
    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.yfilter)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value == nullptr)
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
        }
        return bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bw_sub_tlv_value != nullptr)
    {
        children["bw-sub-tlv-value"] = bw_sub_tlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
        bw_sub_tlv_type.value_namespace = name_space;
        bw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
        bw_sub_tlv_length.value_namespace = name_space;
        bw_sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-sub-tlv-value" || name == "bw-sub-tlv-type" || name == "bw-sub-tlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    flex_bw_sub_tlv_value->parent = this;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ixcdbw_sub_tlv_type.yfilter)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.yfilter)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value == nullptr)
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
        }
        return fixed_bw_sub_tlv_value;
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value == nullptr)
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
        }
        return flex_bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fixed_bw_sub_tlv_value != nullptr)
    {
        children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
    }

    if(flex_bw_sub_tlv_value != nullptr)
    {
        children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
        ixcdbw_sub_tlv_type.value_namespace = name_space;
        ixcdbw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-bw-sub-tlv-value" || name == "flex-bw-sub-tlv-value" || name == "ixcdbw-sub-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_data())
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value == nullptr)
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
        }
        return fixed_sub_tlv_value;
    }

    if(child_yang_name == "unres-oduj-prio")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio>();
        c->parent = this;
        unres_oduj_prio.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fixed_sub_tlv_value != nullptr)
    {
        children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
    }

    count = 0;
    for (auto const & c : unres_oduj_prio)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-sub-tlv-value" || name == "unres-oduj-prio")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    signal_type{YType::uint8, "signal-type"},
    num_stages{YType::uint8, "num-stages"},
    tbit{YType::uint8, "tbit"},
    sbit{YType::uint8, "sbit"},
    tsg{YType::uint8, "tsg"},
    res{YType::uint8, "res"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    stage{YType::str, "stage"}
{

    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return signal_type.is_set
	|| num_stages.is_set
	|| tbit.is_set
	|| sbit.is_set
	|| tsg.is_set
	|| res.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| stage.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(tsg.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(stage.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
        priority_bit0.value_namespace = name_space;
        priority_bit0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
        priority_bit1.value_namespace = name_space;
        priority_bit1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
        priority_bit2.value_namespace = name_space;
        priority_bit2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
        priority_bit3.value_namespace = name_space;
        priority_bit3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
        priority_bit4.value_namespace = name_space;
        priority_bit4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
        priority_bit5.value_namespace = name_space;
        priority_bit5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
        priority_bit6.value_namespace = name_space;
        priority_bit6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
        priority_bit7.value_namespace = name_space;
        priority_bit7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0.yfilter = yfilter;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1.yfilter = yfilter;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2.yfilter = yfilter;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3.yfilter = yfilter;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4.yfilter = yfilter;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5.yfilter = yfilter;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6.yfilter = yfilter;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-type" || name == "num-stages" || name == "tbit" || name == "sbit" || name == "tsg" || name == "res" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "stage")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::UnresOdujPrio()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unres-oduj-prio"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::~UnresOdujPrio()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-oduj-prio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common == nullptr)
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
        }
        return flex_sub_tlv_value_common;
    }

    if(child_yang_name == "unres-lspbw")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw>();
        c->parent = this;
        unres_lspbw.push_back(c);
        return c;
    }

    if(child_yang_name == "max-lspbw")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flex_sub_tlv_value_common != nullptr)
    {
        children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
    }

    count = 0;
    for (auto const & c : unres_lspbw)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : max_lspbw)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-sub-tlv-value-common" || name == "unres-lspbw" || name == "max-lspbw")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    signal_type{YType::uint8, "signal-type"},
    num_stages{YType::uint8, "num-stages"},
    tbit{YType::uint8, "tbit"},
    sbit{YType::uint8, "sbit"},
    tsg{YType::uint8, "tsg"},
    res{YType::uint8, "res"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    stage{YType::str, "stage"}
{

    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return signal_type.is_set
	|| num_stages.is_set
	|| tbit.is_set
	|| sbit.is_set
	|| tsg.is_set
	|| res.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| stage.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(tsg.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(stage.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
        priority_bit0.value_namespace = name_space;
        priority_bit0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
        priority_bit1.value_namespace = name_space;
        priority_bit1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
        priority_bit2.value_namespace = name_space;
        priority_bit2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
        priority_bit3.value_namespace = name_space;
        priority_bit3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
        priority_bit4.value_namespace = name_space;
        priority_bit4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
        priority_bit5.value_namespace = name_space;
        priority_bit5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
        priority_bit6.value_namespace = name_space;
        priority_bit6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
        priority_bit7.value_namespace = name_space;
        priority_bit7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0.yfilter = yfilter;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1.yfilter = yfilter;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2.yfilter = yfilter;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3.yfilter = yfilter;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4.yfilter = yfilter;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5.yfilter = yfilter;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6.yfilter = yfilter;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-type" || name == "num-stages" || name == "tbit" || name == "sbit" || name == "tsg" || name == "res" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "stage")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::UnresLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "unres-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::~UnresLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::int64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{

    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(uni_dir_delay.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.yfilter)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
        uni_dir_delay.value_namespace = name_space;
        uni_dir_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uni-dir-delay")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragments()
{

    yang_name = "mpls-te-fragments"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-fragment")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment>();
        c->parent = this;
        mpls_te_fragment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mpls_te_fragment)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-fragment")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment()
    :
    area_id{YType::int32, "area-id"},
    mpls_te_router_id{YType::str, "mpls-te-router-id"},
    mpls_te_enabled{YType::boolean, "mpls-te-enabled"},
    mpls_te_initialized{YType::boolean, "mpls-te-initialized"},
    mpls_te_area_id{YType::str, "mpls-te-area-id"},
    mpls_te_area_instance{YType::uint32, "mpls-te-area-instance"},
    mpls_te_router_address{YType::str, "mpls-te-router-address"},
    mpls_te_next_fragment_id{YType::uint32, "mpls-te-next-fragment-id"},
    spacious_fragment{YType::boolean, "spacious-fragment"}
{

    yang_name = "mpls-te-fragment"; yang_parent_name = "mpls-te-fragments"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::~MplsTeFragment()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::has_data() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| mpls_te_router_id.is_set
	|| mpls_te_enabled.is_set
	|| mpls_te_initialized.is_set
	|| mpls_te_area_id.is_set
	|| mpls_te_area_instance.is_set
	|| mpls_te_router_address.is_set
	|| mpls_te_next_fragment_id.is_set
	|| spacious_fragment.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_fragment.size(); index++)
    {
        if(mpls_te_fragment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(mpls_te_router_id.yfilter)
	|| ydk::is_set(mpls_te_enabled.yfilter)
	|| ydk::is_set(mpls_te_initialized.yfilter)
	|| ydk::is_set(mpls_te_area_id.yfilter)
	|| ydk::is_set(mpls_te_area_instance.yfilter)
	|| ydk::is_set(mpls_te_router_address.yfilter)
	|| ydk::is_set(mpls_te_next_fragment_id.yfilter)
	|| ydk::is_set(spacious_fragment.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragment" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (mpls_te_router_id.is_set || is_set(mpls_te_router_id.yfilter)) leaf_name_data.push_back(mpls_te_router_id.get_name_leafdata());
    if (mpls_te_enabled.is_set || is_set(mpls_te_enabled.yfilter)) leaf_name_data.push_back(mpls_te_enabled.get_name_leafdata());
    if (mpls_te_initialized.is_set || is_set(mpls_te_initialized.yfilter)) leaf_name_data.push_back(mpls_te_initialized.get_name_leafdata());
    if (mpls_te_area_id.is_set || is_set(mpls_te_area_id.yfilter)) leaf_name_data.push_back(mpls_te_area_id.get_name_leafdata());
    if (mpls_te_area_instance.is_set || is_set(mpls_te_area_instance.yfilter)) leaf_name_data.push_back(mpls_te_area_instance.get_name_leafdata());
    if (mpls_te_router_address.is_set || is_set(mpls_te_router_address.yfilter)) leaf_name_data.push_back(mpls_te_router_address.get_name_leafdata());
    if (mpls_te_next_fragment_id.is_set || is_set(mpls_te_next_fragment_id.yfilter)) leaf_name_data.push_back(mpls_te_next_fragment_id.get_name_leafdata());
    if (spacious_fragment.is_set || is_set(spacious_fragment.yfilter)) leaf_name_data.push_back(spacious_fragment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-link")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink>();
        c->parent = this;
        mpls_te_link.push_back(c);
        return c;
    }

    if(child_yang_name == "mpls-te-fragment")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_>();
        c->parent = this;
        mpls_te_fragment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : mpls_te_fragment)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-router-id")
    {
        mpls_te_router_id = value;
        mpls_te_router_id.value_namespace = name_space;
        mpls_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-enabled")
    {
        mpls_te_enabled = value;
        mpls_te_enabled.value_namespace = name_space;
        mpls_te_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-initialized")
    {
        mpls_te_initialized = value;
        mpls_te_initialized.value_namespace = name_space;
        mpls_te_initialized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-area-id")
    {
        mpls_te_area_id = value;
        mpls_te_area_id.value_namespace = name_space;
        mpls_te_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-area-instance")
    {
        mpls_te_area_instance = value;
        mpls_te_area_instance.value_namespace = name_space;
        mpls_te_area_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-router-address")
    {
        mpls_te_router_address = value;
        mpls_te_router_address.value_namespace = name_space;
        mpls_te_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-next-fragment-id")
    {
        mpls_te_next_fragment_id = value;
        mpls_te_next_fragment_id.value_namespace = name_space;
        mpls_te_next_fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spacious-fragment")
    {
        spacious_fragment = value;
        spacious_fragment.value_namespace = name_space;
        spacious_fragment.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "mpls-te-router-id")
    {
        mpls_te_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-te-enabled")
    {
        mpls_te_enabled.yfilter = yfilter;
    }
    if(value_path == "mpls-te-initialized")
    {
        mpls_te_initialized.yfilter = yfilter;
    }
    if(value_path == "mpls-te-area-id")
    {
        mpls_te_area_id.yfilter = yfilter;
    }
    if(value_path == "mpls-te-area-instance")
    {
        mpls_te_area_instance.yfilter = yfilter;
    }
    if(value_path == "mpls-te-router-address")
    {
        mpls_te_router_address.yfilter = yfilter;
    }
    if(value_path == "mpls-te-next-fragment-id")
    {
        mpls_te_next_fragment_id.yfilter = yfilter;
    }
    if(value_path == "spacious-fragment")
    {
        spacious_fragment.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-link" || name == "mpls-te-fragment" || name == "area-id" || name == "mpls-te-router-id" || name == "mpls-te-enabled" || name == "mpls-te-initialized" || name == "mpls-te-area-id" || name == "mpls-te-area-instance" || name == "mpls-te-router-address" || name == "mpls-te-next-fragment-id" || name == "spacious-fragment")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsTeLink()
    :
    new_link{YType::boolean, "new-link"},
    fragment_id{YType::uint32, "fragment-id"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    link_address{YType::str, "link-address"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    igp_metric{YType::uint32, "igp-metric"},
    te_metric{YType::uint32, "te-metric"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    priority_count{YType::int32, "priority-count"},
    affinity{YType::uint32, "affinity"},
    output_interface_id{YType::uint32, "output-interface-id"},
    input_interface_id{YType::uint32, "input-interface-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"}
    	,
    global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability>())
	,extended_admin_group_list(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList>())
{
    global_unreserve_bw_per_priority->parent = this;
    sub_pool_unreserve_bw_per_priority->parent = this;
    link_protocol_priority_capability->parent = this;
    link_sw_capability->parent = this;
    extended_admin_group_list->parent = this;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-fragment"; is_top_level_class = false; has_list_ancestor = true;
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
    return new_link.is_set
	|| fragment_id.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_system_id.is_set
	|| link_address.is_set
	|| neighbor_ip_address.is_set
	|| igp_metric.is_set
	|| te_metric.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| priority_count.is_set
	|| affinity.is_set
	|| output_interface_id.is_set
	|| input_interface_id.is_set
	|| dste_in_use.is_set
	|| dste_allocation_model_id.is_set
	|| number_of_optional_tl_vs.is_set
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(new_link.yfilter)
	|| ydk::is_set(fragment_id.yfilter)
	|| ydk::is_set(mpls_link_instance.yfilter)
	|| ydk::is_set(mpls_link_type.yfilter)
	|| ydk::is_set(neighbor_system_id.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(maximum_link_bw.yfilter)
	|| ydk::is_set(maximum_link_reservable_bw.yfilter)
	|| ydk::is_set(maximum_link_sub_reservable_bw.yfilter)
	|| ydk::is_set(priority_count.yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(output_interface_id.yfilter)
	|| ydk::is_set(input_interface_id.yfilter)
	|| ydk::is_set(dste_in_use.yfilter)
	|| ydk::is_set(dste_allocation_model_id.yfilter)
	|| ydk::is_set(number_of_optional_tl_vs.yfilter)
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_link.is_set || is_set(new_link.yfilter)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.yfilter)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.yfilter)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.yfilter)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.yfilter)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.yfilter)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.yfilter)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.yfilter)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.yfilter)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.yfilter)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.yfilter)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.yfilter)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority == nullptr)
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority>();
        }
        return global_unreserve_bw_per_priority;
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority == nullptr)
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority>();
        }
        return sub_pool_unreserve_bw_per_priority;
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability == nullptr)
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability>();
        }
        return link_protocol_priority_capability;
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability == nullptr)
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability>();
        }
        return link_sw_capability;
    }

    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list == nullptr)
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList>();
        }
        return extended_admin_group_list;
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global_unreserve_bw_per_priority != nullptr)
    {
        children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
    }

    if(sub_pool_unreserve_bw_per_priority != nullptr)
    {
        children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
    }

    if(link_protocol_priority_capability != nullptr)
    {
        children["link-protocol-priority-capability"] = link_protocol_priority_capability;
    }

    if(link_sw_capability != nullptr)
    {
        children["link-sw-capability"] = link_sw_capability;
    }

    if(extended_admin_group_list != nullptr)
    {
        children["extended-admin-group-list"] = extended_admin_group_list;
    }

    count = 0;
    for (auto const & c : mplste_link_opt_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "new-link")
    {
        new_link = value;
        new_link.value_namespace = name_space;
        new_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
        fragment_id.value_namespace = name_space;
        fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance = value;
        mpls_link_instance.value_namespace = name_space;
        mpls_link_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type = value;
        mpls_link_type.value_namespace = name_space;
        mpls_link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
        neighbor_system_id.value_namespace = name_space;
        neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw = value;
        maximum_link_bw.value_namespace = name_space;
        maximum_link_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw = value;
        maximum_link_reservable_bw.value_namespace = name_space;
        maximum_link_reservable_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw = value;
        maximum_link_sub_reservable_bw.value_namespace = name_space;
        maximum_link_sub_reservable_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
        priority_count.value_namespace = name_space;
        priority_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
        output_interface_id.value_namespace = name_space;
        output_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
        input_interface_id.value_namespace = name_space;
        input_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
        dste_in_use.value_namespace = name_space;
        dste_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
        dste_allocation_model_id.value_namespace = name_space;
        dste_allocation_model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
        number_of_optional_tl_vs.value_namespace = name_space;
        number_of_optional_tl_vs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "new-link")
    {
        new_link.yfilter = yfilter;
    }
    if(value_path == "fragment-id")
    {
        fragment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance.yfilter = yfilter;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw.yfilter = yfilter;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw.yfilter = yfilter;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw.yfilter = yfilter;
    }
    if(value_path == "priority-count")
    {
        priority_count.yfilter = yfilter;
    }
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id.yfilter = yfilter;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id.yfilter = yfilter;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use.yfilter = yfilter;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id.yfilter = yfilter;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-unreserve-bw-per-priority" || name == "sub-pool-unreserve-bw-per-priority" || name == "link-protocol-priority-capability" || name == "link-sw-capability" || name == "extended-admin-group-list" || name == "mplste-link-opt-tlv" || name == "new-link" || name == "fragment-id" || name == "mpls-link-instance" || name == "mpls-link-type" || name == "neighbor-system-id" || name == "link-address" || name == "neighbor-ip-address" || name == "igp-metric" || name == "te-metric" || name == "maximum-link-bw" || name == "maximum-link-reservable-bw" || name == "maximum-link-sub-reservable-bw" || name == "priority-count" || name == "affinity" || name == "output-interface-id" || name == "input-interface-id" || name == "dste-in-use" || name == "dste-allocation-model-id" || name == "number-of-optional-tl-vs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
{

    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bw_per_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "global-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
{

    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bw_per_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "sub-pool-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{

    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(link_protocol_capability.yfilter)
	|| ydk::is_set(link_protocol_priority.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.yfilter)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.yfilter)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability = value;
        link_protocol_capability.value_namespace = name_space;
        link_protocol_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority = value;
        link_protocol_priority.value_namespace = name_space;
        link_protocol_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability.yfilter = yfilter;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-protocol-capability" || name == "link-protocol-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::LinkSwCapability()
    :
    link_switching_capability{YType::uint8, "link-switching-capability"},
    link_encoding{YType::uint8, "link-encoding"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"},
    link_mtu{YType::uint16, "link-mtu"}
{

    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::has_data() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_data())
            return true;
    }
    return link_switching_capability.is_set
	|| link_encoding.is_set
	|| minimum_lsp_bw.is_set
	|| link_mtu.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::has_operation() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_switching_capability.yfilter)
	|| ydk::is_set(link_encoding.yfilter)
	|| ydk::is_set(minimum_lsp_bw.yfilter)
	|| ydk::is_set(link_mtu.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_switching_capability.is_set || is_set(link_switching_capability.yfilter)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (link_encoding.is_set || is_set(link_encoding.yfilter)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.yfilter)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.yfilter)) leaf_name_data.push_back(link_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-lsp-bw-per-priority")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority>();
        c->parent = this;
        maximum_lsp_bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : maximum_lsp_bw_per_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
        link_switching_capability.value_namespace = name_space;
        link_switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-encoding")
    {
        link_encoding = value;
        link_encoding.value_namespace = name_space;
        link_encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
        minimum_lsp_bw.value_namespace = name_space;
        minimum_lsp_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
        link_mtu.value_namespace = name_space;
        link_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-switching-capability")
    {
        link_switching_capability.yfilter = yfilter;
    }
    if(value_path == "link-encoding")
    {
        link_encoding.yfilter = yfilter;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw.yfilter = yfilter;
    }
    if(value_path == "link-mtu")
    {
        link_mtu.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-lsp-bw-per-priority" || name == "link-switching-capability" || name == "link-encoding" || name == "minimum-lsp-bw" || name == "link-mtu")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::MaximumLspBwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "maximum-lsp-bw-per-priority"; yang_parent_name = "link-sw-capability"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::~MaximumLspBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-lsp-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    extended_admin_size{YType::uint32, "extended-admin-size"}
{

    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::has_data() const
{
    for (std::size_t index=0; index<ext_admin_data.size(); index++)
    {
        if(ext_admin_data[index]->has_data())
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::has_operation() const
{
    for (std::size_t index=0; index<ext_admin_data.size(); index++)
    {
        if(ext_admin_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended_admin_size.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.yfilter)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-admin-data")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData>();
        c->parent = this;
        ext_admin_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ext_admin_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
        extended_admin_size.value_namespace = name_space;
        extended_admin_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-admin-size")
    {
        extended_admin_size.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-admin-data" || name == "extended-admin-size")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::ExtAdminData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "ext-admin-data"; yang_parent_name = "extended-admin-group-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::~ExtAdminData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-admin-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"},
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"}
{

    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return mplste_link_opt_tlv_type.is_set
	|| mplste_link_opt_tlv_len.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_type.yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_len.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());
    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
        mplste_link_opt_tlv_type.value_namespace = name_space;
        mplste_link_opt_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
        mplste_link_opt_tlv_len.value_namespace = name_space;
        mplste_link_opt_tlv_len.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type.yfilter = yfilter;
    }
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-opt-tlv-value" || name == "mplste-link-opt-tlv-type" || name == "mplste-link-opt-tlv-len")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    srlgtlv_value->parent = this;
    ixcdtlv_value->parent = this;
    unidtlv_value->parent = this;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_tlv_type.yfilter)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.yfilter)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value == nullptr)
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
        }
        return bctlv_value;
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value == nullptr)
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
        }
        return srlgtlv_value;
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value == nullptr)
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
        }
        return ixcdtlv_value;
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value == nullptr)
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
        }
        return unidtlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bctlv_value != nullptr)
    {
        children["bctlv-value"] = bctlv_value;
    }

    if(srlgtlv_value != nullptr)
    {
        children["srlgtlv-value"] = srlgtlv_value;
    }

    if(ixcdtlv_value != nullptr)
    {
        children["ixcdtlv-value"] = ixcdtlv_value;
    }

    if(unidtlv_value != nullptr)
    {
        children["unidtlv-value"] = unidtlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
        opaque_tlv_type.value_namespace = name_space;
        opaque_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bctlv-value" || name == "srlgtlv-value" || name == "ixcdtlv-value" || name == "unidtlv-value" || name == "opaque-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    num_b_cs{YType::uint32, "num-b-cs"}
{

    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_bc_bandwidth.size(); index++)
    {
        if(mplste_link_bc_bandwidth[index]->has_data())
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_bc_bandwidth.size(); index++)
    {
        if(mplste_link_bc_bandwidth[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(model_id.yfilter)
	|| ydk::is_set(num_b_cs.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.yfilter)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.yfilter)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-bc-bandwidth")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth>();
        c->parent = this;
        mplste_link_bc_bandwidth.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplste_link_bc_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "model-id")
    {
        model_id = value;
        model_id.value_namespace = name_space;
        model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs = value;
        num_b_cs.value_namespace = name_space;
        num_b_cs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "model-id")
    {
        model_id.yfilter = yfilter;
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-bc-bandwidth" || name == "model-id" || name == "num-b-cs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::MplsteLinkBcBandwidth()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "mplste-link-bc-bandwidth"; yang_parent_name = "bctlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::~MplsteLinkBcBandwidth()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-bc-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    srlg_len{YType::uint32, "srlg-len"},
    num_srl_gs{YType::uint32, "num-srl-gs"}
{

    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_data())
            return true;
    }
    return srlg_len.is_set
	|| num_srl_gs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srlg_len.yfilter)
	|| ydk::is_set(num_srl_gs.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_len.is_set || is_set(srlg_len.yfilter)) leaf_name_data.push_back(srlg_len.get_name_leafdata());
    if (num_srl_gs.is_set || is_set(num_srl_gs.yfilter)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-srlg-data")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData>();
        c->parent = this;
        mplste_link_srlg_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplste_link_srlg_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-len")
    {
        srlg_len = value;
        srlg_len.value_namespace = name_space;
        srlg_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
        num_srl_gs.value_namespace = name_space;
        num_srl_gs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-len")
    {
        srlg_len.yfilter = yfilter;
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-srlg-data" || name == "srlg-len" || name == "num-srl-gs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::MplsteLinkSrlgData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mplste-link-srlg-data"; yang_parent_name = "srlgtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::~MplsteLinkSrlgData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-srlg-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    switching_cap{YType::uint8, "switching-cap"},
    rile_len_code{YType::uint8, "rile-len-code"},
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    return switching_cap.is_set
	|| rile_len_code.is_set
	|| fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(switching_cap.yfilter)
	|| ydk::is_set(rile_len_code.yfilter)
	|| ydk::is_set(fixed_scsi_count.yfilter)
	|| ydk::is_set(flex_scsi_count.yfilter)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap.is_set || is_set(switching_cap.yfilter)) leaf_name_data.push_back(switching_cap.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.yfilter)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.yfilter)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.yfilter)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type == nullptr)
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
        }
        return ixcd_switching_cap_type;
    }

    if(child_yang_name == "max-lspbw")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ixcd_switching_cap_type != nullptr)
    {
        children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
    }

    count = 0;
    for (auto const & c : max_lspbw)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switching-cap")
    {
        switching_cap = value;
        switching_cap.value_namespace = name_space;
        switching_cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
        rile_len_code.value_namespace = name_space;
        rile_len_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count = value;
        fixed_scsi_count.value_namespace = name_space;
        fixed_scsi_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count = value;
        flex_scsi_count.value_namespace = name_space;
        flex_scsi_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switching-cap")
    {
        switching_cap.yfilter = yfilter;
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code.yfilter = yfilter;
    }
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count.yfilter = yfilter;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcd-switching-cap-type" || name == "max-lspbw" || name == "switching-cap" || name == "rile-len-code" || name == "fixed-scsi-count" || name == "flex-scsi-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdpsc_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
	,ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
{
    ixcdpsc_info->parent = this;
    ixcdbw_sub_tlv->parent = this;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data())
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switching_cap_type.yfilter)
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation())
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.yfilter)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info == nullptr)
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
        }
        return ixcdpsc_info;
    }

    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv == nullptr)
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
        }
        return ixcdbw_sub_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ixcdpsc_info != nullptr)
    {
        children["ixcdpsc-info"] = ixcdpsc_info;
    }

    if(ixcdbw_sub_tlv != nullptr)
    {
        children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
        switching_cap_type.value_namespace = name_space;
        switching_cap_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcdpsc-info" || name == "ixcdbw-sub-tlv" || name == "switching-cap-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{

    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(min_lsp_bandwidth.yfilter)
	|| ydk::is_set(psc_interface_mtu.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.yfilter)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.yfilter)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth = value;
        min_lsp_bandwidth.value_namespace = name_space;
        min_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu = value;
        psc_interface_mtu.value_namespace = name_space;
        psc_interface_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-lsp-bandwidth" || name == "psc-interface-mtu")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{

    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arr-bw-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : arr_bw_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arr-bw-sub-tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"},
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_type.is_set
	|| bw_sub_tlv_length.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_sub_tlv_type.yfilter)
	|| ydk::is_set(bw_sub_tlv_length.yfilter)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.yfilter)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());
    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.yfilter)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value == nullptr)
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
        }
        return bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bw_sub_tlv_value != nullptr)
    {
        children["bw-sub-tlv-value"] = bw_sub_tlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
        bw_sub_tlv_type.value_namespace = name_space;
        bw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
        bw_sub_tlv_length.value_namespace = name_space;
        bw_sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-sub-tlv-value" || name == "bw-sub-tlv-type" || name == "bw-sub-tlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    flex_bw_sub_tlv_value->parent = this;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ixcdbw_sub_tlv_type.yfilter)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.yfilter)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value == nullptr)
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
        }
        return fixed_bw_sub_tlv_value;
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value == nullptr)
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
        }
        return flex_bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fixed_bw_sub_tlv_value != nullptr)
    {
        children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
    }

    if(flex_bw_sub_tlv_value != nullptr)
    {
        children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
        ixcdbw_sub_tlv_type.value_namespace = name_space;
        ixcdbw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-bw-sub-tlv-value" || name == "flex-bw-sub-tlv-value" || name == "ixcdbw-sub-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_data())
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value == nullptr)
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
        }
        return fixed_sub_tlv_value;
    }

    if(child_yang_name == "unres-oduj-prio")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio>();
        c->parent = this;
        unres_oduj_prio.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fixed_sub_tlv_value != nullptr)
    {
        children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
    }

    count = 0;
    for (auto const & c : unres_oduj_prio)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-sub-tlv-value" || name == "unres-oduj-prio")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    signal_type{YType::uint8, "signal-type"},
    num_stages{YType::uint8, "num-stages"},
    tbit{YType::uint8, "tbit"},
    sbit{YType::uint8, "sbit"},
    tsg{YType::uint8, "tsg"},
    res{YType::uint8, "res"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    stage{YType::str, "stage"}
{

    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return signal_type.is_set
	|| num_stages.is_set
	|| tbit.is_set
	|| sbit.is_set
	|| tsg.is_set
	|| res.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| stage.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(tsg.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(stage.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
        priority_bit0.value_namespace = name_space;
        priority_bit0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
        priority_bit1.value_namespace = name_space;
        priority_bit1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
        priority_bit2.value_namespace = name_space;
        priority_bit2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
        priority_bit3.value_namespace = name_space;
        priority_bit3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
        priority_bit4.value_namespace = name_space;
        priority_bit4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
        priority_bit5.value_namespace = name_space;
        priority_bit5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
        priority_bit6.value_namespace = name_space;
        priority_bit6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
        priority_bit7.value_namespace = name_space;
        priority_bit7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0.yfilter = yfilter;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1.yfilter = yfilter;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2.yfilter = yfilter;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3.yfilter = yfilter;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4.yfilter = yfilter;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5.yfilter = yfilter;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6.yfilter = yfilter;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-type" || name == "num-stages" || name == "tbit" || name == "sbit" || name == "tsg" || name == "res" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "stage")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::UnresOdujPrio()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unres-oduj-prio"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::~UnresOdujPrio()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-oduj-prio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common == nullptr)
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
        }
        return flex_sub_tlv_value_common;
    }

    if(child_yang_name == "unres-lspbw")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw>();
        c->parent = this;
        unres_lspbw.push_back(c);
        return c;
    }

    if(child_yang_name == "max-lspbw")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flex_sub_tlv_value_common != nullptr)
    {
        children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
    }

    count = 0;
    for (auto const & c : unres_lspbw)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : max_lspbw)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-sub-tlv-value-common" || name == "unres-lspbw" || name == "max-lspbw")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    signal_type{YType::uint8, "signal-type"},
    num_stages{YType::uint8, "num-stages"},
    tbit{YType::uint8, "tbit"},
    sbit{YType::uint8, "sbit"},
    tsg{YType::uint8, "tsg"},
    res{YType::uint8, "res"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    stage{YType::str, "stage"}
{

    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return signal_type.is_set
	|| num_stages.is_set
	|| tbit.is_set
	|| sbit.is_set
	|| tsg.is_set
	|| res.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| stage.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(tsg.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(stage.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
        priority_bit0.value_namespace = name_space;
        priority_bit0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
        priority_bit1.value_namespace = name_space;
        priority_bit1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
        priority_bit2.value_namespace = name_space;
        priority_bit2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
        priority_bit3.value_namespace = name_space;
        priority_bit3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
        priority_bit4.value_namespace = name_space;
        priority_bit4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
        priority_bit5.value_namespace = name_space;
        priority_bit5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
        priority_bit6.value_namespace = name_space;
        priority_bit6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
        priority_bit7.value_namespace = name_space;
        priority_bit7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0.yfilter = yfilter;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1.yfilter = yfilter;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2.yfilter = yfilter;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3.yfilter = yfilter;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4.yfilter = yfilter;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5.yfilter = yfilter;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6.yfilter = yfilter;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-type" || name == "num-stages" || name == "tbit" || name == "sbit" || name == "tsg" || name == "res" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "stage")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::UnresLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "unres-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::~UnresLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::int64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{

    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(uni_dir_delay.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.yfilter)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
        uni_dir_delay.value_namespace = name_space;
        uni_dir_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uni-dir-delay")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeFragment_()
    :
    fragment_instance{YType::uint32, "fragment-instance"},
    fragment_id{YType::uint32, "fragment-id"},
    dste_model_id{YType::uint8, "dste-model-id"},
    same_fragment_count{YType::uint8, "same-fragment-count"}
{

    yang_name = "mpls-te-fragment"; yang_parent_name = "mpls-te-fragment"; is_top_level_class = false; has_list_ancestor = true;
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
    return fragment_instance.is_set
	|| fragment_id.is_set
	|| dste_model_id.is_set
	|| same_fragment_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_link.size(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fragment_instance.yfilter)
	|| ydk::is_set(fragment_id.yfilter)
	|| ydk::is_set(dste_model_id.yfilter)
	|| ydk::is_set(same_fragment_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-fragment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fragment_instance.is_set || is_set(fragment_instance.yfilter)) leaf_name_data.push_back(fragment_instance.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.yfilter)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (dste_model_id.is_set || is_set(dste_model_id.yfilter)) leaf_name_data.push_back(dste_model_id.get_name_leafdata());
    if (same_fragment_count.is_set || is_set(same_fragment_count.yfilter)) leaf_name_data.push_back(same_fragment_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-link")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink>();
        c->parent = this;
        mpls_te_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mpls_te_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fragment-instance")
    {
        fragment_instance = value;
        fragment_instance.value_namespace = name_space;
        fragment_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
        fragment_id.value_namespace = name_space;
        fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-model-id")
    {
        dste_model_id = value;
        dste_model_id.value_namespace = name_space;
        dste_model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "same-fragment-count")
    {
        same_fragment_count = value;
        same_fragment_count.value_namespace = name_space;
        same_fragment_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fragment-instance")
    {
        fragment_instance.yfilter = yfilter;
    }
    if(value_path == "fragment-id")
    {
        fragment_id.yfilter = yfilter;
    }
    if(value_path == "dste-model-id")
    {
        dste_model_id.yfilter = yfilter;
    }
    if(value_path == "same-fragment-count")
    {
        same_fragment_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-link" || name == "fragment-instance" || name == "fragment-id" || name == "dste-model-id" || name == "same-fragment-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsTeLink()
    :
    new_link{YType::boolean, "new-link"},
    fragment_id{YType::uint32, "fragment-id"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    link_address{YType::str, "link-address"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    igp_metric{YType::uint32, "igp-metric"},
    te_metric{YType::uint32, "te-metric"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    priority_count{YType::int32, "priority-count"},
    affinity{YType::uint32, "affinity"},
    output_interface_id{YType::uint32, "output-interface-id"},
    input_interface_id{YType::uint32, "input-interface-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"}
    	,
    global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority>())
	,sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority>())
	,link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability>())
	,link_sw_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability>())
	,extended_admin_group_list(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList>())
{
    global_unreserve_bw_per_priority->parent = this;
    sub_pool_unreserve_bw_per_priority->parent = this;
    link_protocol_priority_capability->parent = this;
    link_sw_capability->parent = this;
    extended_admin_group_list->parent = this;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-fragment"; is_top_level_class = false; has_list_ancestor = true;
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
    return new_link.is_set
	|| fragment_id.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_system_id.is_set
	|| link_address.is_set
	|| neighbor_ip_address.is_set
	|| igp_metric.is_set
	|| te_metric.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| priority_count.is_set
	|| affinity.is_set
	|| output_interface_id.is_set
	|| input_interface_id.is_set
	|| dste_in_use.is_set
	|| dste_allocation_model_id.is_set
	|| number_of_optional_tl_vs.is_set
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.size(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(new_link.yfilter)
	|| ydk::is_set(fragment_id.yfilter)
	|| ydk::is_set(mpls_link_instance.yfilter)
	|| ydk::is_set(mpls_link_type.yfilter)
	|| ydk::is_set(neighbor_system_id.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(maximum_link_bw.yfilter)
	|| ydk::is_set(maximum_link_reservable_bw.yfilter)
	|| ydk::is_set(maximum_link_sub_reservable_bw.yfilter)
	|| ydk::is_set(priority_count.yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(output_interface_id.yfilter)
	|| ydk::is_set(input_interface_id.yfilter)
	|| ydk::is_set(dste_in_use.yfilter)
	|| ydk::is_set(dste_allocation_model_id.yfilter)
	|| ydk::is_set(number_of_optional_tl_vs.yfilter)
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_link.is_set || is_set(new_link.yfilter)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.yfilter)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.yfilter)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.yfilter)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.yfilter)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.yfilter)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.yfilter)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.yfilter)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.yfilter)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.yfilter)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.yfilter)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.yfilter)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority == nullptr)
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority>();
        }
        return global_unreserve_bw_per_priority;
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority == nullptr)
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority>();
        }
        return sub_pool_unreserve_bw_per_priority;
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability == nullptr)
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability>();
        }
        return link_protocol_priority_capability;
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability == nullptr)
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability>();
        }
        return link_sw_capability;
    }

    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list == nullptr)
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList>();
        }
        return extended_admin_group_list;
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv>();
        c->parent = this;
        mplste_link_opt_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global_unreserve_bw_per_priority != nullptr)
    {
        children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
    }

    if(sub_pool_unreserve_bw_per_priority != nullptr)
    {
        children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
    }

    if(link_protocol_priority_capability != nullptr)
    {
        children["link-protocol-priority-capability"] = link_protocol_priority_capability;
    }

    if(link_sw_capability != nullptr)
    {
        children["link-sw-capability"] = link_sw_capability;
    }

    if(extended_admin_group_list != nullptr)
    {
        children["extended-admin-group-list"] = extended_admin_group_list;
    }

    count = 0;
    for (auto const & c : mplste_link_opt_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "new-link")
    {
        new_link = value;
        new_link.value_namespace = name_space;
        new_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
        fragment_id.value_namespace = name_space;
        fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance = value;
        mpls_link_instance.value_namespace = name_space;
        mpls_link_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type = value;
        mpls_link_type.value_namespace = name_space;
        mpls_link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
        neighbor_system_id.value_namespace = name_space;
        neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw = value;
        maximum_link_bw.value_namespace = name_space;
        maximum_link_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw = value;
        maximum_link_reservable_bw.value_namespace = name_space;
        maximum_link_reservable_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw = value;
        maximum_link_sub_reservable_bw.value_namespace = name_space;
        maximum_link_sub_reservable_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
        priority_count.value_namespace = name_space;
        priority_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
        output_interface_id.value_namespace = name_space;
        output_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
        input_interface_id.value_namespace = name_space;
        input_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
        dste_in_use.value_namespace = name_space;
        dste_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
        dste_allocation_model_id.value_namespace = name_space;
        dste_allocation_model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
        number_of_optional_tl_vs.value_namespace = name_space;
        number_of_optional_tl_vs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "new-link")
    {
        new_link.yfilter = yfilter;
    }
    if(value_path == "fragment-id")
    {
        fragment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance.yfilter = yfilter;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw.yfilter = yfilter;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw.yfilter = yfilter;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw.yfilter = yfilter;
    }
    if(value_path == "priority-count")
    {
        priority_count.yfilter = yfilter;
    }
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id.yfilter = yfilter;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id.yfilter = yfilter;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use.yfilter = yfilter;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id.yfilter = yfilter;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-unreserve-bw-per-priority" || name == "sub-pool-unreserve-bw-per-priority" || name == "link-protocol-priority-capability" || name == "link-sw-capability" || name == "extended-admin-group-list" || name == "mplste-link-opt-tlv" || name == "new-link" || name == "fragment-id" || name == "mpls-link-instance" || name == "mpls-link-type" || name == "neighbor-system-id" || name == "link-address" || name == "neighbor-ip-address" || name == "igp-metric" || name == "te-metric" || name == "maximum-link-bw" || name == "maximum-link-reservable-bw" || name == "maximum-link-sub-reservable-bw" || name == "priority-count" || name == "affinity" || name == "output-interface-id" || name == "input-interface-id" || name == "dste-in-use" || name == "dste-allocation-model-id" || name == "number-of-optional-tl-vs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
{

    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bw_per_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "global-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
{

    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::has_data() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.size(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority>();
        c->parent = this;
        bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bw_per_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "sub-pool-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::LinkProtocolPriorityCapability()
    :
    link_protocol_capability{YType::uint8, "link-protocol-capability"},
    link_protocol_priority{YType::uint8, "link-protocol-priority"}
{

    yang_name = "link-protocol-priority-capability"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(link_protocol_capability.yfilter)
	|| ydk::is_set(link_protocol_priority.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protocol-priority-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_protocol_capability.is_set || is_set(link_protocol_capability.yfilter)) leaf_name_data.push_back(link_protocol_capability.get_name_leafdata());
    if (link_protocol_priority.is_set || is_set(link_protocol_priority.yfilter)) leaf_name_data.push_back(link_protocol_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability = value;
        link_protocol_capability.value_namespace = name_space;
        link_protocol_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority = value;
        link_protocol_priority.value_namespace = name_space;
        link_protocol_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-protocol-capability")
    {
        link_protocol_capability.yfilter = yfilter;
    }
    if(value_path == "link-protocol-priority")
    {
        link_protocol_priority.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-protocol-capability" || name == "link-protocol-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::LinkSwCapability()
    :
    link_switching_capability{YType::uint8, "link-switching-capability"},
    link_encoding{YType::uint8, "link-encoding"},
    minimum_lsp_bw{YType::uint64, "minimum-lsp-bw"},
    link_mtu{YType::uint16, "link-mtu"}
{

    yang_name = "link-sw-capability"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::~LinkSwCapability()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::has_data() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_data())
            return true;
    }
    return link_switching_capability.is_set
	|| link_encoding.is_set
	|| minimum_lsp_bw.is_set
	|| link_mtu.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::has_operation() const
{
    for (std::size_t index=0; index<maximum_lsp_bw_per_priority.size(); index++)
    {
        if(maximum_lsp_bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_switching_capability.yfilter)
	|| ydk::is_set(link_encoding.yfilter)
	|| ydk::is_set(minimum_lsp_bw.yfilter)
	|| ydk::is_set(link_mtu.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-sw-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_switching_capability.is_set || is_set(link_switching_capability.yfilter)) leaf_name_data.push_back(link_switching_capability.get_name_leafdata());
    if (link_encoding.is_set || is_set(link_encoding.yfilter)) leaf_name_data.push_back(link_encoding.get_name_leafdata());
    if (minimum_lsp_bw.is_set || is_set(minimum_lsp_bw.yfilter)) leaf_name_data.push_back(minimum_lsp_bw.get_name_leafdata());
    if (link_mtu.is_set || is_set(link_mtu.yfilter)) leaf_name_data.push_back(link_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-lsp-bw-per-priority")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority>();
        c->parent = this;
        maximum_lsp_bw_per_priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : maximum_lsp_bw_per_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-switching-capability")
    {
        link_switching_capability = value;
        link_switching_capability.value_namespace = name_space;
        link_switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-encoding")
    {
        link_encoding = value;
        link_encoding.value_namespace = name_space;
        link_encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw = value;
        minimum_lsp_bw.value_namespace = name_space;
        minimum_lsp_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-mtu")
    {
        link_mtu = value;
        link_mtu.value_namespace = name_space;
        link_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-switching-capability")
    {
        link_switching_capability.yfilter = yfilter;
    }
    if(value_path == "link-encoding")
    {
        link_encoding.yfilter = yfilter;
    }
    if(value_path == "minimum-lsp-bw")
    {
        minimum_lsp_bw.yfilter = yfilter;
    }
    if(value_path == "link-mtu")
    {
        link_mtu.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-lsp-bw-per-priority" || name == "link-switching-capability" || name == "link-encoding" || name == "minimum-lsp-bw" || name == "link-mtu")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::MaximumLspBwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "maximum-lsp-bw-per-priority"; yang_parent_name = "link-sw-capability"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::~MaximumLspBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-lsp-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtendedAdminGroupList()
    :
    extended_admin_size{YType::uint32, "extended-admin-size"}
{

    yang_name = "extended-admin-group-list"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::~ExtendedAdminGroupList()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::has_data() const
{
    for (std::size_t index=0; index<ext_admin_data.size(); index++)
    {
        if(ext_admin_data[index]->has_data())
            return true;
    }
    return extended_admin_size.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::has_operation() const
{
    for (std::size_t index=0; index<ext_admin_data.size(); index++)
    {
        if(ext_admin_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended_admin_size.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_admin_size.is_set || is_set(extended_admin_size.yfilter)) leaf_name_data.push_back(extended_admin_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ext-admin-data")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData>();
        c->parent = this;
        ext_admin_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ext_admin_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-admin-size")
    {
        extended_admin_size = value;
        extended_admin_size.value_namespace = name_space;
        extended_admin_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-admin-size")
    {
        extended_admin_size.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ext-admin-data" || name == "extended-admin-size")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::ExtAdminData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "ext-admin-data"; yang_parent_name = "extended-admin-group-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::~ExtAdminData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-admin-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlv()
    :
    mplste_link_opt_tlv_type{YType::enumeration, "mplste-link-opt-tlv-type"},
    mplste_link_opt_tlv_len{YType::uint16, "mplste-link-opt-tlv-len"}
{

    yang_name = "mplste-link-opt-tlv"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return mplste_link_opt_tlv_type.is_set
	|| mplste_link_opt_tlv_len.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv_value.size(); index++)
    {
        if(mplste_link_opt_tlv_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_type.yfilter)
	|| ydk::is_set(mplste_link_opt_tlv_len.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplste_link_opt_tlv_type.is_set || is_set(mplste_link_opt_tlv_type.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_type.get_name_leafdata());
    if (mplste_link_opt_tlv_len.is_set || is_set(mplste_link_opt_tlv_len.yfilter)) leaf_name_data.push_back(mplste_link_opt_tlv_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-opt-tlv-value")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue>();
        c->parent = this;
        mplste_link_opt_tlv_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplste_link_opt_tlv_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type = value;
        mplste_link_opt_tlv_type.value_namespace = name_space;
        mplste_link_opt_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len = value;
        mplste_link_opt_tlv_len.value_namespace = name_space;
        mplste_link_opt_tlv_len.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplste-link-opt-tlv-type")
    {
        mplste_link_opt_tlv_type.yfilter = yfilter;
    }
    if(value_path == "mplste-link-opt-tlv-len")
    {
        mplste_link_opt_tlv_len.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-opt-tlv-value" || name == "mplste-link-opt-tlv-type" || name == "mplste-link-opt-tlv-len")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::MplsteLinkOptTlvValue()
    :
    opaque_tlv_type{YType::enumeration, "opaque-tlv-type"}
    	,
    bctlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>())
	,srlgtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>())
	,ixcdtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>())
	,unidtlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>())
{
    bctlv_value->parent = this;
    srlgtlv_value->parent = this;
    ixcdtlv_value->parent = this;
    unidtlv_value->parent = this;

    yang_name = "mplste-link-opt-tlv-value"; yang_parent_name = "mplste-link-opt-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::~MplsteLinkOptTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_data() const
{
    return opaque_tlv_type.is_set
	|| (bctlv_value !=  nullptr && bctlv_value->has_data())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_data())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_data())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_tlv_type.yfilter)
	|| (bctlv_value !=  nullptr && bctlv_value->has_operation())
	|| (srlgtlv_value !=  nullptr && srlgtlv_value->has_operation())
	|| (ixcdtlv_value !=  nullptr && ixcdtlv_value->has_operation())
	|| (unidtlv_value !=  nullptr && unidtlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-opt-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_tlv_type.is_set || is_set(opaque_tlv_type.yfilter)) leaf_name_data.push_back(opaque_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bctlv-value")
    {
        if(bctlv_value == nullptr)
        {
            bctlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue>();
        }
        return bctlv_value;
    }

    if(child_yang_name == "srlgtlv-value")
    {
        if(srlgtlv_value == nullptr)
        {
            srlgtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue>();
        }
        return srlgtlv_value;
    }

    if(child_yang_name == "ixcdtlv-value")
    {
        if(ixcdtlv_value == nullptr)
        {
            ixcdtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue>();
        }
        return ixcdtlv_value;
    }

    if(child_yang_name == "unidtlv-value")
    {
        if(unidtlv_value == nullptr)
        {
            unidtlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue>();
        }
        return unidtlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bctlv_value != nullptr)
    {
        children["bctlv-value"] = bctlv_value;
    }

    if(srlgtlv_value != nullptr)
    {
        children["srlgtlv-value"] = srlgtlv_value;
    }

    if(ixcdtlv_value != nullptr)
    {
        children["ixcdtlv-value"] = ixcdtlv_value;
    }

    if(unidtlv_value != nullptr)
    {
        children["unidtlv-value"] = unidtlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type = value;
        opaque_tlv_type.value_namespace = name_space;
        opaque_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-tlv-type")
    {
        opaque_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bctlv-value" || name == "srlgtlv-value" || name == "ixcdtlv-value" || name == "unidtlv-value" || name == "opaque-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::BctlvValue()
    :
    model_id{YType::uint8, "model-id"},
    num_b_cs{YType::uint32, "num-b-cs"}
{

    yang_name = "bctlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::~BctlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_bc_bandwidth.size(); index++)
    {
        if(mplste_link_bc_bandwidth[index]->has_data())
            return true;
    }
    return model_id.is_set
	|| num_b_cs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_bc_bandwidth.size(); index++)
    {
        if(mplste_link_bc_bandwidth[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(model_id.yfilter)
	|| ydk::is_set(num_b_cs.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bctlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.yfilter)) leaf_name_data.push_back(model_id.get_name_leafdata());
    if (num_b_cs.is_set || is_set(num_b_cs.yfilter)) leaf_name_data.push_back(num_b_cs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-bc-bandwidth")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth>();
        c->parent = this;
        mplste_link_bc_bandwidth.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplste_link_bc_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "model-id")
    {
        model_id = value;
        model_id.value_namespace = name_space;
        model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs = value;
        num_b_cs.value_namespace = name_space;
        num_b_cs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "model-id")
    {
        model_id.yfilter = yfilter;
    }
    if(value_path == "num-b-cs")
    {
        num_b_cs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-bc-bandwidth" || name == "model-id" || name == "num-b-cs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::MplsteLinkBcBandwidth()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "mplste-link-bc-bandwidth"; yang_parent_name = "bctlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::~MplsteLinkBcBandwidth()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-bc-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::SrlgtlvValue()
    :
    srlg_len{YType::uint32, "srlg-len"},
    num_srl_gs{YType::uint32, "num-srl-gs"}
{

    yang_name = "srlgtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::~SrlgtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_data() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_data())
            return true;
    }
    return srlg_len.is_set
	|| num_srl_gs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_srlg_data.size(); index++)
    {
        if(mplste_link_srlg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srlg_len.yfilter)
	|| ydk::is_set(num_srl_gs.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_len.is_set || is_set(srlg_len.yfilter)) leaf_name_data.push_back(srlg_len.get_name_leafdata());
    if (num_srl_gs.is_set || is_set(num_srl_gs.yfilter)) leaf_name_data.push_back(num_srl_gs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplste-link-srlg-data")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData>();
        c->parent = this;
        mplste_link_srlg_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplste_link_srlg_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-len")
    {
        srlg_len = value;
        srlg_len.value_namespace = name_space;
        srlg_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs = value;
        num_srl_gs.value_namespace = name_space;
        num_srl_gs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-len")
    {
        srlg_len.yfilter = yfilter;
    }
    if(value_path == "num-srl-gs")
    {
        num_srl_gs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplste-link-srlg-data" || name == "srlg-len" || name == "num-srl-gs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::MplsteLinkSrlgData()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mplste-link-srlg-data"; yang_parent_name = "srlgtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::~MplsteLinkSrlgData()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplste-link-srlg-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdtlvValue()
    :
    switching_cap{YType::uint8, "switching-cap"},
    rile_len_code{YType::uint8, "rile-len-code"},
    fixed_scsi_count{YType::uint32, "fixed-scsi-count"},
    flex_scsi_count{YType::uint32, "flex-scsi-count"}
    	,
    ixcd_switching_cap_type(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>())
{
    ixcd_switching_cap_type->parent = this;

    yang_name = "ixcdtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::~IxcdtlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_data() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    return switching_cap.is_set
	|| rile_len_code.is_set
	|| fixed_scsi_count.is_set
	|| flex_scsi_count.is_set
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_operation() const
{
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(switching_cap.yfilter)
	|| ydk::is_set(rile_len_code.yfilter)
	|| ydk::is_set(fixed_scsi_count.yfilter)
	|| ydk::is_set(flex_scsi_count.yfilter)
	|| (ixcd_switching_cap_type !=  nullptr && ixcd_switching_cap_type->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap.is_set || is_set(switching_cap.yfilter)) leaf_name_data.push_back(switching_cap.get_name_leafdata());
    if (rile_len_code.is_set || is_set(rile_len_code.yfilter)) leaf_name_data.push_back(rile_len_code.get_name_leafdata());
    if (fixed_scsi_count.is_set || is_set(fixed_scsi_count.yfilter)) leaf_name_data.push_back(fixed_scsi_count.get_name_leafdata());
    if (flex_scsi_count.is_set || is_set(flex_scsi_count.yfilter)) leaf_name_data.push_back(flex_scsi_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcd-switching-cap-type")
    {
        if(ixcd_switching_cap_type == nullptr)
        {
            ixcd_switching_cap_type = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType>();
        }
        return ixcd_switching_cap_type;
    }

    if(child_yang_name == "max-lspbw")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ixcd_switching_cap_type != nullptr)
    {
        children["ixcd-switching-cap-type"] = ixcd_switching_cap_type;
    }

    count = 0;
    for (auto const & c : max_lspbw)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switching-cap")
    {
        switching_cap = value;
        switching_cap.value_namespace = name_space;
        switching_cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code = value;
        rile_len_code.value_namespace = name_space;
        rile_len_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count = value;
        fixed_scsi_count.value_namespace = name_space;
        fixed_scsi_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count = value;
        flex_scsi_count.value_namespace = name_space;
        flex_scsi_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switching-cap")
    {
        switching_cap.yfilter = yfilter;
    }
    if(value_path == "rile-len-code")
    {
        rile_len_code.yfilter = yfilter;
    }
    if(value_path == "fixed-scsi-count")
    {
        fixed_scsi_count.yfilter = yfilter;
    }
    if(value_path == "flex-scsi-count")
    {
        flex_scsi_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcd-switching-cap-type" || name == "max-lspbw" || name == "switching-cap" || name == "rile-len-code" || name == "fixed-scsi-count" || name == "flex-scsi-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdSwitchingCapType()
    :
    switching_cap_type{YType::uint8, "switching-cap-type"}
    	,
    ixcdpsc_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>())
	,ixcdbw_sub_tlv(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>())
{
    ixcdpsc_info->parent = this;
    ixcdbw_sub_tlv->parent = this;

    yang_name = "ixcd-switching-cap-type"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::~IxcdSwitchingCapType()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_data() const
{
    return switching_cap_type.is_set
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_data())
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switching_cap_type.yfilter)
	|| (ixcdpsc_info !=  nullptr && ixcdpsc_info->has_operation())
	|| (ixcdbw_sub_tlv !=  nullptr && ixcdbw_sub_tlv->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcd-switching-cap-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_cap_type.is_set || is_set(switching_cap_type.yfilter)) leaf_name_data.push_back(switching_cap_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ixcdpsc-info")
    {
        if(ixcdpsc_info == nullptr)
        {
            ixcdpsc_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo>();
        }
        return ixcdpsc_info;
    }

    if(child_yang_name == "ixcdbw-sub-tlv")
    {
        if(ixcdbw_sub_tlv == nullptr)
        {
            ixcdbw_sub_tlv = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv>();
        }
        return ixcdbw_sub_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ixcdpsc_info != nullptr)
    {
        children["ixcdpsc-info"] = ixcdpsc_info;
    }

    if(ixcdbw_sub_tlv != nullptr)
    {
        children["ixcdbw-sub-tlv"] = ixcdbw_sub_tlv;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type = value;
        switching_cap_type.value_namespace = name_space;
        switching_cap_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switching-cap-type")
    {
        switching_cap_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ixcdpsc-info" || name == "ixcdbw-sub-tlv" || name == "switching-cap-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::IxcdpscInfo()
    :
    min_lsp_bandwidth{YType::uint64, "min-lsp-bandwidth"},
    psc_interface_mtu{YType::uint16, "psc-interface-mtu"}
{

    yang_name = "ixcdpsc-info"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(min_lsp_bandwidth.yfilter)
	|| ydk::is_set(psc_interface_mtu.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdpsc-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_lsp_bandwidth.is_set || is_set(min_lsp_bandwidth.yfilter)) leaf_name_data.push_back(min_lsp_bandwidth.get_name_leafdata());
    if (psc_interface_mtu.is_set || is_set(psc_interface_mtu.yfilter)) leaf_name_data.push_back(psc_interface_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth = value;
        min_lsp_bandwidth.value_namespace = name_space;
        min_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu = value;
        psc_interface_mtu.value_namespace = name_space;
        psc_interface_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-lsp-bandwidth")
    {
        min_lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "psc-interface-mtu")
    {
        psc_interface_mtu.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-lsp-bandwidth" || name == "psc-interface-mtu")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::IxcdbwSubTlv()
{

    yang_name = "ixcdbw-sub-tlv"; yang_parent_name = "ixcd-switching-cap-type"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ixcdbw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arr-bw-sub-tlv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv>();
        c->parent = this;
        arr_bw_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : arr_bw_sub_tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arr-bw-sub-tlv")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::ArrBwSubTlv()
    :
    bw_sub_tlv_type{YType::uint16, "bw-sub-tlv-type"},
    bw_sub_tlv_length{YType::uint16, "bw-sub-tlv-length"}
    	,
    bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>())
{
    bw_sub_tlv_value->parent = this;

    yang_name = "arr-bw-sub-tlv"; yang_parent_name = "ixcdbw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::~ArrBwSubTlv()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_data() const
{
    return bw_sub_tlv_type.is_set
	|| bw_sub_tlv_length.is_set
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_sub_tlv_type.yfilter)
	|| ydk::is_set(bw_sub_tlv_length.yfilter)
	|| (bw_sub_tlv_value !=  nullptr && bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arr-bw-sub-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_sub_tlv_type.is_set || is_set(bw_sub_tlv_type.yfilter)) leaf_name_data.push_back(bw_sub_tlv_type.get_name_leafdata());
    if (bw_sub_tlv_length.is_set || is_set(bw_sub_tlv_length.yfilter)) leaf_name_data.push_back(bw_sub_tlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-sub-tlv-value")
    {
        if(bw_sub_tlv_value == nullptr)
        {
            bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue>();
        }
        return bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bw_sub_tlv_value != nullptr)
    {
        children["bw-sub-tlv-value"] = bw_sub_tlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type = value;
        bw_sub_tlv_type.value_namespace = name_space;
        bw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length = value;
        bw_sub_tlv_length.value_namespace = name_space;
        bw_sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-sub-tlv-type")
    {
        bw_sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "bw-sub-tlv-length")
    {
        bw_sub_tlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-sub-tlv-value" || name == "bw-sub-tlv-type" || name == "bw-sub-tlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::BwSubTlvValue()
    :
    ixcdbw_sub_tlv_type{YType::uint16, "ixcdbw-sub-tlv-type"}
    	,
    fixed_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>())
	,flex_bw_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>())
{
    fixed_bw_sub_tlv_value->parent = this;
    flex_bw_sub_tlv_value->parent = this;

    yang_name = "bw-sub-tlv-value"; yang_parent_name = "arr-bw-sub-tlv"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ixcdbw_sub_tlv_type.yfilter)
	|| (fixed_bw_sub_tlv_value !=  nullptr && fixed_bw_sub_tlv_value->has_operation())
	|| (flex_bw_sub_tlv_value !=  nullptr && flex_bw_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ixcdbw_sub_tlv_type.is_set || is_set(ixcdbw_sub_tlv_type.yfilter)) leaf_name_data.push_back(ixcdbw_sub_tlv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-bw-sub-tlv-value")
    {
        if(fixed_bw_sub_tlv_value == nullptr)
        {
            fixed_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue>();
        }
        return fixed_bw_sub_tlv_value;
    }

    if(child_yang_name == "flex-bw-sub-tlv-value")
    {
        if(flex_bw_sub_tlv_value == nullptr)
        {
            flex_bw_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue>();
        }
        return flex_bw_sub_tlv_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fixed_bw_sub_tlv_value != nullptr)
    {
        children["fixed-bw-sub-tlv-value"] = fixed_bw_sub_tlv_value;
    }

    if(flex_bw_sub_tlv_value != nullptr)
    {
        children["flex-bw-sub-tlv-value"] = flex_bw_sub_tlv_value;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type = value;
        ixcdbw_sub_tlv_type.value_namespace = name_space;
        ixcdbw_sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ixcdbw-sub-tlv-type")
    {
        ixcdbw_sub_tlv_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-bw-sub-tlv-value" || name == "flex-bw-sub-tlv-value" || name == "ixcdbw-sub-tlv-type")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedBwSubTlvValue()
    :
    fixed_sub_tlv_value(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>())
{
    fixed_sub_tlv_value->parent = this;

    yang_name = "fixed-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::~FixedBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_data())
            return true;
    }
    return (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<unres_oduj_prio.size(); index++)
    {
        if(unres_oduj_prio[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fixed_sub_tlv_value !=  nullptr && fixed_sub_tlv_value->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed-sub-tlv-value")
    {
        if(fixed_sub_tlv_value == nullptr)
        {
            fixed_sub_tlv_value = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue>();
        }
        return fixed_sub_tlv_value;
    }

    if(child_yang_name == "unres-oduj-prio")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio>();
        c->parent = this;
        unres_oduj_prio.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fixed_sub_tlv_value != nullptr)
    {
        children["fixed-sub-tlv-value"] = fixed_sub_tlv_value;
    }

    count = 0;
    for (auto const & c : unres_oduj_prio)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-sub-tlv-value" || name == "unres-oduj-prio")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::FixedSubTlvValue()
    :
    signal_type{YType::uint8, "signal-type"},
    num_stages{YType::uint8, "num-stages"},
    tbit{YType::uint8, "tbit"},
    sbit{YType::uint8, "sbit"},
    tsg{YType::uint8, "tsg"},
    res{YType::uint8, "res"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    stage{YType::str, "stage"}
{

    yang_name = "fixed-sub-tlv-value"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::~FixedSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_data() const
{
    return signal_type.is_set
	|| num_stages.is_set
	|| tbit.is_set
	|| sbit.is_set
	|| tsg.is_set
	|| res.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| stage.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(tsg.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(stage.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
        priority_bit0.value_namespace = name_space;
        priority_bit0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
        priority_bit1.value_namespace = name_space;
        priority_bit1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
        priority_bit2.value_namespace = name_space;
        priority_bit2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
        priority_bit3.value_namespace = name_space;
        priority_bit3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
        priority_bit4.value_namespace = name_space;
        priority_bit4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
        priority_bit5.value_namespace = name_space;
        priority_bit5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
        priority_bit6.value_namespace = name_space;
        priority_bit6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
        priority_bit7.value_namespace = name_space;
        priority_bit7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0.yfilter = yfilter;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1.yfilter = yfilter;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2.yfilter = yfilter;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3.yfilter = yfilter;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4.yfilter = yfilter;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5.yfilter = yfilter;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6.yfilter = yfilter;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-type" || name == "num-stages" || name == "tbit" || name == "sbit" || name == "tsg" || name == "res" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "stage")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::UnresOdujPrio()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unres-oduj-prio"; yang_parent_name = "fixed-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::~UnresOdujPrio()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-oduj-prio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexBwSubTlvValue()
    :
    flex_sub_tlv_value_common(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>())
{
    flex_sub_tlv_value_common->parent = this;

    yang_name = "flex-bw-sub-tlv-value"; yang_parent_name = "bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::~FlexBwSubTlvValue()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_data() const
{
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_data())
            return true;
    }
    return (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_operation() const
{
    for (std::size_t index=0; index<unres_lspbw.size(); index++)
    {
        if(unres_lspbw[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<max_lspbw.size(); index++)
    {
        if(max_lspbw[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (flex_sub_tlv_value_common !=  nullptr && flex_sub_tlv_value_common->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-bw-sub-tlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-sub-tlv-value-common")
    {
        if(flex_sub_tlv_value_common == nullptr)
        {
            flex_sub_tlv_value_common = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon>();
        }
        return flex_sub_tlv_value_common;
    }

    if(child_yang_name == "unres-lspbw")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw>();
        c->parent = this;
        unres_lspbw.push_back(c);
        return c;
    }

    if(child_yang_name == "max-lspbw")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw>();
        c->parent = this;
        max_lspbw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flex_sub_tlv_value_common != nullptr)
    {
        children["flex-sub-tlv-value-common"] = flex_sub_tlv_value_common;
    }

    count = 0;
    for (auto const & c : unres_lspbw)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : max_lspbw)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-sub-tlv-value-common" || name == "unres-lspbw" || name == "max-lspbw")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::FlexSubTlvValueCommon()
    :
    signal_type{YType::uint8, "signal-type"},
    num_stages{YType::uint8, "num-stages"},
    tbit{YType::uint8, "tbit"},
    sbit{YType::uint8, "sbit"},
    tsg{YType::uint8, "tsg"},
    res{YType::uint8, "res"},
    priority_bit0{YType::uint8, "priority-bit0"},
    priority_bit1{YType::uint8, "priority-bit1"},
    priority_bit2{YType::uint8, "priority-bit2"},
    priority_bit3{YType::uint8, "priority-bit3"},
    priority_bit4{YType::uint8, "priority-bit4"},
    priority_bit5{YType::uint8, "priority-bit5"},
    priority_bit6{YType::uint8, "priority-bit6"},
    priority_bit7{YType::uint8, "priority-bit7"},
    stage{YType::str, "stage"}
{

    yang_name = "flex-sub-tlv-value-common"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::~FlexSubTlvValueCommon()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_data() const
{
    return signal_type.is_set
	|| num_stages.is_set
	|| tbit.is_set
	|| sbit.is_set
	|| tsg.is_set
	|| res.is_set
	|| priority_bit0.is_set
	|| priority_bit1.is_set
	|| priority_bit2.is_set
	|| priority_bit3.is_set
	|| priority_bit4.is_set
	|| priority_bit5.is_set
	|| priority_bit6.is_set
	|| priority_bit7.is_set
	|| stage.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(num_stages.yfilter)
	|| ydk::is_set(tbit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(tsg.yfilter)
	|| ydk::is_set(res.yfilter)
	|| ydk::is_set(priority_bit0.yfilter)
	|| ydk::is_set(priority_bit1.yfilter)
	|| ydk::is_set(priority_bit2.yfilter)
	|| ydk::is_set(priority_bit3.yfilter)
	|| ydk::is_set(priority_bit4.yfilter)
	|| ydk::is_set(priority_bit5.yfilter)
	|| ydk::is_set(priority_bit6.yfilter)
	|| ydk::is_set(priority_bit7.yfilter)
	|| ydk::is_set(stage.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-sub-tlv-value-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (num_stages.is_set || is_set(num_stages.yfilter)) leaf_name_data.push_back(num_stages.get_name_leafdata());
    if (tbit.is_set || is_set(tbit.yfilter)) leaf_name_data.push_back(tbit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (tsg.is_set || is_set(tsg.yfilter)) leaf_name_data.push_back(tsg.get_name_leafdata());
    if (res.is_set || is_set(res.yfilter)) leaf_name_data.push_back(res.get_name_leafdata());
    if (priority_bit0.is_set || is_set(priority_bit0.yfilter)) leaf_name_data.push_back(priority_bit0.get_name_leafdata());
    if (priority_bit1.is_set || is_set(priority_bit1.yfilter)) leaf_name_data.push_back(priority_bit1.get_name_leafdata());
    if (priority_bit2.is_set || is_set(priority_bit2.yfilter)) leaf_name_data.push_back(priority_bit2.get_name_leafdata());
    if (priority_bit3.is_set || is_set(priority_bit3.yfilter)) leaf_name_data.push_back(priority_bit3.get_name_leafdata());
    if (priority_bit4.is_set || is_set(priority_bit4.yfilter)) leaf_name_data.push_back(priority_bit4.get_name_leafdata());
    if (priority_bit5.is_set || is_set(priority_bit5.yfilter)) leaf_name_data.push_back(priority_bit5.get_name_leafdata());
    if (priority_bit6.is_set || is_set(priority_bit6.yfilter)) leaf_name_data.push_back(priority_bit6.get_name_leafdata());
    if (priority_bit7.is_set || is_set(priority_bit7.yfilter)) leaf_name_data.push_back(priority_bit7.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-stages")
    {
        num_stages = value;
        num_stages.value_namespace = name_space;
        num_stages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbit")
    {
        tbit = value;
        tbit.value_namespace = name_space;
        tbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg")
    {
        tsg = value;
        tsg.value_namespace = name_space;
        tsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "res")
    {
        res = value;
        res.value_namespace = name_space;
        res.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0 = value;
        priority_bit0.value_namespace = name_space;
        priority_bit0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1 = value;
        priority_bit1.value_namespace = name_space;
        priority_bit1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2 = value;
        priority_bit2.value_namespace = name_space;
        priority_bit2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3 = value;
        priority_bit3.value_namespace = name_space;
        priority_bit3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4 = value;
        priority_bit4.value_namespace = name_space;
        priority_bit4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5 = value;
        priority_bit5.value_namespace = name_space;
        priority_bit5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6 = value;
        priority_bit6.value_namespace = name_space;
        priority_bit6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7 = value;
        priority_bit7.value_namespace = name_space;
        priority_bit7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "num-stages")
    {
        num_stages.yfilter = yfilter;
    }
    if(value_path == "tbit")
    {
        tbit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "tsg")
    {
        tsg.yfilter = yfilter;
    }
    if(value_path == "res")
    {
        res.yfilter = yfilter;
    }
    if(value_path == "priority-bit0")
    {
        priority_bit0.yfilter = yfilter;
    }
    if(value_path == "priority-bit1")
    {
        priority_bit1.yfilter = yfilter;
    }
    if(value_path == "priority-bit2")
    {
        priority_bit2.yfilter = yfilter;
    }
    if(value_path == "priority-bit3")
    {
        priority_bit3.yfilter = yfilter;
    }
    if(value_path == "priority-bit4")
    {
        priority_bit4.yfilter = yfilter;
    }
    if(value_path == "priority-bit5")
    {
        priority_bit5.yfilter = yfilter;
    }
    if(value_path == "priority-bit6")
    {
        priority_bit6.yfilter = yfilter;
    }
    if(value_path == "priority-bit7")
    {
        priority_bit7.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-type" || name == "num-stages" || name == "tbit" || name == "sbit" || name == "tsg" || name == "res" || name == "priority-bit0" || name == "priority-bit1" || name == "priority-bit2" || name == "priority-bit3" || name == "priority-bit4" || name == "priority-bit5" || name == "priority-bit6" || name == "priority-bit7" || name == "stage")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::UnresLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "unres-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::~UnresLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unres-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "flex-bw-sub-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::MaxLspbw()
    :
    entry{YType::int64, "entry"}
{

    yang_name = "max-lspbw"; yang_parent_name = "ixcdtlv-value"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::~MaxLspbw()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lspbw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::UnidtlvValue()
    :
    uni_dir_delay{YType::uint32, "uni-dir-delay"}
{

    yang_name = "unidtlv-value"; yang_parent_name = "mplste-link-opt-tlv-value"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(uni_dir_delay.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unidtlv-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uni_dir_delay.is_set || is_set(uni_dir_delay.yfilter)) leaf_name_data.push_back(uni_dir_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay = value;
        uni_dir_delay.value_namespace = name_space;
        uni_dir_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uni-dir-delay")
    {
        uni_dir_delay.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uni-dir-delay")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::Statistics()
    :
    spf_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats>())
	,rib_batch_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats>())
	,issu_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats>())
	,rib_thread_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats>())
	,nsr_pl_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats>())
	,nsr_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats>())
	,frr_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats>())
	,te_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::TeStats>())
	,protocol_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats>())
	,raw_io_stats(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats>())
	,interface_stats_entries(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries>())
{
    spf_stats->parent = this;
    rib_batch_stats->parent = this;
    issu_stats->parent = this;
    rib_thread_stats->parent = this;
    nsr_pl_stats->parent = this;
    nsr_stats->parent = this;
    frr_stats->parent = this;
    te_stats->parent = this;
    protocol_stats->parent = this;
    raw_io_stats->parent = this;
    interface_stats_entries->parent = this;

    yang_name = "statistics"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::~Statistics()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::has_data() const
{
    return (spf_stats !=  nullptr && spf_stats->has_data())
	|| (rib_batch_stats !=  nullptr && rib_batch_stats->has_data())
	|| (issu_stats !=  nullptr && issu_stats->has_data())
	|| (rib_thread_stats !=  nullptr && rib_thread_stats->has_data())
	|| (nsr_pl_stats !=  nullptr && nsr_pl_stats->has_data())
	|| (nsr_stats !=  nullptr && nsr_stats->has_data())
	|| (frr_stats !=  nullptr && frr_stats->has_data())
	|| (te_stats !=  nullptr && te_stats->has_data())
	|| (protocol_stats !=  nullptr && protocol_stats->has_data())
	|| (raw_io_stats !=  nullptr && raw_io_stats->has_data())
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (spf_stats !=  nullptr && spf_stats->has_operation())
	|| (rib_batch_stats !=  nullptr && rib_batch_stats->has_operation())
	|| (issu_stats !=  nullptr && issu_stats->has_operation())
	|| (rib_thread_stats !=  nullptr && rib_thread_stats->has_operation())
	|| (nsr_pl_stats !=  nullptr && nsr_pl_stats->has_operation())
	|| (nsr_stats !=  nullptr && nsr_stats->has_operation())
	|| (frr_stats !=  nullptr && frr_stats->has_operation())
	|| (te_stats !=  nullptr && te_stats->has_operation())
	|| (protocol_stats !=  nullptr && protocol_stats->has_operation())
	|| (raw_io_stats !=  nullptr && raw_io_stats->has_operation())
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-stats")
    {
        if(spf_stats == nullptr)
        {
            spf_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats>();
        }
        return spf_stats;
    }

    if(child_yang_name == "rib-batch-stats")
    {
        if(rib_batch_stats == nullptr)
        {
            rib_batch_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats>();
        }
        return rib_batch_stats;
    }

    if(child_yang_name == "issu-stats")
    {
        if(issu_stats == nullptr)
        {
            issu_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats>();
        }
        return issu_stats;
    }

    if(child_yang_name == "rib-thread-stats")
    {
        if(rib_thread_stats == nullptr)
        {
            rib_thread_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats>();
        }
        return rib_thread_stats;
    }

    if(child_yang_name == "nsr-pl-stats")
    {
        if(nsr_pl_stats == nullptr)
        {
            nsr_pl_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats>();
        }
        return nsr_pl_stats;
    }

    if(child_yang_name == "nsr-stats")
    {
        if(nsr_stats == nullptr)
        {
            nsr_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats>();
        }
        return nsr_stats;
    }

    if(child_yang_name == "frr-stats")
    {
        if(frr_stats == nullptr)
        {
            frr_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats>();
        }
        return frr_stats;
    }

    if(child_yang_name == "te-stats")
    {
        if(te_stats == nullptr)
        {
            te_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::TeStats>();
        }
        return te_stats;
    }

    if(child_yang_name == "protocol-stats")
    {
        if(protocol_stats == nullptr)
        {
            protocol_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats>();
        }
        return protocol_stats;
    }

    if(child_yang_name == "raw-io-stats")
    {
        if(raw_io_stats == nullptr)
        {
            raw_io_stats = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats>();
        }
        return raw_io_stats;
    }

    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries == nullptr)
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries>();
        }
        return interface_stats_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spf_stats != nullptr)
    {
        children["spf-stats"] = spf_stats;
    }

    if(rib_batch_stats != nullptr)
    {
        children["rib-batch-stats"] = rib_batch_stats;
    }

    if(issu_stats != nullptr)
    {
        children["issu-stats"] = issu_stats;
    }

    if(rib_thread_stats != nullptr)
    {
        children["rib-thread-stats"] = rib_thread_stats;
    }

    if(nsr_pl_stats != nullptr)
    {
        children["nsr-pl-stats"] = nsr_pl_stats;
    }

    if(nsr_stats != nullptr)
    {
        children["nsr-stats"] = nsr_stats;
    }

    if(frr_stats != nullptr)
    {
        children["frr-stats"] = frr_stats;
    }

    if(te_stats != nullptr)
    {
        children["te-stats"] = te_stats;
    }

    if(protocol_stats != nullptr)
    {
        children["protocol-stats"] = protocol_stats;
    }

    if(raw_io_stats != nullptr)
    {
        children["raw-io-stats"] = raw_io_stats;
    }

    if(interface_stats_entries != nullptr)
    {
        children["interface-stats-entries"] = interface_stats_entries;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-stats" || name == "rib-batch-stats" || name == "issu-stats" || name == "rib-thread-stats" || name == "nsr-pl-stats" || name == "nsr-stats" || name == "frr-stats" || name == "te-stats" || name == "protocol-stats" || name == "raw-io-stats" || name == "interface-stats-entries")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfStats()
    :
    spf_header(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader>())
{
    spf_header->parent = this;

    yang_name = "spf-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::~SpfStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::has_data() const
{
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
    for (std::size_t index=0; index<os_ex_runtime.size(); index++)
    {
        if(os_ex_runtime[index]->has_data())
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
    for (std::size_t index=0; index<os_ex_runtime.size(); index++)
    {
        if(os_ex_runtime[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (spf_header !=  nullptr && spf_header->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-header")
    {
        if(spf_header == nullptr)
        {
            spf_header = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader>();
        }
        return spf_header;
    }

    if(child_yang_name == "os-runtime")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime>();
        c->parent = this;
        os_runtime.push_back(c);
        return c;
    }

    if(child_yang_name == "os-sum-runtime")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime>();
        c->parent = this;
        os_sum_runtime.push_back(c);
        return c;
    }

    if(child_yang_name == "os-ex-runtime")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime>();
        c->parent = this;
        os_ex_runtime.push_back(c);
        return c;
    }

    if(child_yang_name == "runtime")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime>();
        c->parent = this;
        runtime.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spf_header != nullptr)
    {
        children["spf-header"] = spf_header;
    }

    count = 0;
    for (auto const & c : os_runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : os_sum_runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : os_ex_runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-header" || name == "os-runtime" || name == "os-sum-runtime" || name == "os-ex-runtime" || name == "runtime")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::SpfHeader()
    :
    router_id{YType::str, "router-id"},
    spf_count{YType::uint32, "spf-count"}
{

    yang_name = "spf-header"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(spf_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (spf_count.is_set || is_set(spf_count.yfilter)) leaf_name_data.push_back(spf_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-summ")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm>();
        c->parent = this;
        area_summ.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : area_summ)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-count")
    {
        spf_count = value;
        spf_count.value_namespace = name_space;
        spf_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "spf-count")
    {
        spf_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-summ" || name == "router-id" || name == "spf-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::AreaSumm()
    :
    area_id{YType::uint32, "area-id"},
    spf_count{YType::uint32, "spf-count"}
{

    yang_name = "area-summ"; yang_parent_name = "spf-header"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(spf_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-summ";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (spf_count.is_set || is_set(spf_count.yfilter)) leaf_name_data.push_back(spf_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-count")
    {
        spf_count = value;
        spf_count.value_namespace = name_space;
        spf_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "spf-count")
    {
        spf_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "spf-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::OsRuntime()
    :
    si_area_id_str{YType::str, "si-area-id-str"},
    si_change_flags{YType::uint16, "si-change-flags"}
    	,
    si_start_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime>())
	,si_duration(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration>())
{
    si_start_time->parent = this;
    si_duration->parent = this;

    yang_name = "os-runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::~OsRuntime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::has_data() const
{
    return si_area_id_str.is_set
	|| si_change_flags.is_set
	|| (si_start_time !=  nullptr && si_start_time->has_data())
	|| (si_duration !=  nullptr && si_duration->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(si_area_id_str.yfilter)
	|| ydk::is_set(si_change_flags.yfilter)
	|| (si_start_time !=  nullptr && si_start_time->has_operation())
	|| (si_duration !=  nullptr && si_duration->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si_area_id_str.is_set || is_set(si_area_id_str.yfilter)) leaf_name_data.push_back(si_area_id_str.get_name_leafdata());
    if (si_change_flags.is_set || is_set(si_change_flags.yfilter)) leaf_name_data.push_back(si_change_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "si-start-time")
    {
        if(si_start_time == nullptr)
        {
            si_start_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime>();
        }
        return si_start_time;
    }

    if(child_yang_name == "si-duration")
    {
        if(si_duration == nullptr)
        {
            si_duration = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration>();
        }
        return si_duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(si_start_time != nullptr)
    {
        children["si-start-time"] = si_start_time;
    }

    if(si_duration != nullptr)
    {
        children["si-duration"] = si_duration;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si-area-id-str")
    {
        si_area_id_str = value;
        si_area_id_str.value_namespace = name_space;
        si_area_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "si-change-flags")
    {
        si_change_flags = value;
        si_change_flags.value_namespace = name_space;
        si_change_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si-area-id-str")
    {
        si_area_id_str.yfilter = yfilter;
    }
    if(value_path == "si-change-flags")
    {
        si_change_flags.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si-start-time" || name == "si-duration" || name == "si-area-id-str" || name == "si-change-flags")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::SiStartTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "si-start-time"; yang_parent_name = "os-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::~SiStartTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::SiDuration()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "si-duration"; yang_parent_name = "os-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::~SiDuration()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::OsSumRuntime()
    :
    sp_adv_rtr_id{YType::uint32, "sp-adv-rtr-id"},
    sp_dest_count{YType::uint32, "sp-dest-count"},
    sp_dest_addr{YType::uint32, "sp-dest-addr"}
    	,
    sp_start_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime>())
	,sp_duration(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration>())
{
    sp_start_time->parent = this;
    sp_duration->parent = this;

    yang_name = "os-sum-runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::~OsSumRuntime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::has_data() const
{
    return sp_adv_rtr_id.is_set
	|| sp_dest_count.is_set
	|| sp_dest_addr.is_set
	|| (sp_start_time !=  nullptr && sp_start_time->has_data())
	|| (sp_duration !=  nullptr && sp_duration->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sp_adv_rtr_id.yfilter)
	|| ydk::is_set(sp_dest_count.yfilter)
	|| ydk::is_set(sp_dest_addr.yfilter)
	|| (sp_start_time !=  nullptr && sp_start_time->has_operation())
	|| (sp_duration !=  nullptr && sp_duration->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-sum-runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sp_adv_rtr_id.is_set || is_set(sp_adv_rtr_id.yfilter)) leaf_name_data.push_back(sp_adv_rtr_id.get_name_leafdata());
    if (sp_dest_count.is_set || is_set(sp_dest_count.yfilter)) leaf_name_data.push_back(sp_dest_count.get_name_leafdata());
    if (sp_dest_addr.is_set || is_set(sp_dest_addr.yfilter)) leaf_name_data.push_back(sp_dest_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sp-start-time")
    {
        if(sp_start_time == nullptr)
        {
            sp_start_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime>();
        }
        return sp_start_time;
    }

    if(child_yang_name == "sp-duration")
    {
        if(sp_duration == nullptr)
        {
            sp_duration = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration>();
        }
        return sp_duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sp_start_time != nullptr)
    {
        children["sp-start-time"] = sp_start_time;
    }

    if(sp_duration != nullptr)
    {
        children["sp-duration"] = sp_duration;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id = value;
        sp_adv_rtr_id.value_namespace = name_space;
        sp_adv_rtr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count = value;
        sp_dest_count.value_namespace = name_space;
        sp_dest_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr = value;
        sp_dest_addr.value_namespace = name_space;
        sp_dest_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id.yfilter = yfilter;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count.yfilter = yfilter;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sp-start-time" || name == "sp-duration" || name == "sp-adv-rtr-id" || name == "sp-dest-count" || name == "sp-dest-addr")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::SpStartTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "sp-start-time"; yang_parent_name = "os-sum-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::~SpStartTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::SpDuration()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "sp-duration"; yang_parent_name = "os-sum-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::~SpDuration()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::OsExRuntime()
    :
    sp_adv_rtr_id{YType::uint32, "sp-adv-rtr-id"},
    sp_dest_count{YType::uint32, "sp-dest-count"},
    sp_dest_addr{YType::uint32, "sp-dest-addr"}
    	,
    sp_start_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime>())
	,sp_duration(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration>())
{
    sp_start_time->parent = this;
    sp_duration->parent = this;

    yang_name = "os-ex-runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::~OsExRuntime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::has_data() const
{
    return sp_adv_rtr_id.is_set
	|| sp_dest_count.is_set
	|| sp_dest_addr.is_set
	|| (sp_start_time !=  nullptr && sp_start_time->has_data())
	|| (sp_duration !=  nullptr && sp_duration->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sp_adv_rtr_id.yfilter)
	|| ydk::is_set(sp_dest_count.yfilter)
	|| ydk::is_set(sp_dest_addr.yfilter)
	|| (sp_start_time !=  nullptr && sp_start_time->has_operation())
	|| (sp_duration !=  nullptr && sp_duration->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-ex-runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sp_adv_rtr_id.is_set || is_set(sp_adv_rtr_id.yfilter)) leaf_name_data.push_back(sp_adv_rtr_id.get_name_leafdata());
    if (sp_dest_count.is_set || is_set(sp_dest_count.yfilter)) leaf_name_data.push_back(sp_dest_count.get_name_leafdata());
    if (sp_dest_addr.is_set || is_set(sp_dest_addr.yfilter)) leaf_name_data.push_back(sp_dest_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sp-start-time")
    {
        if(sp_start_time == nullptr)
        {
            sp_start_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime>();
        }
        return sp_start_time;
    }

    if(child_yang_name == "sp-duration")
    {
        if(sp_duration == nullptr)
        {
            sp_duration = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration>();
        }
        return sp_duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sp_start_time != nullptr)
    {
        children["sp-start-time"] = sp_start_time;
    }

    if(sp_duration != nullptr)
    {
        children["sp-duration"] = sp_duration;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id = value;
        sp_adv_rtr_id.value_namespace = name_space;
        sp_adv_rtr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count = value;
        sp_dest_count.value_namespace = name_space;
        sp_dest_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr = value;
        sp_dest_addr.value_namespace = name_space;
        sp_dest_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id.yfilter = yfilter;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count.yfilter = yfilter;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sp-start-time" || name == "sp-duration" || name == "sp-adv-rtr-id" || name == "sp-dest-count" || name == "sp-dest-addr")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::SpStartTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "sp-start-time"; yang_parent_name = "os-ex-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::~SpStartTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::SpDuration()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "sp-duration"; yang_parent_name = "os-ex-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::~SpDuration()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::Runtime()
    :
    spf_start_time{YType::uint32, "spf-start-time"},
    lsa_change_cnt{YType::int16, "lsa-change-cnt"}
    	,
    gbl_spf_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime>())
{
    gbl_spf_time->parent = this;

    yang_name = "runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::~Runtime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::has_data() const
{
    for (std::size_t index=0; index<lsa_info.size(); index++)
    {
        if(lsa_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_data())
            return true;
    }
    return spf_start_time.is_set
	|| lsa_change_cnt.is_set
	|| (gbl_spf_time !=  nullptr && gbl_spf_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::has_operation() const
{
    for (std::size_t index=0; index<lsa_info.size(); index++)
    {
        if(lsa_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(spf_start_time.yfilter)
	|| ydk::is_set(lsa_change_cnt.yfilter)
	|| (gbl_spf_time !=  nullptr && gbl_spf_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_start_time.is_set || is_set(spf_start_time.yfilter)) leaf_name_data.push_back(spf_start_time.get_name_leafdata());
    if (lsa_change_cnt.is_set || is_set(lsa_change_cnt.yfilter)) leaf_name_data.push_back(lsa_change_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gbl-spf-time")
    {
        if(gbl_spf_time == nullptr)
        {
            gbl_spf_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime>();
        }
        return gbl_spf_time;
    }

    if(child_yang_name == "lsa-info")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo>();
        c->parent = this;
        lsa_info.push_back(c);
        return c;
    }

    if(child_yang_name == "area-stat")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat>();
        c->parent = this;
        area_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gbl_spf_time != nullptr)
    {
        children["gbl-spf-time"] = gbl_spf_time;
    }

    count = 0;
    for (auto const & c : lsa_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : area_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-start-time")
    {
        spf_start_time = value;
        spf_start_time.value_namespace = name_space;
        spf_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-change-cnt")
    {
        lsa_change_cnt = value;
        lsa_change_cnt.value_namespace = name_space;
        lsa_change_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-start-time")
    {
        spf_start_time.yfilter = yfilter;
    }
    if(value_path == "lsa-change-cnt")
    {
        lsa_change_cnt.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gbl-spf-time" || name == "lsa-info" || name == "area-stat" || name == "spf-start-time" || name == "lsa-change-cnt")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::GblSpfTime()
    :
    spf_dijkstra{YType::uint32, "spf-dijkstra"},
    spf_intra_prefix{YType::uint32, "spf-intra-prefix"},
    spf_intra_prefix_del{YType::uint32, "spf-intra-prefix-del"},
    spf_inter_prefix{YType::uint32, "spf-inter-prefix"},
    spf_inter_prefix_del{YType::uint32, "spf-inter-prefix-del"},
    spf_ext_prefix{YType::uint32, "spf-ext-prefix"},
    spf_ext_prefix_del{YType::uint32, "spf-ext-prefix-del"}
{

    yang_name = "gbl-spf-time"; yang_parent_name = "runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::~GblSpfTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::has_data() const
{
    return spf_dijkstra.is_set
	|| spf_intra_prefix.is_set
	|| spf_intra_prefix_del.is_set
	|| spf_inter_prefix.is_set
	|| spf_inter_prefix_del.is_set
	|| spf_ext_prefix.is_set
	|| spf_ext_prefix_del.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf_dijkstra.yfilter)
	|| ydk::is_set(spf_intra_prefix.yfilter)
	|| ydk::is_set(spf_intra_prefix_del.yfilter)
	|| ydk::is_set(spf_inter_prefix.yfilter)
	|| ydk::is_set(spf_inter_prefix_del.yfilter)
	|| ydk::is_set(spf_ext_prefix.yfilter)
	|| ydk::is_set(spf_ext_prefix_del.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gbl-spf-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_dijkstra.is_set || is_set(spf_dijkstra.yfilter)) leaf_name_data.push_back(spf_dijkstra.get_name_leafdata());
    if (spf_intra_prefix.is_set || is_set(spf_intra_prefix.yfilter)) leaf_name_data.push_back(spf_intra_prefix.get_name_leafdata());
    if (spf_intra_prefix_del.is_set || is_set(spf_intra_prefix_del.yfilter)) leaf_name_data.push_back(spf_intra_prefix_del.get_name_leafdata());
    if (spf_inter_prefix.is_set || is_set(spf_inter_prefix.yfilter)) leaf_name_data.push_back(spf_inter_prefix.get_name_leafdata());
    if (spf_inter_prefix_del.is_set || is_set(spf_inter_prefix_del.yfilter)) leaf_name_data.push_back(spf_inter_prefix_del.get_name_leafdata());
    if (spf_ext_prefix.is_set || is_set(spf_ext_prefix.yfilter)) leaf_name_data.push_back(spf_ext_prefix.get_name_leafdata());
    if (spf_ext_prefix_del.is_set || is_set(spf_ext_prefix_del.yfilter)) leaf_name_data.push_back(spf_ext_prefix_del.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra = value;
        spf_dijkstra.value_namespace = name_space;
        spf_dijkstra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix = value;
        spf_intra_prefix.value_namespace = name_space;
        spf_intra_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del = value;
        spf_intra_prefix_del.value_namespace = name_space;
        spf_intra_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix = value;
        spf_inter_prefix.value_namespace = name_space;
        spf_inter_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del = value;
        spf_inter_prefix_del.value_namespace = name_space;
        spf_inter_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix = value;
        spf_ext_prefix.value_namespace = name_space;
        spf_ext_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del = value;
        spf_ext_prefix_del.value_namespace = name_space;
        spf_ext_prefix_del.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-dijkstra" || name == "spf-intra-prefix" || name == "spf-intra-prefix-del" || name == "spf-inter-prefix" || name == "spf-inter-prefix-del" || name == "spf-ext-prefix" || name == "spf-ext-prefix-del")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::LsaInfo()
    :
    area_id{YType::uint32, "area-id"},
    adv_rtr{YType::str, "adv-rtr"},
    id{YType::str, "id"},
    type{YType::uint8, "type"},
    flush{YType::boolean, "flush"}
{

    yang_name = "lsa-info"; yang_parent_name = "runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::~LsaInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::has_data() const
{
    return area_id.is_set
	|| adv_rtr.is_set
	|| id.is_set
	|| type.is_set
	|| flush.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(adv_rtr.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flush.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (adv_rtr.is_set || is_set(adv_rtr.yfilter)) leaf_name_data.push_back(adv_rtr.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (flush.is_set || is_set(flush.yfilter)) leaf_name_data.push_back(flush.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-rtr")
    {
        adv_rtr = value;
        adv_rtr.value_namespace = name_space;
        adv_rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush")
    {
        flush = value;
        flush.value_namespace = name_space;
        flush.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "adv-rtr")
    {
        adv_rtr.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flush")
    {
        flush.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "adv-rtr" || name == "id" || name == "type" || name == "flush")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::AreaStat()
    :
    area_id{YType::uint32, "area-id"}
    	,
    spf_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime>())
{
    spf_time->parent = this;

    yang_name = "area-stat"; yang_parent_name = "runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::~AreaStat()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::has_data() const
{
    for (std::size_t index=0; index<lsa_type_cnt.size(); index++)
    {
        if(lsa_type_cnt[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| (spf_time !=  nullptr && spf_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::has_operation() const
{
    for (std::size_t index=0; index<lsa_type_cnt.size(); index++)
    {
        if(lsa_type_cnt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (spf_time !=  nullptr && spf_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-time")
    {
        if(spf_time == nullptr)
        {
            spf_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime>();
        }
        return spf_time;
    }

    if(child_yang_name == "lsa-type-cnt")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt>();
        c->parent = this;
        lsa_type_cnt.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spf_time != nullptr)
    {
        children["spf-time"] = spf_time;
    }

    count = 0;
    for (auto const & c : lsa_type_cnt)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-time" || name == "lsa-type-cnt" || name == "area-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::SpfTime()
    :
    spf_dijkstra{YType::uint32, "spf-dijkstra"},
    spf_intra_prefix{YType::uint32, "spf-intra-prefix"},
    spf_intra_prefix_del{YType::uint32, "spf-intra-prefix-del"},
    spf_inter_prefix{YType::uint32, "spf-inter-prefix"},
    spf_inter_prefix_del{YType::uint32, "spf-inter-prefix-del"},
    spf_ext_prefix{YType::uint32, "spf-ext-prefix"},
    spf_ext_prefix_del{YType::uint32, "spf-ext-prefix-del"}
{

    yang_name = "spf-time"; yang_parent_name = "area-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::~SpfTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_data() const
{
    return spf_dijkstra.is_set
	|| spf_intra_prefix.is_set
	|| spf_intra_prefix_del.is_set
	|| spf_inter_prefix.is_set
	|| spf_inter_prefix_del.is_set
	|| spf_ext_prefix.is_set
	|| spf_ext_prefix_del.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf_dijkstra.yfilter)
	|| ydk::is_set(spf_intra_prefix.yfilter)
	|| ydk::is_set(spf_intra_prefix_del.yfilter)
	|| ydk::is_set(spf_inter_prefix.yfilter)
	|| ydk::is_set(spf_inter_prefix_del.yfilter)
	|| ydk::is_set(spf_ext_prefix.yfilter)
	|| ydk::is_set(spf_ext_prefix_del.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_dijkstra.is_set || is_set(spf_dijkstra.yfilter)) leaf_name_data.push_back(spf_dijkstra.get_name_leafdata());
    if (spf_intra_prefix.is_set || is_set(spf_intra_prefix.yfilter)) leaf_name_data.push_back(spf_intra_prefix.get_name_leafdata());
    if (spf_intra_prefix_del.is_set || is_set(spf_intra_prefix_del.yfilter)) leaf_name_data.push_back(spf_intra_prefix_del.get_name_leafdata());
    if (spf_inter_prefix.is_set || is_set(spf_inter_prefix.yfilter)) leaf_name_data.push_back(spf_inter_prefix.get_name_leafdata());
    if (spf_inter_prefix_del.is_set || is_set(spf_inter_prefix_del.yfilter)) leaf_name_data.push_back(spf_inter_prefix_del.get_name_leafdata());
    if (spf_ext_prefix.is_set || is_set(spf_ext_prefix.yfilter)) leaf_name_data.push_back(spf_ext_prefix.get_name_leafdata());
    if (spf_ext_prefix_del.is_set || is_set(spf_ext_prefix_del.yfilter)) leaf_name_data.push_back(spf_ext_prefix_del.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra = value;
        spf_dijkstra.value_namespace = name_space;
        spf_dijkstra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix = value;
        spf_intra_prefix.value_namespace = name_space;
        spf_intra_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del = value;
        spf_intra_prefix_del.value_namespace = name_space;
        spf_intra_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix = value;
        spf_inter_prefix.value_namespace = name_space;
        spf_inter_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del = value;
        spf_inter_prefix_del.value_namespace = name_space;
        spf_inter_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix = value;
        spf_ext_prefix.value_namespace = name_space;
        spf_ext_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del = value;
        spf_ext_prefix_del.value_namespace = name_space;
        spf_ext_prefix_del.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-dijkstra" || name == "spf-intra-prefix" || name == "spf-intra-prefix-del" || name == "spf-inter-prefix" || name == "spf-inter-prefix-del" || name == "spf-ext-prefix" || name == "spf-ext-prefix-del")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::LsaTypeCnt()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "lsa-type-cnt"; yang_parent_name = "area-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::~LsaTypeCnt()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-type-cnt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::RibBatchStats()
{

    yang_name = "rib-batch-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-batch-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-batch")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch>();
        c->parent = this;
        priority_batch.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : priority_batch)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-batch")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::PriorityBatch()
    :
    batches_sent{YType::uint32, "batches-sent"},
    routes_sent{YType::uint32, "routes-sent"},
    routes_pending{YType::uint32, "routes-pending"},
    max_routes{YType::uint32, "max-routes"},
    paths_sent{YType::uint32, "paths-sent"},
    paths_pending{YType::uint32, "paths-pending"},
    paths_add{YType::uint32, "paths-add"},
    paths_add_errs{YType::uint32, "paths-add-errs"},
    paths_del{YType::uint32, "paths-del"},
    paths_del_errs{YType::uint32, "paths-del-errs"},
    lfas_pending{YType::uint32, "lfas-pending"},
    lfas_add{YType::uint32, "lfas-add"},
    lfas_del{YType::uint32, "lfas-del"},
    lfas_sent{YType::uint32, "lfas-sent"},
    priority_level{YType::str, "priority-level"}
{

    yang_name = "priority-batch"; yang_parent_name = "rib-batch-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::~PriorityBatch()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::has_data() const
{
    return batches_sent.is_set
	|| routes_sent.is_set
	|| routes_pending.is_set
	|| max_routes.is_set
	|| paths_sent.is_set
	|| paths_pending.is_set
	|| paths_add.is_set
	|| paths_add_errs.is_set
	|| paths_del.is_set
	|| paths_del_errs.is_set
	|| lfas_pending.is_set
	|| lfas_add.is_set
	|| lfas_del.is_set
	|| lfas_sent.is_set
	|| priority_level.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(batches_sent.yfilter)
	|| ydk::is_set(routes_sent.yfilter)
	|| ydk::is_set(routes_pending.yfilter)
	|| ydk::is_set(max_routes.yfilter)
	|| ydk::is_set(paths_sent.yfilter)
	|| ydk::is_set(paths_pending.yfilter)
	|| ydk::is_set(paths_add.yfilter)
	|| ydk::is_set(paths_add_errs.yfilter)
	|| ydk::is_set(paths_del.yfilter)
	|| ydk::is_set(paths_del_errs.yfilter)
	|| ydk::is_set(lfas_pending.yfilter)
	|| ydk::is_set(lfas_add.yfilter)
	|| ydk::is_set(lfas_del.yfilter)
	|| ydk::is_set(lfas_sent.yfilter)
	|| ydk::is_set(priority_level.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-batch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batches_sent.is_set || is_set(batches_sent.yfilter)) leaf_name_data.push_back(batches_sent.get_name_leafdata());
    if (routes_sent.is_set || is_set(routes_sent.yfilter)) leaf_name_data.push_back(routes_sent.get_name_leafdata());
    if (routes_pending.is_set || is_set(routes_pending.yfilter)) leaf_name_data.push_back(routes_pending.get_name_leafdata());
    if (max_routes.is_set || is_set(max_routes.yfilter)) leaf_name_data.push_back(max_routes.get_name_leafdata());
    if (paths_sent.is_set || is_set(paths_sent.yfilter)) leaf_name_data.push_back(paths_sent.get_name_leafdata());
    if (paths_pending.is_set || is_set(paths_pending.yfilter)) leaf_name_data.push_back(paths_pending.get_name_leafdata());
    if (paths_add.is_set || is_set(paths_add.yfilter)) leaf_name_data.push_back(paths_add.get_name_leafdata());
    if (paths_add_errs.is_set || is_set(paths_add_errs.yfilter)) leaf_name_data.push_back(paths_add_errs.get_name_leafdata());
    if (paths_del.is_set || is_set(paths_del.yfilter)) leaf_name_data.push_back(paths_del.get_name_leafdata());
    if (paths_del_errs.is_set || is_set(paths_del_errs.yfilter)) leaf_name_data.push_back(paths_del_errs.get_name_leafdata());
    if (lfas_pending.is_set || is_set(lfas_pending.yfilter)) leaf_name_data.push_back(lfas_pending.get_name_leafdata());
    if (lfas_add.is_set || is_set(lfas_add.yfilter)) leaf_name_data.push_back(lfas_add.get_name_leafdata());
    if (lfas_del.is_set || is_set(lfas_del.yfilter)) leaf_name_data.push_back(lfas_del.get_name_leafdata());
    if (lfas_sent.is_set || is_set(lfas_sent.yfilter)) leaf_name_data.push_back(lfas_sent.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "batches-sent")
    {
        batches_sent = value;
        batches_sent.value_namespace = name_space;
        batches_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-sent")
    {
        routes_sent = value;
        routes_sent.value_namespace = name_space;
        routes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-pending")
    {
        routes_pending = value;
        routes_pending.value_namespace = name_space;
        routes_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-routes")
    {
        max_routes = value;
        max_routes.value_namespace = name_space;
        max_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-sent")
    {
        paths_sent = value;
        paths_sent.value_namespace = name_space;
        paths_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-pending")
    {
        paths_pending = value;
        paths_pending.value_namespace = name_space;
        paths_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-add")
    {
        paths_add = value;
        paths_add.value_namespace = name_space;
        paths_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-add-errs")
    {
        paths_add_errs = value;
        paths_add_errs.value_namespace = name_space;
        paths_add_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-del")
    {
        paths_del = value;
        paths_del.value_namespace = name_space;
        paths_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-del-errs")
    {
        paths_del_errs = value;
        paths_del_errs.value_namespace = name_space;
        paths_del_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfas-pending")
    {
        lfas_pending = value;
        lfas_pending.value_namespace = name_space;
        lfas_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfas-add")
    {
        lfas_add = value;
        lfas_add.value_namespace = name_space;
        lfas_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfas-del")
    {
        lfas_del = value;
        lfas_del.value_namespace = name_space;
        lfas_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfas-sent")
    {
        lfas_sent = value;
        lfas_sent.value_namespace = name_space;
        lfas_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "batches-sent")
    {
        batches_sent.yfilter = yfilter;
    }
    if(value_path == "routes-sent")
    {
        routes_sent.yfilter = yfilter;
    }
    if(value_path == "routes-pending")
    {
        routes_pending.yfilter = yfilter;
    }
    if(value_path == "max-routes")
    {
        max_routes.yfilter = yfilter;
    }
    if(value_path == "paths-sent")
    {
        paths_sent.yfilter = yfilter;
    }
    if(value_path == "paths-pending")
    {
        paths_pending.yfilter = yfilter;
    }
    if(value_path == "paths-add")
    {
        paths_add.yfilter = yfilter;
    }
    if(value_path == "paths-add-errs")
    {
        paths_add_errs.yfilter = yfilter;
    }
    if(value_path == "paths-del")
    {
        paths_del.yfilter = yfilter;
    }
    if(value_path == "paths-del-errs")
    {
        paths_del_errs.yfilter = yfilter;
    }
    if(value_path == "lfas-pending")
    {
        lfas_pending.yfilter = yfilter;
    }
    if(value_path == "lfas-add")
    {
        lfas_add.yfilter = yfilter;
    }
    if(value_path == "lfas-del")
    {
        lfas_del.yfilter = yfilter;
    }
    if(value_path == "lfas-sent")
    {
        lfas_sent.yfilter = yfilter;
    }
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "batches-sent" || name == "routes-sent" || name == "routes-pending" || name == "max-routes" || name == "paths-sent" || name == "paths-pending" || name == "paths-add" || name == "paths-add-errs" || name == "paths-del" || name == "paths-del-errs" || name == "lfas-pending" || name == "lfas-add" || name == "lfas-del" || name == "lfas-sent" || name == "priority-level")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::IssuStats()
    :
    nsr_rev{YType::int32, "nsr-rev"},
    nsr_fsm_state{YType::int32, "nsr-fsm-state"},
    nsr_version{YType::uint32, "nsr-version"},
    nsr_nodeid{YType::uint32, "nsr-nodeid"},
    nsr_peer_version{YType::uint32, "nsr-peer-version"},
    nsr_peer_nodeid{YType::uint32, "nsr-peer-nodeid"},
    nsr_mtu{YType::uint32, "nsr-mtu"},
    nsr_nbr_qad_qid{YType::uint32, "nsr-nbr-qad-qid"},
    nsr_lsa_qad_qid{YType::uint32, "nsr-lsa-qad-qid"},
    nsr_nbr_qad_mdata_count{YType::uint32, "nsr-nbr-qad-mdata-count"},
    nsr_lsa_qad_mdata_count{YType::uint32, "nsr-lsa-qad-mdata-count"},
    nsr_nbr_init_sync_pend_count{YType::int32, "nsr-nbr-init-sync-pend-count"},
    nsr_lsa_init_sync_pend_count{YType::int32, "nsr-lsa-init-sync-pend-count"},
    nsr_nbr_seq_no{YType::uint32, "nsr-nbr-seq-no"},
    nsr_intf_seq_no{YType::uint32, "nsr-intf-seq-no"},
    nsr_tmr_quant{YType::int32, "nsr-tmr-quant"},
    nsr_conn_to_active_attempts{YType::uint64, "nsr-conn-to-active-attempts"},
    nsr_conn_to_active_fails{YType::uint64, "nsr-conn-to-active-fails"},
    nsr_conn_to_active_opens{YType::uint64, "nsr-conn-to-active-opens"},
    nsr_conn_to_active_closes{YType::uint64, "nsr-conn-to-active-closes"},
    nsr_conn_to_active_errors{YType::uint64, "nsr-conn-to-active-errors"}
    	,
    nsr_thd_sched(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched>())
	,nsr_rtr_thd_sched(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched>())
{
    nsr_thd_sched->parent = this;
    nsr_rtr_thd_sched->parent = this;

    yang_name = "issu-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::~IssuStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::has_data() const
{
    return nsr_rev.is_set
	|| nsr_fsm_state.is_set
	|| nsr_version.is_set
	|| nsr_nodeid.is_set
	|| nsr_peer_version.is_set
	|| nsr_peer_nodeid.is_set
	|| nsr_mtu.is_set
	|| nsr_nbr_qad_qid.is_set
	|| nsr_lsa_qad_qid.is_set
	|| nsr_nbr_qad_mdata_count.is_set
	|| nsr_lsa_qad_mdata_count.is_set
	|| nsr_nbr_init_sync_pend_count.is_set
	|| nsr_lsa_init_sync_pend_count.is_set
	|| nsr_nbr_seq_no.is_set
	|| nsr_intf_seq_no.is_set
	|| nsr_tmr_quant.is_set
	|| nsr_conn_to_active_attempts.is_set
	|| nsr_conn_to_active_fails.is_set
	|| nsr_conn_to_active_opens.is_set
	|| nsr_conn_to_active_closes.is_set
	|| nsr_conn_to_active_errors.is_set
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_data())
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_rev.yfilter)
	|| ydk::is_set(nsr_fsm_state.yfilter)
	|| ydk::is_set(nsr_version.yfilter)
	|| ydk::is_set(nsr_nodeid.yfilter)
	|| ydk::is_set(nsr_peer_version.yfilter)
	|| ydk::is_set(nsr_peer_nodeid.yfilter)
	|| ydk::is_set(nsr_mtu.yfilter)
	|| ydk::is_set(nsr_nbr_qad_qid.yfilter)
	|| ydk::is_set(nsr_lsa_qad_qid.yfilter)
	|| ydk::is_set(nsr_nbr_qad_mdata_count.yfilter)
	|| ydk::is_set(nsr_lsa_qad_mdata_count.yfilter)
	|| ydk::is_set(nsr_nbr_init_sync_pend_count.yfilter)
	|| ydk::is_set(nsr_lsa_init_sync_pend_count.yfilter)
	|| ydk::is_set(nsr_nbr_seq_no.yfilter)
	|| ydk::is_set(nsr_intf_seq_no.yfilter)
	|| ydk::is_set(nsr_tmr_quant.yfilter)
	|| ydk::is_set(nsr_conn_to_active_attempts.yfilter)
	|| ydk::is_set(nsr_conn_to_active_fails.yfilter)
	|| ydk::is_set(nsr_conn_to_active_opens.yfilter)
	|| ydk::is_set(nsr_conn_to_active_closes.yfilter)
	|| ydk::is_set(nsr_conn_to_active_errors.yfilter)
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_operation())
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_rev.is_set || is_set(nsr_rev.yfilter)) leaf_name_data.push_back(nsr_rev.get_name_leafdata());
    if (nsr_fsm_state.is_set || is_set(nsr_fsm_state.yfilter)) leaf_name_data.push_back(nsr_fsm_state.get_name_leafdata());
    if (nsr_version.is_set || is_set(nsr_version.yfilter)) leaf_name_data.push_back(nsr_version.get_name_leafdata());
    if (nsr_nodeid.is_set || is_set(nsr_nodeid.yfilter)) leaf_name_data.push_back(nsr_nodeid.get_name_leafdata());
    if (nsr_peer_version.is_set || is_set(nsr_peer_version.yfilter)) leaf_name_data.push_back(nsr_peer_version.get_name_leafdata());
    if (nsr_peer_nodeid.is_set || is_set(nsr_peer_nodeid.yfilter)) leaf_name_data.push_back(nsr_peer_nodeid.get_name_leafdata());
    if (nsr_mtu.is_set || is_set(nsr_mtu.yfilter)) leaf_name_data.push_back(nsr_mtu.get_name_leafdata());
    if (nsr_nbr_qad_qid.is_set || is_set(nsr_nbr_qad_qid.yfilter)) leaf_name_data.push_back(nsr_nbr_qad_qid.get_name_leafdata());
    if (nsr_lsa_qad_qid.is_set || is_set(nsr_lsa_qad_qid.yfilter)) leaf_name_data.push_back(nsr_lsa_qad_qid.get_name_leafdata());
    if (nsr_nbr_qad_mdata_count.is_set || is_set(nsr_nbr_qad_mdata_count.yfilter)) leaf_name_data.push_back(nsr_nbr_qad_mdata_count.get_name_leafdata());
    if (nsr_lsa_qad_mdata_count.is_set || is_set(nsr_lsa_qad_mdata_count.yfilter)) leaf_name_data.push_back(nsr_lsa_qad_mdata_count.get_name_leafdata());
    if (nsr_nbr_init_sync_pend_count.is_set || is_set(nsr_nbr_init_sync_pend_count.yfilter)) leaf_name_data.push_back(nsr_nbr_init_sync_pend_count.get_name_leafdata());
    if (nsr_lsa_init_sync_pend_count.is_set || is_set(nsr_lsa_init_sync_pend_count.yfilter)) leaf_name_data.push_back(nsr_lsa_init_sync_pend_count.get_name_leafdata());
    if (nsr_nbr_seq_no.is_set || is_set(nsr_nbr_seq_no.yfilter)) leaf_name_data.push_back(nsr_nbr_seq_no.get_name_leafdata());
    if (nsr_intf_seq_no.is_set || is_set(nsr_intf_seq_no.yfilter)) leaf_name_data.push_back(nsr_intf_seq_no.get_name_leafdata());
    if (nsr_tmr_quant.is_set || is_set(nsr_tmr_quant.yfilter)) leaf_name_data.push_back(nsr_tmr_quant.get_name_leafdata());
    if (nsr_conn_to_active_attempts.is_set || is_set(nsr_conn_to_active_attempts.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_attempts.get_name_leafdata());
    if (nsr_conn_to_active_fails.is_set || is_set(nsr_conn_to_active_fails.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_fails.get_name_leafdata());
    if (nsr_conn_to_active_opens.is_set || is_set(nsr_conn_to_active_opens.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_opens.get_name_leafdata());
    if (nsr_conn_to_active_closes.is_set || is_set(nsr_conn_to_active_closes.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_closes.get_name_leafdata());
    if (nsr_conn_to_active_errors.is_set || is_set(nsr_conn_to_active_errors.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-thd-sched")
    {
        if(nsr_thd_sched == nullptr)
        {
            nsr_thd_sched = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched>();
        }
        return nsr_thd_sched;
    }

    if(child_yang_name == "nsr-rtr-thd-sched")
    {
        if(nsr_rtr_thd_sched == nullptr)
        {
            nsr_rtr_thd_sched = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched>();
        }
        return nsr_rtr_thd_sched;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nsr_thd_sched != nullptr)
    {
        children["nsr-thd-sched"] = nsr_thd_sched;
    }

    if(nsr_rtr_thd_sched != nullptr)
    {
        children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-rev")
    {
        nsr_rev = value;
        nsr_rev.value_namespace = name_space;
        nsr_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state = value;
        nsr_fsm_state.value_namespace = name_space;
        nsr_fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-version")
    {
        nsr_version = value;
        nsr_version.value_namespace = name_space;
        nsr_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid = value;
        nsr_nodeid.value_namespace = name_space;
        nsr_nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version = value;
        nsr_peer_version.value_namespace = name_space;
        nsr_peer_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid = value;
        nsr_peer_nodeid.value_namespace = name_space;
        nsr_peer_nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu = value;
        nsr_mtu.value_namespace = name_space;
        nsr_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid = value;
        nsr_nbr_qad_qid.value_namespace = name_space;
        nsr_nbr_qad_qid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid = value;
        nsr_lsa_qad_qid.value_namespace = name_space;
        nsr_lsa_qad_qid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count = value;
        nsr_nbr_qad_mdata_count.value_namespace = name_space;
        nsr_nbr_qad_mdata_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count = value;
        nsr_lsa_qad_mdata_count.value_namespace = name_space;
        nsr_lsa_qad_mdata_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count = value;
        nsr_nbr_init_sync_pend_count.value_namespace = name_space;
        nsr_nbr_init_sync_pend_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count = value;
        nsr_lsa_init_sync_pend_count.value_namespace = name_space;
        nsr_lsa_init_sync_pend_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no = value;
        nsr_nbr_seq_no.value_namespace = name_space;
        nsr_nbr_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no = value;
        nsr_intf_seq_no.value_namespace = name_space;
        nsr_intf_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant = value;
        nsr_tmr_quant.value_namespace = name_space;
        nsr_tmr_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts = value;
        nsr_conn_to_active_attempts.value_namespace = name_space;
        nsr_conn_to_active_attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails = value;
        nsr_conn_to_active_fails.value_namespace = name_space;
        nsr_conn_to_active_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens = value;
        nsr_conn_to_active_opens.value_namespace = name_space;
        nsr_conn_to_active_opens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes = value;
        nsr_conn_to_active_closes.value_namespace = name_space;
        nsr_conn_to_active_closes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors = value;
        nsr_conn_to_active_errors.value_namespace = name_space;
        nsr_conn_to_active_errors.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-rev")
    {
        nsr_rev.yfilter = yfilter;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state.yfilter = yfilter;
    }
    if(value_path == "nsr-version")
    {
        nsr_version.yfilter = yfilter;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid.yfilter = yfilter;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version.yfilter = yfilter;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid.yfilter = yfilter;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no.yfilter = yfilter;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no.yfilter = yfilter;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-thd-sched" || name == "nsr-rtr-thd-sched" || name == "nsr-rev" || name == "nsr-fsm-state" || name == "nsr-version" || name == "nsr-nodeid" || name == "nsr-peer-version" || name == "nsr-peer-nodeid" || name == "nsr-mtu" || name == "nsr-nbr-qad-qid" || name == "nsr-lsa-qad-qid" || name == "nsr-nbr-qad-mdata-count" || name == "nsr-lsa-qad-mdata-count" || name == "nsr-nbr-init-sync-pend-count" || name == "nsr-lsa-init-sync-pend-count" || name == "nsr-nbr-seq-no" || name == "nsr-intf-seq-no" || name == "nsr-tmr-quant" || name == "nsr-conn-to-active-attempts" || name == "nsr-conn-to-active-fails" || name == "nsr-conn-to-active-opens" || name == "nsr-conn-to-active-closes" || name == "nsr-conn-to-active-errors")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrThdSched()
    :
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"}
{

    yang_name = "nsr-thd-sched"; yang_parent_name = "issu-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::~NsrThdSched()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_pulse_quant.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_tx.is_set
	|| nsr_events_rx.is_set
	|| nsr_bad_pulses_rx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulses_tx.is_set
	|| nsr_pulse_tx_fails.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nsr_pulse_quant.yfilter)
	|| ydk::is_set(nsr_events_in_q.yfilter)
	|| ydk::is_set(nsr_events_tx.yfilter)
	|| ydk::is_set(nsr_events_rx.yfilter)
	|| ydk::is_set(nsr_bad_pulses_rx.yfilter)
	|| ydk::is_set(nsr_good_pulses_rx.yfilter)
	|| ydk::is_set(nsr_pulses_tx.yfilter)
	|| ydk::is_set(nsr_pulse_tx_fails.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.yfilter)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.yfilter)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.yfilter)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.yfilter)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.yfilter)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.yfilter)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pri")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
        nsr_pulse_quant.value_namespace = name_space;
        nsr_pulse_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
        nsr_events_in_q.value_namespace = name_space;
        nsr_events_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
        nsr_events_tx.value_namespace = name_space;
        nsr_events_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
        nsr_events_rx.value_namespace = name_space;
        nsr_events_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
        nsr_bad_pulses_rx.value_namespace = name_space;
        nsr_bad_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
        nsr_good_pulses_rx.value_namespace = name_space;
        nsr_good_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
        nsr_pulses_tx.value_namespace = name_space;
        nsr_pulses_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
        nsr_pulse_tx_fails.value_namespace = name_space;
        nsr_pulse_tx_fails.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-pulse-quant" || name == "nsr-events-in-q" || name == "nsr-events-tx" || name == "nsr-events-rx" || name == "nsr-bad-pulses-rx" || name == "nsr-good-pulses-rx" || name == "nsr-pulses-tx" || name == "nsr-pulse-tx-fails")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"}
{

    yang_name = "nsr-pri"; yang_parent_name = "nsr-thd-sched"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_data() const
{
    return nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_sched_pri.yfilter)
	|| ydk::is_set(nsr_sched_quant.yfilter)
	|| ydk::is_set(nsr_sched_remain_quant.yfilter)
	|| ydk::is_set(nsr_sched_evs_in_q.yfilter)
	|| ydk::is_set(nsr_sched_max_evs.yfilter)
	|| ydk::is_set(nsr_sched_peak_q_len.yfilter)
	|| ydk::is_set(nsr_sched_evs_qd.yfilter)
	|| ydk::is_set(nsr_sched_enq_fails.yfilter)
	|| ydk::is_set(nsr_sched_evs_deqd.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.yfilter)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.yfilter)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.yfilter)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.yfilter)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.yfilter)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.yfilter)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.yfilter)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
        nsr_sched_pri.value_namespace = name_space;
        nsr_sched_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
        nsr_sched_quant.value_namespace = name_space;
        nsr_sched_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
        nsr_sched_remain_quant.value_namespace = name_space;
        nsr_sched_remain_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
        nsr_sched_evs_in_q.value_namespace = name_space;
        nsr_sched_evs_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
        nsr_sched_max_evs.value_namespace = name_space;
        nsr_sched_max_evs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
        nsr_sched_peak_q_len.value_namespace = name_space;
        nsr_sched_peak_q_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
        nsr_sched_evs_qd.value_namespace = name_space;
        nsr_sched_evs_qd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
        nsr_sched_enq_fails.value_namespace = name_space;
        nsr_sched_enq_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
        nsr_sched_evs_deqd.value_namespace = name_space;
        nsr_sched_evs_deqd.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-evs-qd" || name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrRtrThdSched()
    :
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"}
{

    yang_name = "nsr-rtr-thd-sched"; yang_parent_name = "issu-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::~NsrRtrThdSched()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_pulse_quant.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_tx.is_set
	|| nsr_events_rx.is_set
	|| nsr_bad_pulses_rx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulses_tx.is_set
	|| nsr_pulse_tx_fails.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nsr_pulse_quant.yfilter)
	|| ydk::is_set(nsr_events_in_q.yfilter)
	|| ydk::is_set(nsr_events_tx.yfilter)
	|| ydk::is_set(nsr_events_rx.yfilter)
	|| ydk::is_set(nsr_bad_pulses_rx.yfilter)
	|| ydk::is_set(nsr_good_pulses_rx.yfilter)
	|| ydk::is_set(nsr_pulses_tx.yfilter)
	|| ydk::is_set(nsr_pulse_tx_fails.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-rtr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.yfilter)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.yfilter)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.yfilter)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.yfilter)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.yfilter)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.yfilter)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pri")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
        nsr_pulse_quant.value_namespace = name_space;
        nsr_pulse_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
        nsr_events_in_q.value_namespace = name_space;
        nsr_events_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
        nsr_events_tx.value_namespace = name_space;
        nsr_events_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
        nsr_events_rx.value_namespace = name_space;
        nsr_events_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
        nsr_bad_pulses_rx.value_namespace = name_space;
        nsr_bad_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
        nsr_good_pulses_rx.value_namespace = name_space;
        nsr_good_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
        nsr_pulses_tx.value_namespace = name_space;
        nsr_pulses_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
        nsr_pulse_tx_fails.value_namespace = name_space;
        nsr_pulse_tx_fails.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-pulse-quant" || name == "nsr-events-in-q" || name == "nsr-events-tx" || name == "nsr-events-rx" || name == "nsr-bad-pulses-rx" || name == "nsr-good-pulses-rx" || name == "nsr-pulses-tx" || name == "nsr-pulse-tx-fails")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"}
{

    yang_name = "nsr-pri"; yang_parent_name = "nsr-rtr-thd-sched"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_data() const
{
    return nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_sched_pri.yfilter)
	|| ydk::is_set(nsr_sched_quant.yfilter)
	|| ydk::is_set(nsr_sched_remain_quant.yfilter)
	|| ydk::is_set(nsr_sched_evs_in_q.yfilter)
	|| ydk::is_set(nsr_sched_max_evs.yfilter)
	|| ydk::is_set(nsr_sched_peak_q_len.yfilter)
	|| ydk::is_set(nsr_sched_evs_qd.yfilter)
	|| ydk::is_set(nsr_sched_enq_fails.yfilter)
	|| ydk::is_set(nsr_sched_evs_deqd.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.yfilter)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.yfilter)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.yfilter)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.yfilter)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.yfilter)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.yfilter)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.yfilter)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
        nsr_sched_pri.value_namespace = name_space;
        nsr_sched_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
        nsr_sched_quant.value_namespace = name_space;
        nsr_sched_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
        nsr_sched_remain_quant.value_namespace = name_space;
        nsr_sched_remain_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
        nsr_sched_evs_in_q.value_namespace = name_space;
        nsr_sched_evs_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
        nsr_sched_max_evs.value_namespace = name_space;
        nsr_sched_max_evs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
        nsr_sched_peak_q_len.value_namespace = name_space;
        nsr_sched_peak_q_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
        nsr_sched_evs_qd.value_namespace = name_space;
        nsr_sched_evs_qd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
        nsr_sched_enq_fails.value_namespace = name_space;
        nsr_sched_enq_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
        nsr_sched_evs_deqd.value_namespace = name_space;
        nsr_sched_evs_deqd.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-evs-qd" || name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::RibThreadStats()
    :
    internalwq(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq>())
{
    internalwq->parent = this;

    yang_name = "rib-thread-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::~RibThreadStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::has_data() const
{
    for (std::size_t index=0; index<ribqueue.size(); index++)
    {
        if(ribqueue[index]->has_data())
            return true;
    }
    return (internalwq !=  nullptr && internalwq->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::has_operation() const
{
    for (std::size_t index=0; index<ribqueue.size(); index++)
    {
        if(ribqueue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (internalwq !=  nullptr && internalwq->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-thread-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internalwq")
    {
        if(internalwq == nullptr)
        {
            internalwq = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq>();
        }
        return internalwq;
    }

    if(child_yang_name == "ribqueue")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue>();
        c->parent = this;
        ribqueue.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(internalwq != nullptr)
    {
        children["internalwq"] = internalwq;
    }

    count = 0;
    for (auto const & c : ribqueue)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internalwq" || name == "ribqueue")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::Internalwq()
    :
    wq_thread_active{YType::boolean, "wq-thread-active"},
    wq_dqtime{YType::uint64, "wq-dqtime"},
    wqe_qtime{YType::uint64, "wqe-qtime"},
    wq_len_cur{YType::int32, "wq-len-cur"},
    wq_len_max{YType::int32, "wq-len-max"},
    wq_total_queued{YType::uint32, "wq-total-queued"},
    wq_total_dequeued{YType::uint32, "wq-total-dequeued"},
    rib_version{YType::uint32, "rib-version"},
    rib_pkts_sent{YType::uint32, "rib-pkts-sent"},
    rib_signals{YType::uint32, "rib-signals"},
    rib_send_errs{YType::uint32, "rib-send-errs"},
    rib_queue_errs{YType::uint32, "rib-queue-errs"},
    rib_pfx_limit_errs{YType::uint32, "rib-pfx-limit-errs"},
    rib_dequeue_errs{YType::uint32, "rib-dequeue-errs"},
    rib_empty_batches{YType::uint32, "rib-empty-batches"},
    rib_drop_before{YType::uint32, "rib-drop-before"},
    rib_drop_after{YType::uint32, "rib-drop-after"},
    rib_drop_conn{YType::uint32, "rib-drop-conn"},
    rib_table_not_created{YType::uint32, "rib-table-not-created"},
    priority_level{YType::str, "priority-level"},
    rib_base_clock{YType::uint64, "rib-base-clock"}
    	,
    rib_base_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime>())
{
    rib_base_time->parent = this;

    yang_name = "internalwq"; yang_parent_name = "rib-thread-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::~Internalwq()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::has_data() const
{
    return wq_thread_active.is_set
	|| wq_dqtime.is_set
	|| wqe_qtime.is_set
	|| wq_len_cur.is_set
	|| wq_len_max.is_set
	|| wq_total_queued.is_set
	|| wq_total_dequeued.is_set
	|| rib_version.is_set
	|| rib_pkts_sent.is_set
	|| rib_signals.is_set
	|| rib_send_errs.is_set
	|| rib_queue_errs.is_set
	|| rib_pfx_limit_errs.is_set
	|| rib_dequeue_errs.is_set
	|| rib_empty_batches.is_set
	|| rib_drop_before.is_set
	|| rib_drop_after.is_set
	|| rib_drop_conn.is_set
	|| rib_table_not_created.is_set
	|| priority_level.is_set
	|| rib_base_clock.is_set
	|| (rib_base_time !=  nullptr && rib_base_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wq_thread_active.yfilter)
	|| ydk::is_set(wq_dqtime.yfilter)
	|| ydk::is_set(wqe_qtime.yfilter)
	|| ydk::is_set(wq_len_cur.yfilter)
	|| ydk::is_set(wq_len_max.yfilter)
	|| ydk::is_set(wq_total_queued.yfilter)
	|| ydk::is_set(wq_total_dequeued.yfilter)
	|| ydk::is_set(rib_version.yfilter)
	|| ydk::is_set(rib_pkts_sent.yfilter)
	|| ydk::is_set(rib_signals.yfilter)
	|| ydk::is_set(rib_send_errs.yfilter)
	|| ydk::is_set(rib_queue_errs.yfilter)
	|| ydk::is_set(rib_pfx_limit_errs.yfilter)
	|| ydk::is_set(rib_dequeue_errs.yfilter)
	|| ydk::is_set(rib_empty_batches.yfilter)
	|| ydk::is_set(rib_drop_before.yfilter)
	|| ydk::is_set(rib_drop_after.yfilter)
	|| ydk::is_set(rib_drop_conn.yfilter)
	|| ydk::is_set(rib_table_not_created.yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(rib_base_clock.yfilter)
	|| (rib_base_time !=  nullptr && rib_base_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internalwq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wq_thread_active.is_set || is_set(wq_thread_active.yfilter)) leaf_name_data.push_back(wq_thread_active.get_name_leafdata());
    if (wq_dqtime.is_set || is_set(wq_dqtime.yfilter)) leaf_name_data.push_back(wq_dqtime.get_name_leafdata());
    if (wqe_qtime.is_set || is_set(wqe_qtime.yfilter)) leaf_name_data.push_back(wqe_qtime.get_name_leafdata());
    if (wq_len_cur.is_set || is_set(wq_len_cur.yfilter)) leaf_name_data.push_back(wq_len_cur.get_name_leafdata());
    if (wq_len_max.is_set || is_set(wq_len_max.yfilter)) leaf_name_data.push_back(wq_len_max.get_name_leafdata());
    if (wq_total_queued.is_set || is_set(wq_total_queued.yfilter)) leaf_name_data.push_back(wq_total_queued.get_name_leafdata());
    if (wq_total_dequeued.is_set || is_set(wq_total_dequeued.yfilter)) leaf_name_data.push_back(wq_total_dequeued.get_name_leafdata());
    if (rib_version.is_set || is_set(rib_version.yfilter)) leaf_name_data.push_back(rib_version.get_name_leafdata());
    if (rib_pkts_sent.is_set || is_set(rib_pkts_sent.yfilter)) leaf_name_data.push_back(rib_pkts_sent.get_name_leafdata());
    if (rib_signals.is_set || is_set(rib_signals.yfilter)) leaf_name_data.push_back(rib_signals.get_name_leafdata());
    if (rib_send_errs.is_set || is_set(rib_send_errs.yfilter)) leaf_name_data.push_back(rib_send_errs.get_name_leafdata());
    if (rib_queue_errs.is_set || is_set(rib_queue_errs.yfilter)) leaf_name_data.push_back(rib_queue_errs.get_name_leafdata());
    if (rib_pfx_limit_errs.is_set || is_set(rib_pfx_limit_errs.yfilter)) leaf_name_data.push_back(rib_pfx_limit_errs.get_name_leafdata());
    if (rib_dequeue_errs.is_set || is_set(rib_dequeue_errs.yfilter)) leaf_name_data.push_back(rib_dequeue_errs.get_name_leafdata());
    if (rib_empty_batches.is_set || is_set(rib_empty_batches.yfilter)) leaf_name_data.push_back(rib_empty_batches.get_name_leafdata());
    if (rib_drop_before.is_set || is_set(rib_drop_before.yfilter)) leaf_name_data.push_back(rib_drop_before.get_name_leafdata());
    if (rib_drop_after.is_set || is_set(rib_drop_after.yfilter)) leaf_name_data.push_back(rib_drop_after.get_name_leafdata());
    if (rib_drop_conn.is_set || is_set(rib_drop_conn.yfilter)) leaf_name_data.push_back(rib_drop_conn.get_name_leafdata());
    if (rib_table_not_created.is_set || is_set(rib_table_not_created.yfilter)) leaf_name_data.push_back(rib_table_not_created.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (rib_base_clock.is_set || is_set(rib_base_clock.yfilter)) leaf_name_data.push_back(rib_base_clock.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-base-time")
    {
        if(rib_base_time == nullptr)
        {
            rib_base_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime>();
        }
        return rib_base_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rib_base_time != nullptr)
    {
        children["rib-base-time"] = rib_base_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wq-thread-active")
    {
        wq_thread_active = value;
        wq_thread_active.value_namespace = name_space;
        wq_thread_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime = value;
        wq_dqtime.value_namespace = name_space;
        wq_dqtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime = value;
        wqe_qtime.value_namespace = name_space;
        wqe_qtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur = value;
        wq_len_cur.value_namespace = name_space;
        wq_len_cur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max = value;
        wq_len_max.value_namespace = name_space;
        wq_len_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued = value;
        wq_total_queued.value_namespace = name_space;
        wq_total_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued = value;
        wq_total_dequeued.value_namespace = name_space;
        wq_total_dequeued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-version")
    {
        rib_version = value;
        rib_version.value_namespace = name_space;
        rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent = value;
        rib_pkts_sent.value_namespace = name_space;
        rib_pkts_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-signals")
    {
        rib_signals = value;
        rib_signals.value_namespace = name_space;
        rib_signals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs = value;
        rib_send_errs.value_namespace = name_space;
        rib_send_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs = value;
        rib_queue_errs.value_namespace = name_space;
        rib_queue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs = value;
        rib_pfx_limit_errs.value_namespace = name_space;
        rib_pfx_limit_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs = value;
        rib_dequeue_errs.value_namespace = name_space;
        rib_dequeue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches = value;
        rib_empty_batches.value_namespace = name_space;
        rib_empty_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before = value;
        rib_drop_before.value_namespace = name_space;
        rib_drop_before.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after = value;
        rib_drop_after.value_namespace = name_space;
        rib_drop_after.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn = value;
        rib_drop_conn.value_namespace = name_space;
        rib_drop_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created = value;
        rib_table_not_created.value_namespace = name_space;
        rib_table_not_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock = value;
        rib_base_clock.value_namespace = name_space;
        rib_base_clock.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wq-thread-active")
    {
        wq_thread_active.yfilter = yfilter;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime.yfilter = yfilter;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime.yfilter = yfilter;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur.yfilter = yfilter;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max.yfilter = yfilter;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued.yfilter = yfilter;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued.yfilter = yfilter;
    }
    if(value_path == "rib-version")
    {
        rib_version.yfilter = yfilter;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent.yfilter = yfilter;
    }
    if(value_path == "rib-signals")
    {
        rib_signals.yfilter = yfilter;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs.yfilter = yfilter;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs.yfilter = yfilter;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches.yfilter = yfilter;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before.yfilter = yfilter;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after.yfilter = yfilter;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn.yfilter = yfilter;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created.yfilter = yfilter;
    }
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rib-base-time" || name == "wq-thread-active" || name == "wq-dqtime" || name == "wqe-qtime" || name == "wq-len-cur" || name == "wq-len-max" || name == "wq-total-queued" || name == "wq-total-dequeued" || name == "rib-version" || name == "rib-pkts-sent" || name == "rib-signals" || name == "rib-send-errs" || name == "rib-queue-errs" || name == "rib-pfx-limit-errs" || name == "rib-dequeue-errs" || name == "rib-empty-batches" || name == "rib-drop-before" || name == "rib-drop-after" || name == "rib-drop-conn" || name == "rib-table-not-created" || name == "priority-level" || name == "rib-base-clock")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::RibBaseTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "rib-base-time"; yang_parent_name = "internalwq"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::~RibBaseTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-base-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::Ribqueue()
    :
    wq_thread_active{YType::boolean, "wq-thread-active"},
    wq_dqtime{YType::uint64, "wq-dqtime"},
    wqe_qtime{YType::uint64, "wqe-qtime"},
    wq_len_cur{YType::int32, "wq-len-cur"},
    wq_len_max{YType::int32, "wq-len-max"},
    wq_total_queued{YType::uint32, "wq-total-queued"},
    wq_total_dequeued{YType::uint32, "wq-total-dequeued"},
    rib_version{YType::uint32, "rib-version"},
    rib_pkts_sent{YType::uint32, "rib-pkts-sent"},
    rib_signals{YType::uint32, "rib-signals"},
    rib_send_errs{YType::uint32, "rib-send-errs"},
    rib_queue_errs{YType::uint32, "rib-queue-errs"},
    rib_pfx_limit_errs{YType::uint32, "rib-pfx-limit-errs"},
    rib_dequeue_errs{YType::uint32, "rib-dequeue-errs"},
    rib_empty_batches{YType::uint32, "rib-empty-batches"},
    rib_drop_before{YType::uint32, "rib-drop-before"},
    rib_drop_after{YType::uint32, "rib-drop-after"},
    rib_drop_conn{YType::uint32, "rib-drop-conn"},
    rib_table_not_created{YType::uint32, "rib-table-not-created"},
    priority_level{YType::str, "priority-level"},
    rib_base_clock{YType::uint64, "rib-base-clock"}
    	,
    rib_base_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime>())
{
    rib_base_time->parent = this;

    yang_name = "ribqueue"; yang_parent_name = "rib-thread-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::~Ribqueue()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::has_data() const
{
    return wq_thread_active.is_set
	|| wq_dqtime.is_set
	|| wqe_qtime.is_set
	|| wq_len_cur.is_set
	|| wq_len_max.is_set
	|| wq_total_queued.is_set
	|| wq_total_dequeued.is_set
	|| rib_version.is_set
	|| rib_pkts_sent.is_set
	|| rib_signals.is_set
	|| rib_send_errs.is_set
	|| rib_queue_errs.is_set
	|| rib_pfx_limit_errs.is_set
	|| rib_dequeue_errs.is_set
	|| rib_empty_batches.is_set
	|| rib_drop_before.is_set
	|| rib_drop_after.is_set
	|| rib_drop_conn.is_set
	|| rib_table_not_created.is_set
	|| priority_level.is_set
	|| rib_base_clock.is_set
	|| (rib_base_time !=  nullptr && rib_base_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wq_thread_active.yfilter)
	|| ydk::is_set(wq_dqtime.yfilter)
	|| ydk::is_set(wqe_qtime.yfilter)
	|| ydk::is_set(wq_len_cur.yfilter)
	|| ydk::is_set(wq_len_max.yfilter)
	|| ydk::is_set(wq_total_queued.yfilter)
	|| ydk::is_set(wq_total_dequeued.yfilter)
	|| ydk::is_set(rib_version.yfilter)
	|| ydk::is_set(rib_pkts_sent.yfilter)
	|| ydk::is_set(rib_signals.yfilter)
	|| ydk::is_set(rib_send_errs.yfilter)
	|| ydk::is_set(rib_queue_errs.yfilter)
	|| ydk::is_set(rib_pfx_limit_errs.yfilter)
	|| ydk::is_set(rib_dequeue_errs.yfilter)
	|| ydk::is_set(rib_empty_batches.yfilter)
	|| ydk::is_set(rib_drop_before.yfilter)
	|| ydk::is_set(rib_drop_after.yfilter)
	|| ydk::is_set(rib_drop_conn.yfilter)
	|| ydk::is_set(rib_table_not_created.yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(rib_base_clock.yfilter)
	|| (rib_base_time !=  nullptr && rib_base_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribqueue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wq_thread_active.is_set || is_set(wq_thread_active.yfilter)) leaf_name_data.push_back(wq_thread_active.get_name_leafdata());
    if (wq_dqtime.is_set || is_set(wq_dqtime.yfilter)) leaf_name_data.push_back(wq_dqtime.get_name_leafdata());
    if (wqe_qtime.is_set || is_set(wqe_qtime.yfilter)) leaf_name_data.push_back(wqe_qtime.get_name_leafdata());
    if (wq_len_cur.is_set || is_set(wq_len_cur.yfilter)) leaf_name_data.push_back(wq_len_cur.get_name_leafdata());
    if (wq_len_max.is_set || is_set(wq_len_max.yfilter)) leaf_name_data.push_back(wq_len_max.get_name_leafdata());
    if (wq_total_queued.is_set || is_set(wq_total_queued.yfilter)) leaf_name_data.push_back(wq_total_queued.get_name_leafdata());
    if (wq_total_dequeued.is_set || is_set(wq_total_dequeued.yfilter)) leaf_name_data.push_back(wq_total_dequeued.get_name_leafdata());
    if (rib_version.is_set || is_set(rib_version.yfilter)) leaf_name_data.push_back(rib_version.get_name_leafdata());
    if (rib_pkts_sent.is_set || is_set(rib_pkts_sent.yfilter)) leaf_name_data.push_back(rib_pkts_sent.get_name_leafdata());
    if (rib_signals.is_set || is_set(rib_signals.yfilter)) leaf_name_data.push_back(rib_signals.get_name_leafdata());
    if (rib_send_errs.is_set || is_set(rib_send_errs.yfilter)) leaf_name_data.push_back(rib_send_errs.get_name_leafdata());
    if (rib_queue_errs.is_set || is_set(rib_queue_errs.yfilter)) leaf_name_data.push_back(rib_queue_errs.get_name_leafdata());
    if (rib_pfx_limit_errs.is_set || is_set(rib_pfx_limit_errs.yfilter)) leaf_name_data.push_back(rib_pfx_limit_errs.get_name_leafdata());
    if (rib_dequeue_errs.is_set || is_set(rib_dequeue_errs.yfilter)) leaf_name_data.push_back(rib_dequeue_errs.get_name_leafdata());
    if (rib_empty_batches.is_set || is_set(rib_empty_batches.yfilter)) leaf_name_data.push_back(rib_empty_batches.get_name_leafdata());
    if (rib_drop_before.is_set || is_set(rib_drop_before.yfilter)) leaf_name_data.push_back(rib_drop_before.get_name_leafdata());
    if (rib_drop_after.is_set || is_set(rib_drop_after.yfilter)) leaf_name_data.push_back(rib_drop_after.get_name_leafdata());
    if (rib_drop_conn.is_set || is_set(rib_drop_conn.yfilter)) leaf_name_data.push_back(rib_drop_conn.get_name_leafdata());
    if (rib_table_not_created.is_set || is_set(rib_table_not_created.yfilter)) leaf_name_data.push_back(rib_table_not_created.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (rib_base_clock.is_set || is_set(rib_base_clock.yfilter)) leaf_name_data.push_back(rib_base_clock.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-base-time")
    {
        if(rib_base_time == nullptr)
        {
            rib_base_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime>();
        }
        return rib_base_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rib_base_time != nullptr)
    {
        children["rib-base-time"] = rib_base_time;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wq-thread-active")
    {
        wq_thread_active = value;
        wq_thread_active.value_namespace = name_space;
        wq_thread_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime = value;
        wq_dqtime.value_namespace = name_space;
        wq_dqtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime = value;
        wqe_qtime.value_namespace = name_space;
        wqe_qtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur = value;
        wq_len_cur.value_namespace = name_space;
        wq_len_cur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max = value;
        wq_len_max.value_namespace = name_space;
        wq_len_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued = value;
        wq_total_queued.value_namespace = name_space;
        wq_total_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued = value;
        wq_total_dequeued.value_namespace = name_space;
        wq_total_dequeued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-version")
    {
        rib_version = value;
        rib_version.value_namespace = name_space;
        rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent = value;
        rib_pkts_sent.value_namespace = name_space;
        rib_pkts_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-signals")
    {
        rib_signals = value;
        rib_signals.value_namespace = name_space;
        rib_signals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs = value;
        rib_send_errs.value_namespace = name_space;
        rib_send_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs = value;
        rib_queue_errs.value_namespace = name_space;
        rib_queue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs = value;
        rib_pfx_limit_errs.value_namespace = name_space;
        rib_pfx_limit_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs = value;
        rib_dequeue_errs.value_namespace = name_space;
        rib_dequeue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches = value;
        rib_empty_batches.value_namespace = name_space;
        rib_empty_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before = value;
        rib_drop_before.value_namespace = name_space;
        rib_drop_before.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after = value;
        rib_drop_after.value_namespace = name_space;
        rib_drop_after.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn = value;
        rib_drop_conn.value_namespace = name_space;
        rib_drop_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created = value;
        rib_table_not_created.value_namespace = name_space;
        rib_table_not_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock = value;
        rib_base_clock.value_namespace = name_space;
        rib_base_clock.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wq-thread-active")
    {
        wq_thread_active.yfilter = yfilter;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime.yfilter = yfilter;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime.yfilter = yfilter;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur.yfilter = yfilter;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max.yfilter = yfilter;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued.yfilter = yfilter;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued.yfilter = yfilter;
    }
    if(value_path == "rib-version")
    {
        rib_version.yfilter = yfilter;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent.yfilter = yfilter;
    }
    if(value_path == "rib-signals")
    {
        rib_signals.yfilter = yfilter;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs.yfilter = yfilter;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs.yfilter = yfilter;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches.yfilter = yfilter;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before.yfilter = yfilter;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after.yfilter = yfilter;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn.yfilter = yfilter;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created.yfilter = yfilter;
    }
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rib-base-time" || name == "wq-thread-active" || name == "wq-dqtime" || name == "wqe-qtime" || name == "wq-len-cur" || name == "wq-len-max" || name == "wq-total-queued" || name == "wq-total-dequeued" || name == "rib-version" || name == "rib-pkts-sent" || name == "rib-signals" || name == "rib-send-errs" || name == "rib-queue-errs" || name == "rib-pfx-limit-errs" || name == "rib-dequeue-errs" || name == "rib-empty-batches" || name == "rib-drop-before" || name == "rib-drop-after" || name == "rib-drop-conn" || name == "rib-table-not-created" || name == "priority-level" || name == "rib-base-clock")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::RibBaseTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "rib-base-time"; yang_parent_name = "ribqueue"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::~RibBaseTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-base-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NsrPlStats()
{

    yang_name = "nsr-pl-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::~NsrPlStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::has_data() const
{
    for (std::size_t index=0; index<ncd_pri.size(); index++)
    {
        if(ncd_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::has_operation() const
{
    for (std::size_t index=0; index<ncd_pri.size(); index++)
    {
        if(ncd_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ncd-pri")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri>();
        c->parent = this;
        ncd_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ncd_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ncd-pri")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NcdPri()
{

    yang_name = "ncd-pri"; yang_parent_name = "nsr-pl-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::~NcdPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::has_data() const
{
    for (std::size_t index=0; index<num_sent.size(); index++)
    {
        if(num_sent[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_recv.size(); index++)
    {
        if(num_recv[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::has_operation() const
{
    for (std::size_t index=0; index<num_sent.size(); index++)
    {
        if(num_sent[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_recv.size(); index++)
    {
        if(num_recv[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncd-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "num-sent")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent>();
        c->parent = this;
        num_sent.push_back(c);
        return c;
    }

    if(child_yang_name == "num-recv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv>();
        c->parent = this;
        num_recv.push_back(c);
        return c;
    }

    if(child_yang_name == "num-sent-drop")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop>();
        c->parent = this;
        num_sent_drop.push_back(c);
        return c;
    }

    if(child_yang_name == "num-recv-drop")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop>();
        c->parent = this;
        num_recv_drop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : num_sent)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : num_recv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : num_sent_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : num_recv_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-sent" || name == "num-recv" || name == "num-sent-drop" || name == "num-recv-drop")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::NumSent()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "num-sent"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::~NumSent()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::NumRecv()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "num-recv"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::~NumRecv()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NumSentDrop()
{

    yang_name = "num-sent-drop"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::~NumSentDrop()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_data() const
{
    for (std::size_t index=0; index<nsr_pl_send_drop_array.size(); index++)
    {
        if(nsr_pl_send_drop_array[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_operation() const
{
    for (std::size_t index=0; index<nsr_pl_send_drop_array.size(); index++)
    {
        if(nsr_pl_send_drop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pl-send-drop-array")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray>();
        c->parent = this;
        nsr_pl_send_drop_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nsr_pl_send_drop_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pl-send-drop-array")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::NsrPlSendDropArray()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "nsr-pl-send-drop-array"; yang_parent_name = "num-sent-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::~NsrPlSendDropArray()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-send-drop-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NumRecvDrop()
{

    yang_name = "num-recv-drop"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::~NumRecvDrop()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_data() const
{
    for (std::size_t index=0; index<nsr_pl_recv_drop_array.size(); index++)
    {
        if(nsr_pl_recv_drop_array[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_operation() const
{
    for (std::size_t index=0; index<nsr_pl_recv_drop_array.size(); index++)
    {
        if(nsr_pl_recv_drop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pl-recv-drop-array")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray>();
        c->parent = this;
        nsr_pl_recv_drop_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nsr_pl_recv_drop_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pl-recv-drop-array")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::NsrPlRecvDropArray()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "nsr-pl-recv-drop-array"; yang_parent_name = "num-recv-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::~NsrPlRecvDropArray()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-recv-drop-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrStats()
    :
    nsr_rev{YType::int32, "nsr-rev"},
    nsr_fsm_state{YType::int32, "nsr-fsm-state"},
    nsr_version{YType::uint32, "nsr-version"},
    nsr_nodeid{YType::uint32, "nsr-nodeid"},
    nsr_peer_version{YType::uint32, "nsr-peer-version"},
    nsr_peer_nodeid{YType::uint32, "nsr-peer-nodeid"},
    nsr_mtu{YType::uint32, "nsr-mtu"},
    nsr_nbr_qad_qid{YType::uint32, "nsr-nbr-qad-qid"},
    nsr_lsa_qad_qid{YType::uint32, "nsr-lsa-qad-qid"},
    nsr_nbr_qad_mdata_count{YType::uint32, "nsr-nbr-qad-mdata-count"},
    nsr_lsa_qad_mdata_count{YType::uint32, "nsr-lsa-qad-mdata-count"},
    nsr_nbr_init_sync_pend_count{YType::int32, "nsr-nbr-init-sync-pend-count"},
    nsr_lsa_init_sync_pend_count{YType::int32, "nsr-lsa-init-sync-pend-count"},
    nsr_nbr_seq_no{YType::uint32, "nsr-nbr-seq-no"},
    nsr_intf_seq_no{YType::uint32, "nsr-intf-seq-no"},
    nsr_tmr_quant{YType::int32, "nsr-tmr-quant"},
    nsr_conn_to_active_attempts{YType::uint64, "nsr-conn-to-active-attempts"},
    nsr_conn_to_active_fails{YType::uint64, "nsr-conn-to-active-fails"},
    nsr_conn_to_active_opens{YType::uint64, "nsr-conn-to-active-opens"},
    nsr_conn_to_active_closes{YType::uint64, "nsr-conn-to-active-closes"},
    nsr_conn_to_active_errors{YType::uint64, "nsr-conn-to-active-errors"}
    	,
    nsr_thd_sched(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched>())
	,nsr_rtr_thd_sched(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched>())
{
    nsr_thd_sched->parent = this;
    nsr_rtr_thd_sched->parent = this;

    yang_name = "nsr-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::~NsrStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::has_data() const
{
    return nsr_rev.is_set
	|| nsr_fsm_state.is_set
	|| nsr_version.is_set
	|| nsr_nodeid.is_set
	|| nsr_peer_version.is_set
	|| nsr_peer_nodeid.is_set
	|| nsr_mtu.is_set
	|| nsr_nbr_qad_qid.is_set
	|| nsr_lsa_qad_qid.is_set
	|| nsr_nbr_qad_mdata_count.is_set
	|| nsr_lsa_qad_mdata_count.is_set
	|| nsr_nbr_init_sync_pend_count.is_set
	|| nsr_lsa_init_sync_pend_count.is_set
	|| nsr_nbr_seq_no.is_set
	|| nsr_intf_seq_no.is_set
	|| nsr_tmr_quant.is_set
	|| nsr_conn_to_active_attempts.is_set
	|| nsr_conn_to_active_fails.is_set
	|| nsr_conn_to_active_opens.is_set
	|| nsr_conn_to_active_closes.is_set
	|| nsr_conn_to_active_errors.is_set
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_data())
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_rev.yfilter)
	|| ydk::is_set(nsr_fsm_state.yfilter)
	|| ydk::is_set(nsr_version.yfilter)
	|| ydk::is_set(nsr_nodeid.yfilter)
	|| ydk::is_set(nsr_peer_version.yfilter)
	|| ydk::is_set(nsr_peer_nodeid.yfilter)
	|| ydk::is_set(nsr_mtu.yfilter)
	|| ydk::is_set(nsr_nbr_qad_qid.yfilter)
	|| ydk::is_set(nsr_lsa_qad_qid.yfilter)
	|| ydk::is_set(nsr_nbr_qad_mdata_count.yfilter)
	|| ydk::is_set(nsr_lsa_qad_mdata_count.yfilter)
	|| ydk::is_set(nsr_nbr_init_sync_pend_count.yfilter)
	|| ydk::is_set(nsr_lsa_init_sync_pend_count.yfilter)
	|| ydk::is_set(nsr_nbr_seq_no.yfilter)
	|| ydk::is_set(nsr_intf_seq_no.yfilter)
	|| ydk::is_set(nsr_tmr_quant.yfilter)
	|| ydk::is_set(nsr_conn_to_active_attempts.yfilter)
	|| ydk::is_set(nsr_conn_to_active_fails.yfilter)
	|| ydk::is_set(nsr_conn_to_active_opens.yfilter)
	|| ydk::is_set(nsr_conn_to_active_closes.yfilter)
	|| ydk::is_set(nsr_conn_to_active_errors.yfilter)
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_operation())
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_rev.is_set || is_set(nsr_rev.yfilter)) leaf_name_data.push_back(nsr_rev.get_name_leafdata());
    if (nsr_fsm_state.is_set || is_set(nsr_fsm_state.yfilter)) leaf_name_data.push_back(nsr_fsm_state.get_name_leafdata());
    if (nsr_version.is_set || is_set(nsr_version.yfilter)) leaf_name_data.push_back(nsr_version.get_name_leafdata());
    if (nsr_nodeid.is_set || is_set(nsr_nodeid.yfilter)) leaf_name_data.push_back(nsr_nodeid.get_name_leafdata());
    if (nsr_peer_version.is_set || is_set(nsr_peer_version.yfilter)) leaf_name_data.push_back(nsr_peer_version.get_name_leafdata());
    if (nsr_peer_nodeid.is_set || is_set(nsr_peer_nodeid.yfilter)) leaf_name_data.push_back(nsr_peer_nodeid.get_name_leafdata());
    if (nsr_mtu.is_set || is_set(nsr_mtu.yfilter)) leaf_name_data.push_back(nsr_mtu.get_name_leafdata());
    if (nsr_nbr_qad_qid.is_set || is_set(nsr_nbr_qad_qid.yfilter)) leaf_name_data.push_back(nsr_nbr_qad_qid.get_name_leafdata());
    if (nsr_lsa_qad_qid.is_set || is_set(nsr_lsa_qad_qid.yfilter)) leaf_name_data.push_back(nsr_lsa_qad_qid.get_name_leafdata());
    if (nsr_nbr_qad_mdata_count.is_set || is_set(nsr_nbr_qad_mdata_count.yfilter)) leaf_name_data.push_back(nsr_nbr_qad_mdata_count.get_name_leafdata());
    if (nsr_lsa_qad_mdata_count.is_set || is_set(nsr_lsa_qad_mdata_count.yfilter)) leaf_name_data.push_back(nsr_lsa_qad_mdata_count.get_name_leafdata());
    if (nsr_nbr_init_sync_pend_count.is_set || is_set(nsr_nbr_init_sync_pend_count.yfilter)) leaf_name_data.push_back(nsr_nbr_init_sync_pend_count.get_name_leafdata());
    if (nsr_lsa_init_sync_pend_count.is_set || is_set(nsr_lsa_init_sync_pend_count.yfilter)) leaf_name_data.push_back(nsr_lsa_init_sync_pend_count.get_name_leafdata());
    if (nsr_nbr_seq_no.is_set || is_set(nsr_nbr_seq_no.yfilter)) leaf_name_data.push_back(nsr_nbr_seq_no.get_name_leafdata());
    if (nsr_intf_seq_no.is_set || is_set(nsr_intf_seq_no.yfilter)) leaf_name_data.push_back(nsr_intf_seq_no.get_name_leafdata());
    if (nsr_tmr_quant.is_set || is_set(nsr_tmr_quant.yfilter)) leaf_name_data.push_back(nsr_tmr_quant.get_name_leafdata());
    if (nsr_conn_to_active_attempts.is_set || is_set(nsr_conn_to_active_attempts.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_attempts.get_name_leafdata());
    if (nsr_conn_to_active_fails.is_set || is_set(nsr_conn_to_active_fails.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_fails.get_name_leafdata());
    if (nsr_conn_to_active_opens.is_set || is_set(nsr_conn_to_active_opens.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_opens.get_name_leafdata());
    if (nsr_conn_to_active_closes.is_set || is_set(nsr_conn_to_active_closes.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_closes.get_name_leafdata());
    if (nsr_conn_to_active_errors.is_set || is_set(nsr_conn_to_active_errors.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-thd-sched")
    {
        if(nsr_thd_sched == nullptr)
        {
            nsr_thd_sched = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched>();
        }
        return nsr_thd_sched;
    }

    if(child_yang_name == "nsr-rtr-thd-sched")
    {
        if(nsr_rtr_thd_sched == nullptr)
        {
            nsr_rtr_thd_sched = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched>();
        }
        return nsr_rtr_thd_sched;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nsr_thd_sched != nullptr)
    {
        children["nsr-thd-sched"] = nsr_thd_sched;
    }

    if(nsr_rtr_thd_sched != nullptr)
    {
        children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-rev")
    {
        nsr_rev = value;
        nsr_rev.value_namespace = name_space;
        nsr_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state = value;
        nsr_fsm_state.value_namespace = name_space;
        nsr_fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-version")
    {
        nsr_version = value;
        nsr_version.value_namespace = name_space;
        nsr_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid = value;
        nsr_nodeid.value_namespace = name_space;
        nsr_nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version = value;
        nsr_peer_version.value_namespace = name_space;
        nsr_peer_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid = value;
        nsr_peer_nodeid.value_namespace = name_space;
        nsr_peer_nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu = value;
        nsr_mtu.value_namespace = name_space;
        nsr_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid = value;
        nsr_nbr_qad_qid.value_namespace = name_space;
        nsr_nbr_qad_qid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid = value;
        nsr_lsa_qad_qid.value_namespace = name_space;
        nsr_lsa_qad_qid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count = value;
        nsr_nbr_qad_mdata_count.value_namespace = name_space;
        nsr_nbr_qad_mdata_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count = value;
        nsr_lsa_qad_mdata_count.value_namespace = name_space;
        nsr_lsa_qad_mdata_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count = value;
        nsr_nbr_init_sync_pend_count.value_namespace = name_space;
        nsr_nbr_init_sync_pend_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count = value;
        nsr_lsa_init_sync_pend_count.value_namespace = name_space;
        nsr_lsa_init_sync_pend_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no = value;
        nsr_nbr_seq_no.value_namespace = name_space;
        nsr_nbr_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no = value;
        nsr_intf_seq_no.value_namespace = name_space;
        nsr_intf_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant = value;
        nsr_tmr_quant.value_namespace = name_space;
        nsr_tmr_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts = value;
        nsr_conn_to_active_attempts.value_namespace = name_space;
        nsr_conn_to_active_attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails = value;
        nsr_conn_to_active_fails.value_namespace = name_space;
        nsr_conn_to_active_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens = value;
        nsr_conn_to_active_opens.value_namespace = name_space;
        nsr_conn_to_active_opens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes = value;
        nsr_conn_to_active_closes.value_namespace = name_space;
        nsr_conn_to_active_closes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors = value;
        nsr_conn_to_active_errors.value_namespace = name_space;
        nsr_conn_to_active_errors.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-rev")
    {
        nsr_rev.yfilter = yfilter;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state.yfilter = yfilter;
    }
    if(value_path == "nsr-version")
    {
        nsr_version.yfilter = yfilter;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid.yfilter = yfilter;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version.yfilter = yfilter;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid.yfilter = yfilter;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no.yfilter = yfilter;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no.yfilter = yfilter;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-thd-sched" || name == "nsr-rtr-thd-sched" || name == "nsr-rev" || name == "nsr-fsm-state" || name == "nsr-version" || name == "nsr-nodeid" || name == "nsr-peer-version" || name == "nsr-peer-nodeid" || name == "nsr-mtu" || name == "nsr-nbr-qad-qid" || name == "nsr-lsa-qad-qid" || name == "nsr-nbr-qad-mdata-count" || name == "nsr-lsa-qad-mdata-count" || name == "nsr-nbr-init-sync-pend-count" || name == "nsr-lsa-init-sync-pend-count" || name == "nsr-nbr-seq-no" || name == "nsr-intf-seq-no" || name == "nsr-tmr-quant" || name == "nsr-conn-to-active-attempts" || name == "nsr-conn-to-active-fails" || name == "nsr-conn-to-active-opens" || name == "nsr-conn-to-active-closes" || name == "nsr-conn-to-active-errors")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrThdSched()
    :
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"}
{

    yang_name = "nsr-thd-sched"; yang_parent_name = "nsr-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::~NsrThdSched()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_pulse_quant.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_tx.is_set
	|| nsr_events_rx.is_set
	|| nsr_bad_pulses_rx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulses_tx.is_set
	|| nsr_pulse_tx_fails.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nsr_pulse_quant.yfilter)
	|| ydk::is_set(nsr_events_in_q.yfilter)
	|| ydk::is_set(nsr_events_tx.yfilter)
	|| ydk::is_set(nsr_events_rx.yfilter)
	|| ydk::is_set(nsr_bad_pulses_rx.yfilter)
	|| ydk::is_set(nsr_good_pulses_rx.yfilter)
	|| ydk::is_set(nsr_pulses_tx.yfilter)
	|| ydk::is_set(nsr_pulse_tx_fails.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.yfilter)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.yfilter)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.yfilter)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.yfilter)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.yfilter)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.yfilter)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pri")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
        nsr_pulse_quant.value_namespace = name_space;
        nsr_pulse_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
        nsr_events_in_q.value_namespace = name_space;
        nsr_events_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
        nsr_events_tx.value_namespace = name_space;
        nsr_events_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
        nsr_events_rx.value_namespace = name_space;
        nsr_events_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
        nsr_bad_pulses_rx.value_namespace = name_space;
        nsr_bad_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
        nsr_good_pulses_rx.value_namespace = name_space;
        nsr_good_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
        nsr_pulses_tx.value_namespace = name_space;
        nsr_pulses_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
        nsr_pulse_tx_fails.value_namespace = name_space;
        nsr_pulse_tx_fails.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-pulse-quant" || name == "nsr-events-in-q" || name == "nsr-events-tx" || name == "nsr-events-rx" || name == "nsr-bad-pulses-rx" || name == "nsr-good-pulses-rx" || name == "nsr-pulses-tx" || name == "nsr-pulse-tx-fails")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"}
{

    yang_name = "nsr-pri"; yang_parent_name = "nsr-thd-sched"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_data() const
{
    return nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_sched_pri.yfilter)
	|| ydk::is_set(nsr_sched_quant.yfilter)
	|| ydk::is_set(nsr_sched_remain_quant.yfilter)
	|| ydk::is_set(nsr_sched_evs_in_q.yfilter)
	|| ydk::is_set(nsr_sched_max_evs.yfilter)
	|| ydk::is_set(nsr_sched_peak_q_len.yfilter)
	|| ydk::is_set(nsr_sched_evs_qd.yfilter)
	|| ydk::is_set(nsr_sched_enq_fails.yfilter)
	|| ydk::is_set(nsr_sched_evs_deqd.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.yfilter)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.yfilter)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.yfilter)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.yfilter)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.yfilter)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.yfilter)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.yfilter)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
        nsr_sched_pri.value_namespace = name_space;
        nsr_sched_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
        nsr_sched_quant.value_namespace = name_space;
        nsr_sched_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
        nsr_sched_remain_quant.value_namespace = name_space;
        nsr_sched_remain_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
        nsr_sched_evs_in_q.value_namespace = name_space;
        nsr_sched_evs_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
        nsr_sched_max_evs.value_namespace = name_space;
        nsr_sched_max_evs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
        nsr_sched_peak_q_len.value_namespace = name_space;
        nsr_sched_peak_q_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
        nsr_sched_evs_qd.value_namespace = name_space;
        nsr_sched_evs_qd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
        nsr_sched_enq_fails.value_namespace = name_space;
        nsr_sched_enq_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
        nsr_sched_evs_deqd.value_namespace = name_space;
        nsr_sched_evs_deqd.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-evs-qd" || name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrRtrThdSched()
    :
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"}
{

    yang_name = "nsr-rtr-thd-sched"; yang_parent_name = "nsr-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::~NsrRtrThdSched()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_pulse_quant.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_tx.is_set
	|| nsr_events_rx.is_set
	|| nsr_bad_pulses_rx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulses_tx.is_set
	|| nsr_pulse_tx_fails.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nsr_pulse_quant.yfilter)
	|| ydk::is_set(nsr_events_in_q.yfilter)
	|| ydk::is_set(nsr_events_tx.yfilter)
	|| ydk::is_set(nsr_events_rx.yfilter)
	|| ydk::is_set(nsr_bad_pulses_rx.yfilter)
	|| ydk::is_set(nsr_good_pulses_rx.yfilter)
	|| ydk::is_set(nsr_pulses_tx.yfilter)
	|| ydk::is_set(nsr_pulse_tx_fails.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-rtr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.yfilter)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.yfilter)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.yfilter)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.yfilter)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.yfilter)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.yfilter)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pri")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
        nsr_pulse_quant.value_namespace = name_space;
        nsr_pulse_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
        nsr_events_in_q.value_namespace = name_space;
        nsr_events_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
        nsr_events_tx.value_namespace = name_space;
        nsr_events_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
        nsr_events_rx.value_namespace = name_space;
        nsr_events_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
        nsr_bad_pulses_rx.value_namespace = name_space;
        nsr_bad_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
        nsr_good_pulses_rx.value_namespace = name_space;
        nsr_good_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
        nsr_pulses_tx.value_namespace = name_space;
        nsr_pulses_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
        nsr_pulse_tx_fails.value_namespace = name_space;
        nsr_pulse_tx_fails.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-pulse-quant" || name == "nsr-events-in-q" || name == "nsr-events-tx" || name == "nsr-events-rx" || name == "nsr-bad-pulses-rx" || name == "nsr-good-pulses-rx" || name == "nsr-pulses-tx" || name == "nsr-pulse-tx-fails")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"}
{

    yang_name = "nsr-pri"; yang_parent_name = "nsr-rtr-thd-sched"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_data() const
{
    return nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_sched_pri.yfilter)
	|| ydk::is_set(nsr_sched_quant.yfilter)
	|| ydk::is_set(nsr_sched_remain_quant.yfilter)
	|| ydk::is_set(nsr_sched_evs_in_q.yfilter)
	|| ydk::is_set(nsr_sched_max_evs.yfilter)
	|| ydk::is_set(nsr_sched_peak_q_len.yfilter)
	|| ydk::is_set(nsr_sched_evs_qd.yfilter)
	|| ydk::is_set(nsr_sched_enq_fails.yfilter)
	|| ydk::is_set(nsr_sched_evs_deqd.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.yfilter)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.yfilter)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.yfilter)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.yfilter)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.yfilter)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.yfilter)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.yfilter)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
        nsr_sched_pri.value_namespace = name_space;
        nsr_sched_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
        nsr_sched_quant.value_namespace = name_space;
        nsr_sched_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
        nsr_sched_remain_quant.value_namespace = name_space;
        nsr_sched_remain_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
        nsr_sched_evs_in_q.value_namespace = name_space;
        nsr_sched_evs_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
        nsr_sched_max_evs.value_namespace = name_space;
        nsr_sched_max_evs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
        nsr_sched_peak_q_len.value_namespace = name_space;
        nsr_sched_peak_q_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
        nsr_sched_evs_qd.value_namespace = name_space;
        nsr_sched_evs_qd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
        nsr_sched_enq_fails.value_namespace = name_space;
        nsr_sched_enq_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
        nsr_sched_evs_deqd.value_namespace = name_space;
        nsr_sched_evs_deqd.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-evs-qd" || name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::FrrStats()
    :
    fs_paths{YType::uint32, "fs-paths"},
    fs_paths_eligible{YType::uint32, "fs-paths-eligible"},
    fs_paths_protected{YType::uint32, "fs-paths-protected"}
{

    yang_name = "frr-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::~FrrStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::has_data() const
{
    return fs_paths.is_set
	|| fs_paths_eligible.is_set
	|| fs_paths_protected.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fs_paths.yfilter)
	|| ydk::is_set(fs_paths_eligible.yfilter)
	|| ydk::is_set(fs_paths_protected.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fs_paths.is_set || is_set(fs_paths.yfilter)) leaf_name_data.push_back(fs_paths.get_name_leafdata());
    if (fs_paths_eligible.is_set || is_set(fs_paths_eligible.yfilter)) leaf_name_data.push_back(fs_paths_eligible.get_name_leafdata());
    if (fs_paths_protected.is_set || is_set(fs_paths_protected.yfilter)) leaf_name_data.push_back(fs_paths_protected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fs-paths")
    {
        fs_paths = value;
        fs_paths.value_namespace = name_space;
        fs_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fs-paths-eligible")
    {
        fs_paths_eligible = value;
        fs_paths_eligible.value_namespace = name_space;
        fs_paths_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fs-paths-protected")
    {
        fs_paths_protected = value;
        fs_paths_protected.value_namespace = name_space;
        fs_paths_protected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fs-paths")
    {
        fs_paths.yfilter = yfilter;
    }
    if(value_path == "fs-paths-eligible")
    {
        fs_paths_eligible.yfilter = yfilter;
    }
    if(value_path == "fs-paths-protected")
    {
        fs_paths_protected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fs-paths" || name == "fs-paths-eligible" || name == "fs-paths-protected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::TeStats()
    :
    te_connected{YType::boolean, "te-connected"},
    control_disconnects{YType::uint32, "control-disconnects"},
    te_disconnects{YType::uint32, "te-disconnects"},
    adj_gets{YType::uint32, "adj-gets"},
    link_floods{YType::uint32, "link-floods"},
    link_fragment_floods{YType::uint32, "link-fragment-floods"},
    lsp_gets{YType::uint32, "lsp-gets"},
    tunnel_announces{YType::uint32, "tunnel-announces"},
    total_tunnels{YType::uint32, "total-tunnels"},
    control_batch_reads{YType::uint32, "control-batch-reads"},
    control_batch_writes{YType::uint32, "control-batch-writes"},
    link_batch_reads{YType::uint32, "link-batch-reads"},
    link_batch_writes{YType::uint32, "link-batch-writes"},
    adj_changes{YType::uint32, "adj-changes"},
    fragment_deletes{YType::uint32, "fragment-deletes"},
    fragment_announces{YType::uint32, "fragment-announces"},
    data_trans_completes{YType::uint32, "data-trans-completes"},
    pce_listen{YType::uint32, "pce-listen"},
    pce_stoplisten{YType::uint32, "pce-stoplisten"},
    pce_flood{YType::uint32, "pce-flood"},
    pce_get{YType::uint32, "pce-get"},
    pce_br_lookup{YType::uint32, "pce-br-lookup"},
    pce_br_lkup_num_dests{YType::uint32, "pce-br-lkup-num-dests"},
    pce_br_resp_fails{YType::uint32, "pce-br-resp-fails"},
    pce_node_announce_batches{YType::uint32, "pce-node-announce-batches"},
    pce_node_delete_batches{YType::uint32, "pce-node-delete-batches"},
    pce_num_node_announce{YType::uint32, "pce-num-node-announce"},
    pce_num_node_delete{YType::uint32, "pce-num-node-delete"},
    pce_node_send_fails{YType::uint32, "pce-node-send-fails"},
    te_sr_path_reg_idt_recvd{YType::boolean, "te-sr-path-reg-idt-recvd"},
    te_sr_idt_sent{YType::boolean, "te-sr-idt-sent"},
    sr_num_area_enabled{YType::uint32, "sr-num-area-enabled"}
{

    yang_name = "te-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::~TeStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::has_data() const
{
    return te_connected.is_set
	|| control_disconnects.is_set
	|| te_disconnects.is_set
	|| adj_gets.is_set
	|| link_floods.is_set
	|| link_fragment_floods.is_set
	|| lsp_gets.is_set
	|| tunnel_announces.is_set
	|| total_tunnels.is_set
	|| control_batch_reads.is_set
	|| control_batch_writes.is_set
	|| link_batch_reads.is_set
	|| link_batch_writes.is_set
	|| adj_changes.is_set
	|| fragment_deletes.is_set
	|| fragment_announces.is_set
	|| data_trans_completes.is_set
	|| pce_listen.is_set
	|| pce_stoplisten.is_set
	|| pce_flood.is_set
	|| pce_get.is_set
	|| pce_br_lookup.is_set
	|| pce_br_lkup_num_dests.is_set
	|| pce_br_resp_fails.is_set
	|| pce_node_announce_batches.is_set
	|| pce_node_delete_batches.is_set
	|| pce_num_node_announce.is_set
	|| pce_num_node_delete.is_set
	|| pce_node_send_fails.is_set
	|| te_sr_path_reg_idt_recvd.is_set
	|| te_sr_idt_sent.is_set
	|| sr_num_area_enabled.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_connected.yfilter)
	|| ydk::is_set(control_disconnects.yfilter)
	|| ydk::is_set(te_disconnects.yfilter)
	|| ydk::is_set(adj_gets.yfilter)
	|| ydk::is_set(link_floods.yfilter)
	|| ydk::is_set(link_fragment_floods.yfilter)
	|| ydk::is_set(lsp_gets.yfilter)
	|| ydk::is_set(tunnel_announces.yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(control_batch_reads.yfilter)
	|| ydk::is_set(control_batch_writes.yfilter)
	|| ydk::is_set(link_batch_reads.yfilter)
	|| ydk::is_set(link_batch_writes.yfilter)
	|| ydk::is_set(adj_changes.yfilter)
	|| ydk::is_set(fragment_deletes.yfilter)
	|| ydk::is_set(fragment_announces.yfilter)
	|| ydk::is_set(data_trans_completes.yfilter)
	|| ydk::is_set(pce_listen.yfilter)
	|| ydk::is_set(pce_stoplisten.yfilter)
	|| ydk::is_set(pce_flood.yfilter)
	|| ydk::is_set(pce_get.yfilter)
	|| ydk::is_set(pce_br_lookup.yfilter)
	|| ydk::is_set(pce_br_lkup_num_dests.yfilter)
	|| ydk::is_set(pce_br_resp_fails.yfilter)
	|| ydk::is_set(pce_node_announce_batches.yfilter)
	|| ydk::is_set(pce_node_delete_batches.yfilter)
	|| ydk::is_set(pce_num_node_announce.yfilter)
	|| ydk::is_set(pce_num_node_delete.yfilter)
	|| ydk::is_set(pce_node_send_fails.yfilter)
	|| ydk::is_set(te_sr_path_reg_idt_recvd.yfilter)
	|| ydk::is_set(te_sr_idt_sent.yfilter)
	|| ydk::is_set(sr_num_area_enabled.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_connected.is_set || is_set(te_connected.yfilter)) leaf_name_data.push_back(te_connected.get_name_leafdata());
    if (control_disconnects.is_set || is_set(control_disconnects.yfilter)) leaf_name_data.push_back(control_disconnects.get_name_leafdata());
    if (te_disconnects.is_set || is_set(te_disconnects.yfilter)) leaf_name_data.push_back(te_disconnects.get_name_leafdata());
    if (adj_gets.is_set || is_set(adj_gets.yfilter)) leaf_name_data.push_back(adj_gets.get_name_leafdata());
    if (link_floods.is_set || is_set(link_floods.yfilter)) leaf_name_data.push_back(link_floods.get_name_leafdata());
    if (link_fragment_floods.is_set || is_set(link_fragment_floods.yfilter)) leaf_name_data.push_back(link_fragment_floods.get_name_leafdata());
    if (lsp_gets.is_set || is_set(lsp_gets.yfilter)) leaf_name_data.push_back(lsp_gets.get_name_leafdata());
    if (tunnel_announces.is_set || is_set(tunnel_announces.yfilter)) leaf_name_data.push_back(tunnel_announces.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (control_batch_reads.is_set || is_set(control_batch_reads.yfilter)) leaf_name_data.push_back(control_batch_reads.get_name_leafdata());
    if (control_batch_writes.is_set || is_set(control_batch_writes.yfilter)) leaf_name_data.push_back(control_batch_writes.get_name_leafdata());
    if (link_batch_reads.is_set || is_set(link_batch_reads.yfilter)) leaf_name_data.push_back(link_batch_reads.get_name_leafdata());
    if (link_batch_writes.is_set || is_set(link_batch_writes.yfilter)) leaf_name_data.push_back(link_batch_writes.get_name_leafdata());
    if (adj_changes.is_set || is_set(adj_changes.yfilter)) leaf_name_data.push_back(adj_changes.get_name_leafdata());
    if (fragment_deletes.is_set || is_set(fragment_deletes.yfilter)) leaf_name_data.push_back(fragment_deletes.get_name_leafdata());
    if (fragment_announces.is_set || is_set(fragment_announces.yfilter)) leaf_name_data.push_back(fragment_announces.get_name_leafdata());
    if (data_trans_completes.is_set || is_set(data_trans_completes.yfilter)) leaf_name_data.push_back(data_trans_completes.get_name_leafdata());
    if (pce_listen.is_set || is_set(pce_listen.yfilter)) leaf_name_data.push_back(pce_listen.get_name_leafdata());
    if (pce_stoplisten.is_set || is_set(pce_stoplisten.yfilter)) leaf_name_data.push_back(pce_stoplisten.get_name_leafdata());
    if (pce_flood.is_set || is_set(pce_flood.yfilter)) leaf_name_data.push_back(pce_flood.get_name_leafdata());
    if (pce_get.is_set || is_set(pce_get.yfilter)) leaf_name_data.push_back(pce_get.get_name_leafdata());
    if (pce_br_lookup.is_set || is_set(pce_br_lookup.yfilter)) leaf_name_data.push_back(pce_br_lookup.get_name_leafdata());
    if (pce_br_lkup_num_dests.is_set || is_set(pce_br_lkup_num_dests.yfilter)) leaf_name_data.push_back(pce_br_lkup_num_dests.get_name_leafdata());
    if (pce_br_resp_fails.is_set || is_set(pce_br_resp_fails.yfilter)) leaf_name_data.push_back(pce_br_resp_fails.get_name_leafdata());
    if (pce_node_announce_batches.is_set || is_set(pce_node_announce_batches.yfilter)) leaf_name_data.push_back(pce_node_announce_batches.get_name_leafdata());
    if (pce_node_delete_batches.is_set || is_set(pce_node_delete_batches.yfilter)) leaf_name_data.push_back(pce_node_delete_batches.get_name_leafdata());
    if (pce_num_node_announce.is_set || is_set(pce_num_node_announce.yfilter)) leaf_name_data.push_back(pce_num_node_announce.get_name_leafdata());
    if (pce_num_node_delete.is_set || is_set(pce_num_node_delete.yfilter)) leaf_name_data.push_back(pce_num_node_delete.get_name_leafdata());
    if (pce_node_send_fails.is_set || is_set(pce_node_send_fails.yfilter)) leaf_name_data.push_back(pce_node_send_fails.get_name_leafdata());
    if (te_sr_path_reg_idt_recvd.is_set || is_set(te_sr_path_reg_idt_recvd.yfilter)) leaf_name_data.push_back(te_sr_path_reg_idt_recvd.get_name_leafdata());
    if (te_sr_idt_sent.is_set || is_set(te_sr_idt_sent.yfilter)) leaf_name_data.push_back(te_sr_idt_sent.get_name_leafdata());
    if (sr_num_area_enabled.is_set || is_set(sr_num_area_enabled.yfilter)) leaf_name_data.push_back(sr_num_area_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-connected")
    {
        te_connected = value;
        te_connected.value_namespace = name_space;
        te_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-disconnects")
    {
        control_disconnects = value;
        control_disconnects.value_namespace = name_space;
        control_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-disconnects")
    {
        te_disconnects = value;
        te_disconnects.value_namespace = name_space;
        te_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-gets")
    {
        adj_gets = value;
        adj_gets.value_namespace = name_space;
        adj_gets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-floods")
    {
        link_floods = value;
        link_floods.value_namespace = name_space;
        link_floods.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-fragment-floods")
    {
        link_fragment_floods = value;
        link_fragment_floods.value_namespace = name_space;
        link_fragment_floods.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-gets")
    {
        lsp_gets = value;
        lsp_gets.value_namespace = name_space;
        lsp_gets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-announces")
    {
        tunnel_announces = value;
        tunnel_announces.value_namespace = name_space;
        tunnel_announces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-batch-reads")
    {
        control_batch_reads = value;
        control_batch_reads.value_namespace = name_space;
        control_batch_reads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-batch-writes")
    {
        control_batch_writes = value;
        control_batch_writes.value_namespace = name_space;
        control_batch_writes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-batch-reads")
    {
        link_batch_reads = value;
        link_batch_reads.value_namespace = name_space;
        link_batch_reads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-batch-writes")
    {
        link_batch_writes = value;
        link_batch_writes.value_namespace = name_space;
        link_batch_writes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-changes")
    {
        adj_changes = value;
        adj_changes.value_namespace = name_space;
        adj_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-deletes")
    {
        fragment_deletes = value;
        fragment_deletes.value_namespace = name_space;
        fragment_deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-announces")
    {
        fragment_announces = value;
        fragment_announces.value_namespace = name_space;
        fragment_announces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-trans-completes")
    {
        data_trans_completes = value;
        data_trans_completes.value_namespace = name_space;
        data_trans_completes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-listen")
    {
        pce_listen = value;
        pce_listen.value_namespace = name_space;
        pce_listen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-stoplisten")
    {
        pce_stoplisten = value;
        pce_stoplisten.value_namespace = name_space;
        pce_stoplisten.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-flood")
    {
        pce_flood = value;
        pce_flood.value_namespace = name_space;
        pce_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-get")
    {
        pce_get = value;
        pce_get.value_namespace = name_space;
        pce_get.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-br-lookup")
    {
        pce_br_lookup = value;
        pce_br_lookup.value_namespace = name_space;
        pce_br_lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-br-lkup-num-dests")
    {
        pce_br_lkup_num_dests = value;
        pce_br_lkup_num_dests.value_namespace = name_space;
        pce_br_lkup_num_dests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-br-resp-fails")
    {
        pce_br_resp_fails = value;
        pce_br_resp_fails.value_namespace = name_space;
        pce_br_resp_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-node-announce-batches")
    {
        pce_node_announce_batches = value;
        pce_node_announce_batches.value_namespace = name_space;
        pce_node_announce_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-node-delete-batches")
    {
        pce_node_delete_batches = value;
        pce_node_delete_batches.value_namespace = name_space;
        pce_node_delete_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-num-node-announce")
    {
        pce_num_node_announce = value;
        pce_num_node_announce.value_namespace = name_space;
        pce_num_node_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-num-node-delete")
    {
        pce_num_node_delete = value;
        pce_num_node_delete.value_namespace = name_space;
        pce_num_node_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-node-send-fails")
    {
        pce_node_send_fails = value;
        pce_node_send_fails.value_namespace = name_space;
        pce_node_send_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sr-path-reg-idt-recvd")
    {
        te_sr_path_reg_idt_recvd = value;
        te_sr_path_reg_idt_recvd.value_namespace = name_space;
        te_sr_path_reg_idt_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sr-idt-sent")
    {
        te_sr_idt_sent = value;
        te_sr_idt_sent.value_namespace = name_space;
        te_sr_idt_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-num-area-enabled")
    {
        sr_num_area_enabled = value;
        sr_num_area_enabled.value_namespace = name_space;
        sr_num_area_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-connected")
    {
        te_connected.yfilter = yfilter;
    }
    if(value_path == "control-disconnects")
    {
        control_disconnects.yfilter = yfilter;
    }
    if(value_path == "te-disconnects")
    {
        te_disconnects.yfilter = yfilter;
    }
    if(value_path == "adj-gets")
    {
        adj_gets.yfilter = yfilter;
    }
    if(value_path == "link-floods")
    {
        link_floods.yfilter = yfilter;
    }
    if(value_path == "link-fragment-floods")
    {
        link_fragment_floods.yfilter = yfilter;
    }
    if(value_path == "lsp-gets")
    {
        lsp_gets.yfilter = yfilter;
    }
    if(value_path == "tunnel-announces")
    {
        tunnel_announces.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "control-batch-reads")
    {
        control_batch_reads.yfilter = yfilter;
    }
    if(value_path == "control-batch-writes")
    {
        control_batch_writes.yfilter = yfilter;
    }
    if(value_path == "link-batch-reads")
    {
        link_batch_reads.yfilter = yfilter;
    }
    if(value_path == "link-batch-writes")
    {
        link_batch_writes.yfilter = yfilter;
    }
    if(value_path == "adj-changes")
    {
        adj_changes.yfilter = yfilter;
    }
    if(value_path == "fragment-deletes")
    {
        fragment_deletes.yfilter = yfilter;
    }
    if(value_path == "fragment-announces")
    {
        fragment_announces.yfilter = yfilter;
    }
    if(value_path == "data-trans-completes")
    {
        data_trans_completes.yfilter = yfilter;
    }
    if(value_path == "pce-listen")
    {
        pce_listen.yfilter = yfilter;
    }
    if(value_path == "pce-stoplisten")
    {
        pce_stoplisten.yfilter = yfilter;
    }
    if(value_path == "pce-flood")
    {
        pce_flood.yfilter = yfilter;
    }
    if(value_path == "pce-get")
    {
        pce_get.yfilter = yfilter;
    }
    if(value_path == "pce-br-lookup")
    {
        pce_br_lookup.yfilter = yfilter;
    }
    if(value_path == "pce-br-lkup-num-dests")
    {
        pce_br_lkup_num_dests.yfilter = yfilter;
    }
    if(value_path == "pce-br-resp-fails")
    {
        pce_br_resp_fails.yfilter = yfilter;
    }
    if(value_path == "pce-node-announce-batches")
    {
        pce_node_announce_batches.yfilter = yfilter;
    }
    if(value_path == "pce-node-delete-batches")
    {
        pce_node_delete_batches.yfilter = yfilter;
    }
    if(value_path == "pce-num-node-announce")
    {
        pce_num_node_announce.yfilter = yfilter;
    }
    if(value_path == "pce-num-node-delete")
    {
        pce_num_node_delete.yfilter = yfilter;
    }
    if(value_path == "pce-node-send-fails")
    {
        pce_node_send_fails.yfilter = yfilter;
    }
    if(value_path == "te-sr-path-reg-idt-recvd")
    {
        te_sr_path_reg_idt_recvd.yfilter = yfilter;
    }
    if(value_path == "te-sr-idt-sent")
    {
        te_sr_idt_sent.yfilter = yfilter;
    }
    if(value_path == "sr-num-area-enabled")
    {
        sr_num_area_enabled.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-connected" || name == "control-disconnects" || name == "te-disconnects" || name == "adj-gets" || name == "link-floods" || name == "link-fragment-floods" || name == "lsp-gets" || name == "tunnel-announces" || name == "total-tunnels" || name == "control-batch-reads" || name == "control-batch-writes" || name == "link-batch-reads" || name == "link-batch-writes" || name == "adj-changes" || name == "fragment-deletes" || name == "fragment-announces" || name == "data-trans-completes" || name == "pce-listen" || name == "pce-stoplisten" || name == "pce-flood" || name == "pce-get" || name == "pce-br-lookup" || name == "pce-br-lkup-num-dests" || name == "pce-br-resp-fails" || name == "pce-node-announce-batches" || name == "pce-node-delete-batches" || name == "pce-num-node-announce" || name == "pce-num-node-delete" || name == "pce-node-send-fails" || name == "te-sr-path-reg-idt-recvd" || name == "te-sr-idt-sent" || name == "sr-num-area-enabled")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::ProtocolStats()
    :
    inputs{YType::uint32, "inputs"},
    input_hello{YType::uint32, "input-hello"},
    input_dbdes{YType::uint32, "input-dbdes"},
    input_dbdes_lsa{YType::uint32, "input-dbdes-lsa"},
    input_req{YType::uint32, "input-req"},
    input_req_lsa{YType::uint32, "input-req-lsa"},
    input_lsupd{YType::uint32, "input-lsupd"},
    input_lsupd_lsa{YType::uint32, "input-lsupd-lsa"},
    input_ack{YType::uint32, "input-ack"},
    input_ack_lsa{YType::uint32, "input-ack-lsa"},
    checksumerr{YType::uint32, "checksumerr"},
    input_autherr{YType::uint32, "input-autherr"},
    outputs{YType::uint32, "outputs"},
    output_hello{YType::uint32, "output-hello"},
    output_dbdes{YType::uint32, "output-dbdes"},
    output_dbdes_lsa{YType::uint32, "output-dbdes-lsa"},
    output_req{YType::uint32, "output-req"},
    output_req_lsa{YType::uint32, "output-req-lsa"},
    output_lsupd{YType::uint32, "output-lsupd"},
    output_lsupd_lsa{YType::uint32, "output-lsupd-lsa"},
    output_ack{YType::uint32, "output-ack"},
    output_ack_lsa{YType::uint32, "output-ack-lsa"},
    output_autherr{YType::uint32, "output-autherr"},
    h_input_dbdes{YType::uint32, "h-input-dbdes"},
    h_input_req{YType::uint32, "h-input-req"},
    h_input_lsupd{YType::uint32, "h-input-lsupd"},
    h_input_ack{YType::uint32, "h-input-ack"}
{

    yang_name = "protocol-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::~ProtocolStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::has_data() const
{
    return inputs.is_set
	|| input_hello.is_set
	|| input_dbdes.is_set
	|| input_dbdes_lsa.is_set
	|| input_req.is_set
	|| input_req_lsa.is_set
	|| input_lsupd.is_set
	|| input_lsupd_lsa.is_set
	|| input_ack.is_set
	|| input_ack_lsa.is_set
	|| checksumerr.is_set
	|| input_autherr.is_set
	|| outputs.is_set
	|| output_hello.is_set
	|| output_dbdes.is_set
	|| output_dbdes_lsa.is_set
	|| output_req.is_set
	|| output_req_lsa.is_set
	|| output_lsupd.is_set
	|| output_lsupd_lsa.is_set
	|| output_ack.is_set
	|| output_ack_lsa.is_set
	|| output_autherr.is_set
	|| h_input_dbdes.is_set
	|| h_input_req.is_set
	|| h_input_lsupd.is_set
	|| h_input_ack.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inputs.yfilter)
	|| ydk::is_set(input_hello.yfilter)
	|| ydk::is_set(input_dbdes.yfilter)
	|| ydk::is_set(input_dbdes_lsa.yfilter)
	|| ydk::is_set(input_req.yfilter)
	|| ydk::is_set(input_req_lsa.yfilter)
	|| ydk::is_set(input_lsupd.yfilter)
	|| ydk::is_set(input_lsupd_lsa.yfilter)
	|| ydk::is_set(input_ack.yfilter)
	|| ydk::is_set(input_ack_lsa.yfilter)
	|| ydk::is_set(checksumerr.yfilter)
	|| ydk::is_set(input_autherr.yfilter)
	|| ydk::is_set(outputs.yfilter)
	|| ydk::is_set(output_hello.yfilter)
	|| ydk::is_set(output_dbdes.yfilter)
	|| ydk::is_set(output_dbdes_lsa.yfilter)
	|| ydk::is_set(output_req.yfilter)
	|| ydk::is_set(output_req_lsa.yfilter)
	|| ydk::is_set(output_lsupd.yfilter)
	|| ydk::is_set(output_lsupd_lsa.yfilter)
	|| ydk::is_set(output_ack.yfilter)
	|| ydk::is_set(output_ack_lsa.yfilter)
	|| ydk::is_set(output_autherr.yfilter)
	|| ydk::is_set(h_input_dbdes.yfilter)
	|| ydk::is_set(h_input_req.yfilter)
	|| ydk::is_set(h_input_lsupd.yfilter)
	|| ydk::is_set(h_input_ack.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inputs.is_set || is_set(inputs.yfilter)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.yfilter)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (input_dbdes.is_set || is_set(input_dbdes.yfilter)) leaf_name_data.push_back(input_dbdes.get_name_leafdata());
    if (input_dbdes_lsa.is_set || is_set(input_dbdes_lsa.yfilter)) leaf_name_data.push_back(input_dbdes_lsa.get_name_leafdata());
    if (input_req.is_set || is_set(input_req.yfilter)) leaf_name_data.push_back(input_req.get_name_leafdata());
    if (input_req_lsa.is_set || is_set(input_req_lsa.yfilter)) leaf_name_data.push_back(input_req_lsa.get_name_leafdata());
    if (input_lsupd.is_set || is_set(input_lsupd.yfilter)) leaf_name_data.push_back(input_lsupd.get_name_leafdata());
    if (input_lsupd_lsa.is_set || is_set(input_lsupd_lsa.yfilter)) leaf_name_data.push_back(input_lsupd_lsa.get_name_leafdata());
    if (input_ack.is_set || is_set(input_ack.yfilter)) leaf_name_data.push_back(input_ack.get_name_leafdata());
    if (input_ack_lsa.is_set || is_set(input_ack_lsa.yfilter)) leaf_name_data.push_back(input_ack_lsa.get_name_leafdata());
    if (checksumerr.is_set || is_set(checksumerr.yfilter)) leaf_name_data.push_back(checksumerr.get_name_leafdata());
    if (input_autherr.is_set || is_set(input_autherr.yfilter)) leaf_name_data.push_back(input_autherr.get_name_leafdata());
    if (outputs.is_set || is_set(outputs.yfilter)) leaf_name_data.push_back(outputs.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.yfilter)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (output_dbdes.is_set || is_set(output_dbdes.yfilter)) leaf_name_data.push_back(output_dbdes.get_name_leafdata());
    if (output_dbdes_lsa.is_set || is_set(output_dbdes_lsa.yfilter)) leaf_name_data.push_back(output_dbdes_lsa.get_name_leafdata());
    if (output_req.is_set || is_set(output_req.yfilter)) leaf_name_data.push_back(output_req.get_name_leafdata());
    if (output_req_lsa.is_set || is_set(output_req_lsa.yfilter)) leaf_name_data.push_back(output_req_lsa.get_name_leafdata());
    if (output_lsupd.is_set || is_set(output_lsupd.yfilter)) leaf_name_data.push_back(output_lsupd.get_name_leafdata());
    if (output_lsupd_lsa.is_set || is_set(output_lsupd_lsa.yfilter)) leaf_name_data.push_back(output_lsupd_lsa.get_name_leafdata());
    if (output_ack.is_set || is_set(output_ack.yfilter)) leaf_name_data.push_back(output_ack.get_name_leafdata());
    if (output_ack_lsa.is_set || is_set(output_ack_lsa.yfilter)) leaf_name_data.push_back(output_ack_lsa.get_name_leafdata());
    if (output_autherr.is_set || is_set(output_autherr.yfilter)) leaf_name_data.push_back(output_autherr.get_name_leafdata());
    if (h_input_dbdes.is_set || is_set(h_input_dbdes.yfilter)) leaf_name_data.push_back(h_input_dbdes.get_name_leafdata());
    if (h_input_req.is_set || is_set(h_input_req.yfilter)) leaf_name_data.push_back(h_input_req.get_name_leafdata());
    if (h_input_lsupd.is_set || is_set(h_input_lsupd.yfilter)) leaf_name_data.push_back(h_input_lsupd.get_name_leafdata());
    if (h_input_ack.is_set || is_set(h_input_ack.yfilter)) leaf_name_data.push_back(h_input_ack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inputs")
    {
        inputs = value;
        inputs.value_namespace = name_space;
        inputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
        input_hello.value_namespace = name_space;
        input_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-dbdes")
    {
        input_dbdes = value;
        input_dbdes.value_namespace = name_space;
        input_dbdes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-dbdes-lsa")
    {
        input_dbdes_lsa = value;
        input_dbdes_lsa.value_namespace = name_space;
        input_dbdes_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-req")
    {
        input_req = value;
        input_req.value_namespace = name_space;
        input_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-req-lsa")
    {
        input_req_lsa = value;
        input_req_lsa.value_namespace = name_space;
        input_req_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsupd")
    {
        input_lsupd = value;
        input_lsupd.value_namespace = name_space;
        input_lsupd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsupd-lsa")
    {
        input_lsupd_lsa = value;
        input_lsupd_lsa.value_namespace = name_space;
        input_lsupd_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ack")
    {
        input_ack = value;
        input_ack.value_namespace = name_space;
        input_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ack-lsa")
    {
        input_ack_lsa = value;
        input_ack_lsa.value_namespace = name_space;
        input_ack_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksumerr")
    {
        checksumerr = value;
        checksumerr.value_namespace = name_space;
        checksumerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-autherr")
    {
        input_autherr = value;
        input_autherr.value_namespace = name_space;
        input_autherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outputs")
    {
        outputs = value;
        outputs.value_namespace = name_space;
        outputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
        output_hello.value_namespace = name_space;
        output_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-dbdes")
    {
        output_dbdes = value;
        output_dbdes.value_namespace = name_space;
        output_dbdes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-dbdes-lsa")
    {
        output_dbdes_lsa = value;
        output_dbdes_lsa.value_namespace = name_space;
        output_dbdes_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-req")
    {
        output_req = value;
        output_req.value_namespace = name_space;
        output_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-req-lsa")
    {
        output_req_lsa = value;
        output_req_lsa.value_namespace = name_space;
        output_req_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsupd")
    {
        output_lsupd = value;
        output_lsupd.value_namespace = name_space;
        output_lsupd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsupd-lsa")
    {
        output_lsupd_lsa = value;
        output_lsupd_lsa.value_namespace = name_space;
        output_lsupd_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ack")
    {
        output_ack = value;
        output_ack.value_namespace = name_space;
        output_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ack-lsa")
    {
        output_ack_lsa = value;
        output_ack_lsa.value_namespace = name_space;
        output_ack_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-autherr")
    {
        output_autherr = value;
        output_autherr.value_namespace = name_space;
        output_autherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "h-input-dbdes")
    {
        h_input_dbdes = value;
        h_input_dbdes.value_namespace = name_space;
        h_input_dbdes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "h-input-req")
    {
        h_input_req = value;
        h_input_req.value_namespace = name_space;
        h_input_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "h-input-lsupd")
    {
        h_input_lsupd = value;
        h_input_lsupd.value_namespace = name_space;
        h_input_lsupd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "h-input-ack")
    {
        h_input_ack = value;
        h_input_ack.value_namespace = name_space;
        h_input_ack.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inputs")
    {
        inputs.yfilter = yfilter;
    }
    if(value_path == "input-hello")
    {
        input_hello.yfilter = yfilter;
    }
    if(value_path == "input-dbdes")
    {
        input_dbdes.yfilter = yfilter;
    }
    if(value_path == "input-dbdes-lsa")
    {
        input_dbdes_lsa.yfilter = yfilter;
    }
    if(value_path == "input-req")
    {
        input_req.yfilter = yfilter;
    }
    if(value_path == "input-req-lsa")
    {
        input_req_lsa.yfilter = yfilter;
    }
    if(value_path == "input-lsupd")
    {
        input_lsupd.yfilter = yfilter;
    }
    if(value_path == "input-lsupd-lsa")
    {
        input_lsupd_lsa.yfilter = yfilter;
    }
    if(value_path == "input-ack")
    {
        input_ack.yfilter = yfilter;
    }
    if(value_path == "input-ack-lsa")
    {
        input_ack_lsa.yfilter = yfilter;
    }
    if(value_path == "checksumerr")
    {
        checksumerr.yfilter = yfilter;
    }
    if(value_path == "input-autherr")
    {
        input_autherr.yfilter = yfilter;
    }
    if(value_path == "outputs")
    {
        outputs.yfilter = yfilter;
    }
    if(value_path == "output-hello")
    {
        output_hello.yfilter = yfilter;
    }
    if(value_path == "output-dbdes")
    {
        output_dbdes.yfilter = yfilter;
    }
    if(value_path == "output-dbdes-lsa")
    {
        output_dbdes_lsa.yfilter = yfilter;
    }
    if(value_path == "output-req")
    {
        output_req.yfilter = yfilter;
    }
    if(value_path == "output-req-lsa")
    {
        output_req_lsa.yfilter = yfilter;
    }
    if(value_path == "output-lsupd")
    {
        output_lsupd.yfilter = yfilter;
    }
    if(value_path == "output-lsupd-lsa")
    {
        output_lsupd_lsa.yfilter = yfilter;
    }
    if(value_path == "output-ack")
    {
        output_ack.yfilter = yfilter;
    }
    if(value_path == "output-ack-lsa")
    {
        output_ack_lsa.yfilter = yfilter;
    }
    if(value_path == "output-autherr")
    {
        output_autherr.yfilter = yfilter;
    }
    if(value_path == "h-input-dbdes")
    {
        h_input_dbdes.yfilter = yfilter;
    }
    if(value_path == "h-input-req")
    {
        h_input_req.yfilter = yfilter;
    }
    if(value_path == "h-input-lsupd")
    {
        h_input_lsupd.yfilter = yfilter;
    }
    if(value_path == "h-input-ack")
    {
        h_input_ack.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inputs" || name == "input-hello" || name == "input-dbdes" || name == "input-dbdes-lsa" || name == "input-req" || name == "input-req-lsa" || name == "input-lsupd" || name == "input-lsupd-lsa" || name == "input-ack" || name == "input-ack-lsa" || name == "checksumerr" || name == "input-autherr" || name == "outputs" || name == "output-hello" || name == "output-dbdes" || name == "output-dbdes-lsa" || name == "output-req" || name == "output-req-lsa" || name == "output-lsupd" || name == "output-lsupd-lsa" || name == "output-ack" || name == "output-ack-lsa" || name == "output-autherr" || name == "h-input-dbdes" || name == "h-input-req" || name == "h-input-lsupd" || name == "h-input-ack")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::RawIoStats()
    :
    out_sent{YType::uint32, "out-sent"},
    out_bytes_sent{YType::uint32, "out-bytes-sent"},
    out_no_conn_discarded{YType::uint32, "out-no-conn-discarded"},
    out_null_src_discarded{YType::uint32, "out-null-src-discarded"},
    out_no_pak_discarded{YType::uint32, "out-no-pak-discarded"},
    out_ipv4_hdr_err_discarded{YType::uint32, "out-ipv4-hdr-err-discarded"},
    out_send_pak_err_discarded{YType::uint32, "out-send-pak-err-discarded"},
    in_rcv{YType::uint32, "in-rcv"},
    in_bytes_rcv{YType::uint32, "in-bytes-rcv"},
    in_short_msg_discarded{YType::uint32, "in-short-msg-discarded"},
    in_no_mem_discarded{YType::uint32, "in-no-mem-discarded"},
    in_raw_event{YType::uint32, "in-raw-event"},
    disconnects{YType::uint32, "disconnects"},
    in_standby_discarded{YType::uint32, "in-standby-discarded"},
    nsr_not_ready_discarded{YType::uint32, "nsr-not-ready-discarded"},
    raw_connected{YType::boolean, "raw-connected"},
    sl_raw_connected{YType::boolean, "sl-raw-connected"}
{

    yang_name = "raw-io-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::~RawIoStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::has_data() const
{
    return out_sent.is_set
	|| out_bytes_sent.is_set
	|| out_no_conn_discarded.is_set
	|| out_null_src_discarded.is_set
	|| out_no_pak_discarded.is_set
	|| out_ipv4_hdr_err_discarded.is_set
	|| out_send_pak_err_discarded.is_set
	|| in_rcv.is_set
	|| in_bytes_rcv.is_set
	|| in_short_msg_discarded.is_set
	|| in_no_mem_discarded.is_set
	|| in_raw_event.is_set
	|| disconnects.is_set
	|| in_standby_discarded.is_set
	|| nsr_not_ready_discarded.is_set
	|| raw_connected.is_set
	|| sl_raw_connected.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_sent.yfilter)
	|| ydk::is_set(out_bytes_sent.yfilter)
	|| ydk::is_set(out_no_conn_discarded.yfilter)
	|| ydk::is_set(out_null_src_discarded.yfilter)
	|| ydk::is_set(out_no_pak_discarded.yfilter)
	|| ydk::is_set(out_ipv4_hdr_err_discarded.yfilter)
	|| ydk::is_set(out_send_pak_err_discarded.yfilter)
	|| ydk::is_set(in_rcv.yfilter)
	|| ydk::is_set(in_bytes_rcv.yfilter)
	|| ydk::is_set(in_short_msg_discarded.yfilter)
	|| ydk::is_set(in_no_mem_discarded.yfilter)
	|| ydk::is_set(in_raw_event.yfilter)
	|| ydk::is_set(disconnects.yfilter)
	|| ydk::is_set(in_standby_discarded.yfilter)
	|| ydk::is_set(nsr_not_ready_discarded.yfilter)
	|| ydk::is_set(raw_connected.yfilter)
	|| ydk::is_set(sl_raw_connected.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raw-io-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_sent.is_set || is_set(out_sent.yfilter)) leaf_name_data.push_back(out_sent.get_name_leafdata());
    if (out_bytes_sent.is_set || is_set(out_bytes_sent.yfilter)) leaf_name_data.push_back(out_bytes_sent.get_name_leafdata());
    if (out_no_conn_discarded.is_set || is_set(out_no_conn_discarded.yfilter)) leaf_name_data.push_back(out_no_conn_discarded.get_name_leafdata());
    if (out_null_src_discarded.is_set || is_set(out_null_src_discarded.yfilter)) leaf_name_data.push_back(out_null_src_discarded.get_name_leafdata());
    if (out_no_pak_discarded.is_set || is_set(out_no_pak_discarded.yfilter)) leaf_name_data.push_back(out_no_pak_discarded.get_name_leafdata());
    if (out_ipv4_hdr_err_discarded.is_set || is_set(out_ipv4_hdr_err_discarded.yfilter)) leaf_name_data.push_back(out_ipv4_hdr_err_discarded.get_name_leafdata());
    if (out_send_pak_err_discarded.is_set || is_set(out_send_pak_err_discarded.yfilter)) leaf_name_data.push_back(out_send_pak_err_discarded.get_name_leafdata());
    if (in_rcv.is_set || is_set(in_rcv.yfilter)) leaf_name_data.push_back(in_rcv.get_name_leafdata());
    if (in_bytes_rcv.is_set || is_set(in_bytes_rcv.yfilter)) leaf_name_data.push_back(in_bytes_rcv.get_name_leafdata());
    if (in_short_msg_discarded.is_set || is_set(in_short_msg_discarded.yfilter)) leaf_name_data.push_back(in_short_msg_discarded.get_name_leafdata());
    if (in_no_mem_discarded.is_set || is_set(in_no_mem_discarded.yfilter)) leaf_name_data.push_back(in_no_mem_discarded.get_name_leafdata());
    if (in_raw_event.is_set || is_set(in_raw_event.yfilter)) leaf_name_data.push_back(in_raw_event.get_name_leafdata());
    if (disconnects.is_set || is_set(disconnects.yfilter)) leaf_name_data.push_back(disconnects.get_name_leafdata());
    if (in_standby_discarded.is_set || is_set(in_standby_discarded.yfilter)) leaf_name_data.push_back(in_standby_discarded.get_name_leafdata());
    if (nsr_not_ready_discarded.is_set || is_set(nsr_not_ready_discarded.yfilter)) leaf_name_data.push_back(nsr_not_ready_discarded.get_name_leafdata());
    if (raw_connected.is_set || is_set(raw_connected.yfilter)) leaf_name_data.push_back(raw_connected.get_name_leafdata());
    if (sl_raw_connected.is_set || is_set(sl_raw_connected.yfilter)) leaf_name_data.push_back(sl_raw_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-sent")
    {
        out_sent = value;
        out_sent.value_namespace = name_space;
        out_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bytes-sent")
    {
        out_bytes_sent = value;
        out_bytes_sent.value_namespace = name_space;
        out_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-no-conn-discarded")
    {
        out_no_conn_discarded = value;
        out_no_conn_discarded.value_namespace = name_space;
        out_no_conn_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-null-src-discarded")
    {
        out_null_src_discarded = value;
        out_null_src_discarded.value_namespace = name_space;
        out_null_src_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-no-pak-discarded")
    {
        out_no_pak_discarded = value;
        out_no_pak_discarded.value_namespace = name_space;
        out_no_pak_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ipv4-hdr-err-discarded")
    {
        out_ipv4_hdr_err_discarded = value;
        out_ipv4_hdr_err_discarded.value_namespace = name_space;
        out_ipv4_hdr_err_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-send-pak-err-discarded")
    {
        out_send_pak_err_discarded = value;
        out_send_pak_err_discarded.value_namespace = name_space;
        out_send_pak_err_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rcv")
    {
        in_rcv = value;
        in_rcv.value_namespace = name_space;
        in_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bytes-rcv")
    {
        in_bytes_rcv = value;
        in_bytes_rcv.value_namespace = name_space;
        in_bytes_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-short-msg-discarded")
    {
        in_short_msg_discarded = value;
        in_short_msg_discarded.value_namespace = name_space;
        in_short_msg_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-no-mem-discarded")
    {
        in_no_mem_discarded = value;
        in_no_mem_discarded.value_namespace = name_space;
        in_no_mem_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-raw-event")
    {
        in_raw_event = value;
        in_raw_event.value_namespace = name_space;
        in_raw_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnects")
    {
        disconnects = value;
        disconnects.value_namespace = name_space;
        disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-standby-discarded")
    {
        in_standby_discarded = value;
        in_standby_discarded.value_namespace = name_space;
        in_standby_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-not-ready-discarded")
    {
        nsr_not_ready_discarded = value;
        nsr_not_ready_discarded.value_namespace = name_space;
        nsr_not_ready_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-connected")
    {
        raw_connected = value;
        raw_connected.value_namespace = name_space;
        raw_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sl-raw-connected")
    {
        sl_raw_connected = value;
        sl_raw_connected.value_namespace = name_space;
        sl_raw_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-sent")
    {
        out_sent.yfilter = yfilter;
    }
    if(value_path == "out-bytes-sent")
    {
        out_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "out-no-conn-discarded")
    {
        out_no_conn_discarded.yfilter = yfilter;
    }
    if(value_path == "out-null-src-discarded")
    {
        out_null_src_discarded.yfilter = yfilter;
    }
    if(value_path == "out-no-pak-discarded")
    {
        out_no_pak_discarded.yfilter = yfilter;
    }
    if(value_path == "out-ipv4-hdr-err-discarded")
    {
        out_ipv4_hdr_err_discarded.yfilter = yfilter;
    }
    if(value_path == "out-send-pak-err-discarded")
    {
        out_send_pak_err_discarded.yfilter = yfilter;
    }
    if(value_path == "in-rcv")
    {
        in_rcv.yfilter = yfilter;
    }
    if(value_path == "in-bytes-rcv")
    {
        in_bytes_rcv.yfilter = yfilter;
    }
    if(value_path == "in-short-msg-discarded")
    {
        in_short_msg_discarded.yfilter = yfilter;
    }
    if(value_path == "in-no-mem-discarded")
    {
        in_no_mem_discarded.yfilter = yfilter;
    }
    if(value_path == "in-raw-event")
    {
        in_raw_event.yfilter = yfilter;
    }
    if(value_path == "disconnects")
    {
        disconnects.yfilter = yfilter;
    }
    if(value_path == "in-standby-discarded")
    {
        in_standby_discarded.yfilter = yfilter;
    }
    if(value_path == "nsr-not-ready-discarded")
    {
        nsr_not_ready_discarded.yfilter = yfilter;
    }
    if(value_path == "raw-connected")
    {
        raw_connected.yfilter = yfilter;
    }
    if(value_path == "sl-raw-connected")
    {
        sl_raw_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-sent" || name == "out-bytes-sent" || name == "out-no-conn-discarded" || name == "out-null-src-discarded" || name == "out-no-pak-discarded" || name == "out-ipv4-hdr-err-discarded" || name == "out-send-pak-err-discarded" || name == "in-rcv" || name == "in-bytes-rcv" || name == "in-short-msg-discarded" || name == "in-no-mem-discarded" || name == "in-raw-event" || name == "disconnects" || name == "in-standby-discarded" || name == "nsr-not-ready-discarded" || name == "raw-connected" || name == "sl-raw-connected")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntries()
{

    yang_name = "interface-stats-entries"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entry")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_stats_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{

    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
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

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(if_name_str.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.yfilter)) leaf_name_data.push_back(if_name_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-entry")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : if_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-name-str")
    {
        if_name_str = value;
        if_name_str.value_namespace = name_space;
        if_name_str.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "if-name-str")
    {
        if_name_str.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-entry" || name == "interface-name" || name == "handle" || name == "if-name-str")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    madj_intf{YType::boolean, "madj-intf"},
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"}
{

    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
{
    for (std::size_t index=0; index<if_stat.size(); index++)
    {
        if(if_stat[index]->has_data())
            return true;
    }
    return madj_intf.is_set
	|| area_id.is_set
	|| area_id_str.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
{
    for (std::size_t index=0; index<if_stat.size(); index++)
    {
        if(if_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(madj_intf.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_id_str.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (madj_intf.is_set || is_set(madj_intf.yfilter)) leaf_name_data.push_back(madj_intf.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.yfilter)) leaf_name_data.push_back(area_id_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-stat")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat>();
        c->parent = this;
        if_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : if_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "madj-intf")
    {
        madj_intf = value;
        madj_intf.value_namespace = name_space;
        madj_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id-str")
    {
        area_id_str = value;
        area_id_str.value_namespace = name_space;
        area_id_str.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "madj-intf")
    {
        madj_intf.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-id-str")
    {
        area_id_str.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-stat" || name == "madj-intf" || name == "area-id" || name == "area-id-str")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::IfStat()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "if-stat"; yang_parent_name = "if-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::~IfStat()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::AdjacencyInformation()
    :
    neighbors(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors>())
	,requests(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests>())
	,retransmissions(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions>())
	,neighbor_details(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails>())
{
    neighbors->parent = this;
    requests->parent = this;
    retransmissions->parent = this;
    neighbor_details->parent = this;

    yang_name = "adjacency-information"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::~AdjacencyInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::has_data() const
{
    return (neighbors !=  nullptr && neighbors->has_data())
	|| (requests !=  nullptr && requests->has_data())
	|| (retransmissions !=  nullptr && retransmissions->has_data())
	|| (neighbor_details !=  nullptr && neighbor_details->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (requests !=  nullptr && requests->has_operation())
	|| (retransmissions !=  nullptr && retransmissions->has_operation())
	|| (neighbor_details !=  nullptr && neighbor_details->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "requests")
    {
        if(requests == nullptr)
        {
            requests = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests>();
        }
        return requests;
    }

    if(child_yang_name == "retransmissions")
    {
        if(retransmissions == nullptr)
        {
            retransmissions = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions>();
        }
        return retransmissions;
    }

    if(child_yang_name == "neighbor-details")
    {
        if(neighbor_details == nullptr)
        {
            neighbor_details = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails>();
        }
        return neighbor_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(requests != nullptr)
    {
        children["requests"] = requests;
    }

    if(retransmissions != nullptr)
    {
        children["retransmissions"] = retransmissions;
    }

    if(neighbor_details != nullptr)
    {
        children["neighbor-details"] = neighbor_details;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors" || name == "requests" || name == "retransmissions" || name == "neighbor-details")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::has_data() const
{
    return interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_state.is_set
	|| dr_bdr_state.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_up_time.is_set
	|| neighbor_madj_interface.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-id" || name == "neighbor-address-xr" || name == "neighbor-interface-name" || name == "neighbor-dr-priority" || name == "neighbor-state" || name == "dr-bdr-state" || name == "neighbor-dead-timer" || name == "neighbor-up-time" || name == "neighbor-madj-interface")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Requests()
{

    yang_name = "requests"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::~Requests()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : request)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    request_neighbor_id{YType::str, "request-neighbor-id"},
    request_neighbor_address{YType::str, "request-neighbor-address"},
    request_interface_name{YType::str, "request-interface-name"}
{

    yang_name = "request"; yang_parent_name = "requests"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::~Request()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| request_neighbor_id.is_set
	|| request_neighbor_address.is_set
	|| request_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(request_neighbor_id.yfilter)
	|| ydk::is_set(request_neighbor_address.yfilter)
	|| ydk::is_set(request_interface_name.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (request_neighbor_id.is_set || is_set(request_neighbor_id.yfilter)) leaf_name_data.push_back(request_neighbor_id.get_name_leafdata());
    if (request_neighbor_address.is_set || is_set(request_neighbor_address.yfilter)) leaf_name_data.push_back(request_neighbor_address.get_name_leafdata());
    if (request_interface_name.is_set || is_set(request_interface_name.yfilter)) leaf_name_data.push_back(request_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : request)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id = value;
        request_neighbor_id.value_namespace = name_space;
        request_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address = value;
        request_neighbor_address.value_namespace = name_space;
        request_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name = value;
        request_interface_name.value_namespace = name_space;
        request_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request" || name == "interface-name" || name == "neighbor-address" || name == "request-neighbor-id" || name == "request-neighbor-address" || name == "request-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::Request_()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "request"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::~Request_()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmissions()
{

    yang_name = "retransmissions"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::~Retransmissions()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::has_data() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::has_operation() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmissions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmission")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission>();
        c->parent = this;
        retransmission.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : retransmission)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmission")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::Retransmission()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    retransmission_neighbor_id{YType::str, "retransmission-neighbor-id"},
    retransmission_neighbor_ip_address{YType::str, "retransmission-neighbor-ip-address"},
    retransmission_interface_name{YType::str, "retransmission-interface-name"},
    retransmission_timer{YType::uint32, "retransmission-timer"},
    retransmission_count{YType::uint32, "retransmission-count"}
{

    yang_name = "retransmission"; yang_parent_name = "retransmissions"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::~Retransmission()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::has_data() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| retransmission_neighbor_id.is_set
	|| retransmission_neighbor_ip_address.is_set
	|| retransmission_interface_name.is_set
	|| retransmission_timer.is_set
	|| retransmission_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::has_operation() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(retransmission_neighbor_id.yfilter)
	|| ydk::is_set(retransmission_neighbor_ip_address.yfilter)
	|| ydk::is_set(retransmission_interface_name.yfilter)
	|| ydk::is_set(retransmission_timer.yfilter)
	|| ydk::is_set(retransmission_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (retransmission_neighbor_id.is_set || is_set(retransmission_neighbor_id.yfilter)) leaf_name_data.push_back(retransmission_neighbor_id.get_name_leafdata());
    if (retransmission_neighbor_ip_address.is_set || is_set(retransmission_neighbor_ip_address.yfilter)) leaf_name_data.push_back(retransmission_neighbor_ip_address.get_name_leafdata());
    if (retransmission_interface_name.is_set || is_set(retransmission_interface_name.yfilter)) leaf_name_data.push_back(retransmission_interface_name.get_name_leafdata());
    if (retransmission_timer.is_set || is_set(retransmission_timer.yfilter)) leaf_name_data.push_back(retransmission_timer.get_name_leafdata());
    if (retransmission_count.is_set || is_set(retransmission_count.yfilter)) leaf_name_data.push_back(retransmission_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmission-area-db")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb>();
        c->parent = this;
        retransmission_area_db.push_back(c);
        return c;
    }

    if(child_yang_name == "retransmission-asdb")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb>();
        c->parent = this;
        retransmission_asdb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : retransmission_area_db)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : retransmission_asdb)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id = value;
        retransmission_neighbor_id.value_namespace = name_space;
        retransmission_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address = value;
        retransmission_neighbor_ip_address.value_namespace = name_space;
        retransmission_neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name = value;
        retransmission_interface_name.value_namespace = name_space;
        retransmission_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer = value;
        retransmission_timer.value_namespace = name_space;
        retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count = value;
        retransmission_count.value_namespace = name_space;
        retransmission_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name.yfilter = yfilter;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer.yfilter = yfilter;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmission-area-db" || name == "retransmission-asdb" || name == "interface-name" || name == "neighbor-address" || name == "retransmission-neighbor-id" || name == "retransmission-neighbor-ip-address" || name == "retransmission-interface-name" || name == "retransmission-timer" || name == "retransmission-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::RetransmissionAreaDb()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "retransmission-area-db"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::~RetransmissionAreaDb()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-area-db";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::RetransmissionAsdb()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "retransmission-asdb"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::~RetransmissionAsdb()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-asdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetails()
{

    yang_name = "neighbor-details"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::~NeighborDetails()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::has_data() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-detail")
    {
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail>();
        c->parent = this;
        neighbor_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-detail")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborDetail()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_area_id{YType::str, "neighbor-area-id"},
    state_change_count{YType::uint16, "state-change-count"},
    neighbor_cost{YType::uint16, "neighbor-cost"},
    neighbor_filter{YType::boolean, "neighbor-filter"},
    neighbor_designated_router_address{YType::str, "neighbor-designated-router-address"},
    neighbor_backup_designated_router_address{YType::str, "neighbor-backup-designated-router-address"},
    interface_type{YType::enumeration, "interface-type"},
    poll_interval{YType::uint32, "poll-interval"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    neighbor_option{YType::uint8, "neighbor-option"},
    pending_events{YType::uint16, "pending-events"},
    neighbor_lls_option{YType::uint32, "neighbor-lls-option"},
    oob_resynchronization{YType::boolean, "oob-resynchronization"},
    nsf_router_state{YType::enumeration, "nsf-router-state"},
    last_oob_time{YType::uint32, "last-oob-time"},
    lfa_interface{YType::str, "lfa-interface"},
    lfa_next_hop{YType::str, "lfa-next-hop"},
    lfa_neighbor_id{YType::str, "lfa-neighbor-id"},
    lfa_neighbor_revision{YType::uint32, "lfa-neighbor-revision"},
    neighbor_ack_list_count{YType::uint32, "neighbor-ack-list-count"},
    neighbor_ack_list_high_watermark{YType::uint32, "neighbor-ack-list-high-watermark"},
    adjacency_sid_label{YType::uint32, "adjacency-sid-label"},
    adjacency_sid_protected{YType::boolean, "adjacency-sid-protected"},
    adjacency_sid_unprotected_label{YType::uint32, "adjacency-sid-unprotected-label"},
    neighbor_interface_id{YType::uint16, "neighbor-interface-id"}
    	,
    neighbor_summary(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary>())
	,neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation>())
	,neighbor_retransmission_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>())
{
    neighbor_summary->parent = this;
    neighbor_bfd_information->parent = this;
    neighbor_retransmission_information->parent = this;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-details"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::~NeighborDetail()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_data() const
{
    return interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_area_id.is_set
	|| state_change_count.is_set
	|| neighbor_cost.is_set
	|| neighbor_filter.is_set
	|| neighbor_designated_router_address.is_set
	|| neighbor_backup_designated_router_address.is_set
	|| interface_type.is_set
	|| poll_interval.is_set
	|| next_poll_interval.is_set
	|| neighbor_option.is_set
	|| pending_events.is_set
	|| neighbor_lls_option.is_set
	|| oob_resynchronization.is_set
	|| nsf_router_state.is_set
	|| last_oob_time.is_set
	|| lfa_interface.is_set
	|| lfa_next_hop.is_set
	|| lfa_neighbor_id.is_set
	|| lfa_neighbor_revision.is_set
	|| neighbor_ack_list_count.is_set
	|| neighbor_ack_list_high_watermark.is_set
	|| adjacency_sid_label.is_set
	|| adjacency_sid_protected.is_set
	|| adjacency_sid_unprotected_label.is_set
	|| neighbor_interface_id.is_set
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_data())
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_area_id.yfilter)
	|| ydk::is_set(state_change_count.yfilter)
	|| ydk::is_set(neighbor_cost.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(neighbor_designated_router_address.yfilter)
	|| ydk::is_set(neighbor_backup_designated_router_address.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(next_poll_interval.yfilter)
	|| ydk::is_set(neighbor_option.yfilter)
	|| ydk::is_set(pending_events.yfilter)
	|| ydk::is_set(neighbor_lls_option.yfilter)
	|| ydk::is_set(oob_resynchronization.yfilter)
	|| ydk::is_set(nsf_router_state.yfilter)
	|| ydk::is_set(last_oob_time.yfilter)
	|| ydk::is_set(lfa_interface.yfilter)
	|| ydk::is_set(lfa_next_hop.yfilter)
	|| ydk::is_set(lfa_neighbor_id.yfilter)
	|| ydk::is_set(lfa_neighbor_revision.yfilter)
	|| ydk::is_set(neighbor_ack_list_count.yfilter)
	|| ydk::is_set(neighbor_ack_list_high_watermark.yfilter)
	|| ydk::is_set(adjacency_sid_label.yfilter)
	|| ydk::is_set(adjacency_sid_protected.yfilter)
	|| ydk::is_set(adjacency_sid_unprotected_label.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_operation())
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_area_id.is_set || is_set(neighbor_area_id.yfilter)) leaf_name_data.push_back(neighbor_area_id.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.yfilter)) leaf_name_data.push_back(state_change_count.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.yfilter)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.yfilter)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.yfilter)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.yfilter)) leaf_name_data.push_back(pending_events.get_name_leafdata());
    if (neighbor_lls_option.is_set || is_set(neighbor_lls_option.yfilter)) leaf_name_data.push_back(neighbor_lls_option.get_name_leafdata());
    if (oob_resynchronization.is_set || is_set(oob_resynchronization.yfilter)) leaf_name_data.push_back(oob_resynchronization.get_name_leafdata());
    if (nsf_router_state.is_set || is_set(nsf_router_state.yfilter)) leaf_name_data.push_back(nsf_router_state.get_name_leafdata());
    if (last_oob_time.is_set || is_set(last_oob_time.yfilter)) leaf_name_data.push_back(last_oob_time.get_name_leafdata());
    if (lfa_interface.is_set || is_set(lfa_interface.yfilter)) leaf_name_data.push_back(lfa_interface.get_name_leafdata());
    if (lfa_next_hop.is_set || is_set(lfa_next_hop.yfilter)) leaf_name_data.push_back(lfa_next_hop.get_name_leafdata());
    if (lfa_neighbor_id.is_set || is_set(lfa_neighbor_id.yfilter)) leaf_name_data.push_back(lfa_neighbor_id.get_name_leafdata());
    if (lfa_neighbor_revision.is_set || is_set(lfa_neighbor_revision.yfilter)) leaf_name_data.push_back(lfa_neighbor_revision.get_name_leafdata());
    if (neighbor_ack_list_count.is_set || is_set(neighbor_ack_list_count.yfilter)) leaf_name_data.push_back(neighbor_ack_list_count.get_name_leafdata());
    if (neighbor_ack_list_high_watermark.is_set || is_set(neighbor_ack_list_high_watermark.yfilter)) leaf_name_data.push_back(neighbor_ack_list_high_watermark.get_name_leafdata());
    if (adjacency_sid_label.is_set || is_set(adjacency_sid_label.yfilter)) leaf_name_data.push_back(adjacency_sid_label.get_name_leafdata());
    if (adjacency_sid_protected.is_set || is_set(adjacency_sid_protected.yfilter)) leaf_name_data.push_back(adjacency_sid_protected.get_name_leafdata());
    if (adjacency_sid_unprotected_label.is_set || is_set(adjacency_sid_unprotected_label.yfilter)) leaf_name_data.push_back(adjacency_sid_unprotected_label.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-summary")
    {
        if(neighbor_summary == nullptr)
        {
            neighbor_summary = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary>();
        }
        return neighbor_summary;
    }

    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    if(child_yang_name == "neighbor-retransmission-information")
    {
        if(neighbor_retransmission_information == nullptr)
        {
            neighbor_retransmission_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>();
        }
        return neighbor_retransmission_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_summary != nullptr)
    {
        children["neighbor-summary"] = neighbor_summary;
    }

    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    if(neighbor_retransmission_information != nullptr)
    {
        children["neighbor-retransmission-information"] = neighbor_retransmission_information;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id = value;
        neighbor_area_id.value_namespace = name_space;
        neighbor_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
        state_change_count.value_namespace = name_space;
        state_change_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost = value;
        neighbor_cost.value_namespace = name_space;
        neighbor_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address = value;
        neighbor_designated_router_address.value_namespace = name_space;
        neighbor_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address = value;
        neighbor_backup_designated_router_address.value_namespace = name_space;
        neighbor_backup_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
        next_poll_interval.value_namespace = name_space;
        next_poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
        neighbor_option.value_namespace = name_space;
        neighbor_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
        pending_events.value_namespace = name_space;
        pending_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option = value;
        neighbor_lls_option.value_namespace = name_space;
        neighbor_lls_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization = value;
        oob_resynchronization.value_namespace = name_space;
        oob_resynchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state = value;
        nsf_router_state.value_namespace = name_space;
        nsf_router_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time = value;
        last_oob_time.value_namespace = name_space;
        last_oob_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface = value;
        lfa_interface.value_namespace = name_space;
        lfa_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop = value;
        lfa_next_hop.value_namespace = name_space;
        lfa_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id = value;
        lfa_neighbor_id.value_namespace = name_space;
        lfa_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision = value;
        lfa_neighbor_revision.value_namespace = name_space;
        lfa_neighbor_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count = value;
        neighbor_ack_list_count.value_namespace = name_space;
        neighbor_ack_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark = value;
        neighbor_ack_list_high_watermark.value_namespace = name_space;
        neighbor_ack_list_high_watermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label = value;
        adjacency_sid_label.value_namespace = name_space;
        adjacency_sid_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected = value;
        adjacency_sid_protected.value_namespace = name_space;
        adjacency_sid_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label = value;
        adjacency_sid_unprotected_label.value_namespace = name_space;
        adjacency_sid_unprotected_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id.yfilter = yfilter;
    }
    if(value_path == "state-change-count")
    {
        state_change_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option.yfilter = yfilter;
    }
    if(value_path == "pending-events")
    {
        pending_events.yfilter = yfilter;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option.yfilter = yfilter;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization.yfilter = yfilter;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state.yfilter = yfilter;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time.yfilter = yfilter;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface.yfilter = yfilter;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop.yfilter = yfilter;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision.yfilter = yfilter;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-summary" || name == "neighbor-bfd-information" || name == "neighbor-retransmission-information" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-area-id" || name == "state-change-count" || name == "neighbor-cost" || name == "neighbor-filter" || name == "neighbor-designated-router-address" || name == "neighbor-backup-designated-router-address" || name == "interface-type" || name == "poll-interval" || name == "next-poll-interval" || name == "neighbor-option" || name == "pending-events" || name == "neighbor-lls-option" || name == "oob-resynchronization" || name == "nsf-router-state" || name == "last-oob-time" || name == "lfa-interface" || name == "lfa-next-hop" || name == "lfa-neighbor-id" || name == "lfa-neighbor-revision" || name == "neighbor-ack-list-count" || name == "neighbor-ack-list-high-watermark" || name == "adjacency-sid-label" || name == "adjacency-sid-protected" || name == "adjacency-sid-unprotected-label" || name == "neighbor-interface-id")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborSummary()
    :
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::~NeighborSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_data() const
{
    return neighbor_id.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_state.is_set
	|| dr_bdr_state.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_up_time.is_set
	|| neighbor_madj_interface.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "neighbor-id" || name == "neighbor-address-xr" || name == "neighbor-interface-name" || name == "neighbor-dr-priority" || name == "neighbor-state" || name == "dr-bdr-state" || name == "neighbor-dead-timer" || name == "neighbor-up-time" || name == "neighbor-madj-interface")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}


}
}

