
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSLA_JITTER_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IPSLA_JITTER_MIB {

CISCOIPSLAJITTERMIB::CISCOIPSLAJITTERMIB()
    :
    cipslaudpjittertmpltable(std::make_shared<CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable>())
	,cipslaicmpjittertmpltable(std::make_shared<CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable>())
{
    cipslaudpjittertmpltable->parent = this;
    cipslaicmpjittertmpltable->parent = this;

    yang_name = "CISCO-IPSLA-JITTER-MIB"; yang_parent_name = "CISCO-IPSLA-JITTER-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOIPSLAJITTERMIB::~CISCOIPSLAJITTERMIB()
{
}

bool CISCOIPSLAJITTERMIB::has_data() const
{
    return (cipslaudpjittertmpltable !=  nullptr && cipslaudpjittertmpltable->has_data())
	|| (cipslaicmpjittertmpltable !=  nullptr && cipslaicmpjittertmpltable->has_data());
}

bool CISCOIPSLAJITTERMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cipslaudpjittertmpltable !=  nullptr && cipslaudpjittertmpltable->has_operation())
	|| (cipslaicmpjittertmpltable !=  nullptr && cipslaicmpjittertmpltable->has_operation());
}

std::string CISCOIPSLAJITTERMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-JITTER-MIB:CISCO-IPSLA-JITTER-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSLAJITTERMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSLAJITTERMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaUdpJitterTmplTable")
    {
        if(cipslaudpjittertmpltable == nullptr)
        {
            cipslaudpjittertmpltable = std::make_shared<CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable>();
        }
        return cipslaudpjittertmpltable;
    }

    if(child_yang_name == "cipslaIcmpJitterTmplTable")
    {
        if(cipslaicmpjittertmpltable == nullptr)
        {
            cipslaicmpjittertmpltable = std::make_shared<CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable>();
        }
        return cipslaicmpjittertmpltable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSLAJITTERMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cipslaudpjittertmpltable != nullptr)
    {
        children["cipslaUdpJitterTmplTable"] = cipslaudpjittertmpltable;
    }

    if(cipslaicmpjittertmpltable != nullptr)
    {
        children["cipslaIcmpJitterTmplTable"] = cipslaicmpjittertmpltable;
    }

    return children;
}

void CISCOIPSLAJITTERMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSLAJITTERMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIPSLAJITTERMIB::clone_ptr() const
{
    return std::make_shared<CISCOIPSLAJITTERMIB>();
}

std::string CISCOIPSLAJITTERMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIPSLAJITTERMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIPSLAJITTERMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIPSLAJITTERMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIPSLAJITTERMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaUdpJitterTmplTable" || name == "cipslaIcmpJitterTmplTable")
        return true;
    return false;
}

CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmpltable()
{

    yang_name = "cipslaUdpJitterTmplTable"; yang_parent_name = "CISCO-IPSLA-JITTER-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::~Cipslaudpjittertmpltable()
{
}

bool CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::has_data() const
{
    for (std::size_t index=0; index<cipslaudpjittertmplentry.size(); index++)
    {
        if(cipslaudpjittertmplentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::has_operation() const
{
    for (std::size_t index=0; index<cipslaudpjittertmplentry.size(); index++)
    {
        if(cipslaudpjittertmplentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-JITTER-MIB:CISCO-IPSLA-JITTER-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaUdpJitterTmplTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaUdpJitterTmplEntry")
    {
        for(auto const & c : cipslaudpjittertmplentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry>();
        c->parent = this;
        cipslaudpjittertmplentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslaudpjittertmplentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaUdpJitterTmplEntry")
        return true;
    return false;
}

CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::Cipslaudpjittertmplentry()
    :
    cipslaudpjittertmplname{YType::str, "cipslaUdpJitterTmplName"},
    cipslaudpjittertmpldescription{YType::str, "cipslaUdpJitterTmplDescription"},
    cipslaudpjittertmplcontrolenable{YType::boolean, "cipslaUdpJitterTmplControlEnable"},
    cipslaudpjittertmpltimeout{YType::uint32, "cipslaUdpJitterTmplTimeOut"},
    cipslaudpjittertmplverifydata{YType::boolean, "cipslaUdpJitterTmplVerifyData"},
    cipslaudpjittertmplcodectype{YType::enumeration, "cipslaUdpJitterTmplCodecType"},
    cipslaudpjittertmplcodecinterval{YType::uint32, "cipslaUdpJitterTmplCodecInterval"},
    cipslaudpjittertmplcodecpayload{YType::uint32, "cipslaUdpJitterTmplCodecPayload"},
    cipslaudpjittertmplcodecnumpkts{YType::uint32, "cipslaUdpJitterTmplCodecNumPkts"},
    cipslaudpjittertmplinterval{YType::uint32, "cipslaUdpJitterTmplInterval"},
    cipslaudpjittertmplnumpkts{YType::uint32, "cipslaUdpJitterTmplNumPkts"},
    cipslaudpjittertmplsrcaddrtype{YType::enumeration, "cipslaUdpJitterTmplSrcAddrType"},
    cipslaudpjittertmplsrcaddr{YType::str, "cipslaUdpJitterTmplSrcAddr"},
    cipslaudpjittertmplsrcport{YType::uint16, "cipslaUdpJitterTmplSrcPort"},
    cipslaudpjittertmplprecision{YType::enumeration, "cipslaUdpJitterTmplPrecision"},
    cipslaudpjittertmplreqdatasize{YType::uint32, "cipslaUdpJitterTmplReqDataSize"},
    cipslaudpjittertmplpktpriority{YType::enumeration, "cipslaUdpJitterTmplPktPriority"},
    cipslaudpjittertmpltos{YType::uint32, "cipslaUdpJitterTmplTOS"},
    cipslaudpjittertmplvrfname{YType::str, "cipslaUdpJitterTmplVrfName"},
    cipslaudpjittertmplthreshold{YType::uint32, "cipslaUdpJitterTmplThreshold"},
    cipslaudpjittertmplntptolabs{YType::uint32, "cipslaUdpJitterTmplNTPTolAbs"},
    cipslaudpjittertmplntptolpct{YType::uint32, "cipslaUdpJitterTmplNTPTolPct"},
    cipslaudpjittertmplntptoltype{YType::enumeration, "cipslaUdpJitterTmplNTPTolType"},
    cipslaudpjittertmplicpiffactor{YType::uint32, "cipslaUdpJitterTmplIcpifFactor"},
    cipslaudpjittertmplstatshours{YType::uint32, "cipslaUdpJitterTmplStatsHours"},
    cipslaudpjittertmpldistbuckets{YType::uint32, "cipslaUdpJitterTmplDistBuckets"},
    cipslaudpjittertmpldistinterval{YType::uint32, "cipslaUdpJitterTmplDistInterval"},
    cipslaudpjittertmplstoragetype{YType::enumeration, "cipslaUdpJitterTmplStorageType"},
    cipslaudpjittertmplrowstatus{YType::enumeration, "cipslaUdpJitterTmplRowStatus"}
{

    yang_name = "cipslaUdpJitterTmplEntry"; yang_parent_name = "cipslaUdpJitterTmplTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::~Cipslaudpjittertmplentry()
{
}

bool CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::has_data() const
{
    return cipslaudpjittertmplname.is_set
	|| cipslaudpjittertmpldescription.is_set
	|| cipslaudpjittertmplcontrolenable.is_set
	|| cipslaudpjittertmpltimeout.is_set
	|| cipslaudpjittertmplverifydata.is_set
	|| cipslaudpjittertmplcodectype.is_set
	|| cipslaudpjittertmplcodecinterval.is_set
	|| cipslaudpjittertmplcodecpayload.is_set
	|| cipslaudpjittertmplcodecnumpkts.is_set
	|| cipslaudpjittertmplinterval.is_set
	|| cipslaudpjittertmplnumpkts.is_set
	|| cipslaudpjittertmplsrcaddrtype.is_set
	|| cipslaudpjittertmplsrcaddr.is_set
	|| cipslaudpjittertmplsrcport.is_set
	|| cipslaudpjittertmplprecision.is_set
	|| cipslaudpjittertmplreqdatasize.is_set
	|| cipslaudpjittertmplpktpriority.is_set
	|| cipslaudpjittertmpltos.is_set
	|| cipslaudpjittertmplvrfname.is_set
	|| cipslaudpjittertmplthreshold.is_set
	|| cipslaudpjittertmplntptolabs.is_set
	|| cipslaudpjittertmplntptolpct.is_set
	|| cipslaudpjittertmplntptoltype.is_set
	|| cipslaudpjittertmplicpiffactor.is_set
	|| cipslaudpjittertmplstatshours.is_set
	|| cipslaudpjittertmpldistbuckets.is_set
	|| cipslaudpjittertmpldistinterval.is_set
	|| cipslaudpjittertmplstoragetype.is_set
	|| cipslaudpjittertmplrowstatus.is_set;
}

bool CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipslaudpjittertmplname.yfilter)
	|| ydk::is_set(cipslaudpjittertmpldescription.yfilter)
	|| ydk::is_set(cipslaudpjittertmplcontrolenable.yfilter)
	|| ydk::is_set(cipslaudpjittertmpltimeout.yfilter)
	|| ydk::is_set(cipslaudpjittertmplverifydata.yfilter)
	|| ydk::is_set(cipslaudpjittertmplcodectype.yfilter)
	|| ydk::is_set(cipslaudpjittertmplcodecinterval.yfilter)
	|| ydk::is_set(cipslaudpjittertmplcodecpayload.yfilter)
	|| ydk::is_set(cipslaudpjittertmplcodecnumpkts.yfilter)
	|| ydk::is_set(cipslaudpjittertmplinterval.yfilter)
	|| ydk::is_set(cipslaudpjittertmplnumpkts.yfilter)
	|| ydk::is_set(cipslaudpjittertmplsrcaddrtype.yfilter)
	|| ydk::is_set(cipslaudpjittertmplsrcaddr.yfilter)
	|| ydk::is_set(cipslaudpjittertmplsrcport.yfilter)
	|| ydk::is_set(cipslaudpjittertmplprecision.yfilter)
	|| ydk::is_set(cipslaudpjittertmplreqdatasize.yfilter)
	|| ydk::is_set(cipslaudpjittertmplpktpriority.yfilter)
	|| ydk::is_set(cipslaudpjittertmpltos.yfilter)
	|| ydk::is_set(cipslaudpjittertmplvrfname.yfilter)
	|| ydk::is_set(cipslaudpjittertmplthreshold.yfilter)
	|| ydk::is_set(cipslaudpjittertmplntptolabs.yfilter)
	|| ydk::is_set(cipslaudpjittertmplntptolpct.yfilter)
	|| ydk::is_set(cipslaudpjittertmplntptoltype.yfilter)
	|| ydk::is_set(cipslaudpjittertmplicpiffactor.yfilter)
	|| ydk::is_set(cipslaudpjittertmplstatshours.yfilter)
	|| ydk::is_set(cipslaudpjittertmpldistbuckets.yfilter)
	|| ydk::is_set(cipslaudpjittertmpldistinterval.yfilter)
	|| ydk::is_set(cipslaudpjittertmplstoragetype.yfilter)
	|| ydk::is_set(cipslaudpjittertmplrowstatus.yfilter);
}

std::string CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-JITTER-MIB:CISCO-IPSLA-JITTER-MIB/cipslaUdpJitterTmplTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaUdpJitterTmplEntry" <<"[cipslaUdpJitterTmplName='" <<cipslaudpjittertmplname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaudpjittertmplname.is_set || is_set(cipslaudpjittertmplname.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplname.get_name_leafdata());
    if (cipslaudpjittertmpldescription.is_set || is_set(cipslaudpjittertmpldescription.yfilter)) leaf_name_data.push_back(cipslaudpjittertmpldescription.get_name_leafdata());
    if (cipslaudpjittertmplcontrolenable.is_set || is_set(cipslaudpjittertmplcontrolenable.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplcontrolenable.get_name_leafdata());
    if (cipslaudpjittertmpltimeout.is_set || is_set(cipslaudpjittertmpltimeout.yfilter)) leaf_name_data.push_back(cipslaudpjittertmpltimeout.get_name_leafdata());
    if (cipslaudpjittertmplverifydata.is_set || is_set(cipslaudpjittertmplverifydata.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplverifydata.get_name_leafdata());
    if (cipslaudpjittertmplcodectype.is_set || is_set(cipslaudpjittertmplcodectype.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplcodectype.get_name_leafdata());
    if (cipslaudpjittertmplcodecinterval.is_set || is_set(cipslaudpjittertmplcodecinterval.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplcodecinterval.get_name_leafdata());
    if (cipslaudpjittertmplcodecpayload.is_set || is_set(cipslaudpjittertmplcodecpayload.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplcodecpayload.get_name_leafdata());
    if (cipslaudpjittertmplcodecnumpkts.is_set || is_set(cipslaudpjittertmplcodecnumpkts.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplcodecnumpkts.get_name_leafdata());
    if (cipslaudpjittertmplinterval.is_set || is_set(cipslaudpjittertmplinterval.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplinterval.get_name_leafdata());
    if (cipslaudpjittertmplnumpkts.is_set || is_set(cipslaudpjittertmplnumpkts.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplnumpkts.get_name_leafdata());
    if (cipslaudpjittertmplsrcaddrtype.is_set || is_set(cipslaudpjittertmplsrcaddrtype.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplsrcaddrtype.get_name_leafdata());
    if (cipslaudpjittertmplsrcaddr.is_set || is_set(cipslaudpjittertmplsrcaddr.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplsrcaddr.get_name_leafdata());
    if (cipslaudpjittertmplsrcport.is_set || is_set(cipslaudpjittertmplsrcport.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplsrcport.get_name_leafdata());
    if (cipslaudpjittertmplprecision.is_set || is_set(cipslaudpjittertmplprecision.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplprecision.get_name_leafdata());
    if (cipslaudpjittertmplreqdatasize.is_set || is_set(cipslaudpjittertmplreqdatasize.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplreqdatasize.get_name_leafdata());
    if (cipslaudpjittertmplpktpriority.is_set || is_set(cipslaudpjittertmplpktpriority.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplpktpriority.get_name_leafdata());
    if (cipslaudpjittertmpltos.is_set || is_set(cipslaudpjittertmpltos.yfilter)) leaf_name_data.push_back(cipslaudpjittertmpltos.get_name_leafdata());
    if (cipslaudpjittertmplvrfname.is_set || is_set(cipslaudpjittertmplvrfname.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplvrfname.get_name_leafdata());
    if (cipslaudpjittertmplthreshold.is_set || is_set(cipslaudpjittertmplthreshold.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplthreshold.get_name_leafdata());
    if (cipslaudpjittertmplntptolabs.is_set || is_set(cipslaudpjittertmplntptolabs.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplntptolabs.get_name_leafdata());
    if (cipslaudpjittertmplntptolpct.is_set || is_set(cipslaudpjittertmplntptolpct.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplntptolpct.get_name_leafdata());
    if (cipslaudpjittertmplntptoltype.is_set || is_set(cipslaudpjittertmplntptoltype.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplntptoltype.get_name_leafdata());
    if (cipslaudpjittertmplicpiffactor.is_set || is_set(cipslaudpjittertmplicpiffactor.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplicpiffactor.get_name_leafdata());
    if (cipslaudpjittertmplstatshours.is_set || is_set(cipslaudpjittertmplstatshours.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplstatshours.get_name_leafdata());
    if (cipslaudpjittertmpldistbuckets.is_set || is_set(cipslaudpjittertmpldistbuckets.yfilter)) leaf_name_data.push_back(cipslaudpjittertmpldistbuckets.get_name_leafdata());
    if (cipslaudpjittertmpldistinterval.is_set || is_set(cipslaudpjittertmpldistinterval.yfilter)) leaf_name_data.push_back(cipslaudpjittertmpldistinterval.get_name_leafdata());
    if (cipslaudpjittertmplstoragetype.is_set || is_set(cipslaudpjittertmplstoragetype.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplstoragetype.get_name_leafdata());
    if (cipslaudpjittertmplrowstatus.is_set || is_set(cipslaudpjittertmplrowstatus.yfilter)) leaf_name_data.push_back(cipslaudpjittertmplrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipslaUdpJitterTmplName")
    {
        cipslaudpjittertmplname = value;
        cipslaudpjittertmplname.value_namespace = name_space;
        cipslaudpjittertmplname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplDescription")
    {
        cipslaudpjittertmpldescription = value;
        cipslaudpjittertmpldescription.value_namespace = name_space;
        cipslaudpjittertmpldescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplControlEnable")
    {
        cipslaudpjittertmplcontrolenable = value;
        cipslaudpjittertmplcontrolenable.value_namespace = name_space;
        cipslaudpjittertmplcontrolenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplTimeOut")
    {
        cipslaudpjittertmpltimeout = value;
        cipslaudpjittertmpltimeout.value_namespace = name_space;
        cipslaudpjittertmpltimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplVerifyData")
    {
        cipslaudpjittertmplverifydata = value;
        cipslaudpjittertmplverifydata.value_namespace = name_space;
        cipslaudpjittertmplverifydata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplCodecType")
    {
        cipslaudpjittertmplcodectype = value;
        cipslaudpjittertmplcodectype.value_namespace = name_space;
        cipslaudpjittertmplcodectype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplCodecInterval")
    {
        cipslaudpjittertmplcodecinterval = value;
        cipslaudpjittertmplcodecinterval.value_namespace = name_space;
        cipslaudpjittertmplcodecinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplCodecPayload")
    {
        cipslaudpjittertmplcodecpayload = value;
        cipslaudpjittertmplcodecpayload.value_namespace = name_space;
        cipslaudpjittertmplcodecpayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplCodecNumPkts")
    {
        cipslaudpjittertmplcodecnumpkts = value;
        cipslaudpjittertmplcodecnumpkts.value_namespace = name_space;
        cipslaudpjittertmplcodecnumpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplInterval")
    {
        cipslaudpjittertmplinterval = value;
        cipslaudpjittertmplinterval.value_namespace = name_space;
        cipslaudpjittertmplinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplNumPkts")
    {
        cipslaudpjittertmplnumpkts = value;
        cipslaudpjittertmplnumpkts.value_namespace = name_space;
        cipslaudpjittertmplnumpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplSrcAddrType")
    {
        cipslaudpjittertmplsrcaddrtype = value;
        cipslaudpjittertmplsrcaddrtype.value_namespace = name_space;
        cipslaudpjittertmplsrcaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplSrcAddr")
    {
        cipslaudpjittertmplsrcaddr = value;
        cipslaudpjittertmplsrcaddr.value_namespace = name_space;
        cipslaudpjittertmplsrcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplSrcPort")
    {
        cipslaudpjittertmplsrcport = value;
        cipslaudpjittertmplsrcport.value_namespace = name_space;
        cipslaudpjittertmplsrcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplPrecision")
    {
        cipslaudpjittertmplprecision = value;
        cipslaudpjittertmplprecision.value_namespace = name_space;
        cipslaudpjittertmplprecision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplReqDataSize")
    {
        cipslaudpjittertmplreqdatasize = value;
        cipslaudpjittertmplreqdatasize.value_namespace = name_space;
        cipslaudpjittertmplreqdatasize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplPktPriority")
    {
        cipslaudpjittertmplpktpriority = value;
        cipslaudpjittertmplpktpriority.value_namespace = name_space;
        cipslaudpjittertmplpktpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplTOS")
    {
        cipslaudpjittertmpltos = value;
        cipslaudpjittertmpltos.value_namespace = name_space;
        cipslaudpjittertmpltos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplVrfName")
    {
        cipslaudpjittertmplvrfname = value;
        cipslaudpjittertmplvrfname.value_namespace = name_space;
        cipslaudpjittertmplvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplThreshold")
    {
        cipslaudpjittertmplthreshold = value;
        cipslaudpjittertmplthreshold.value_namespace = name_space;
        cipslaudpjittertmplthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplNTPTolAbs")
    {
        cipslaudpjittertmplntptolabs = value;
        cipslaudpjittertmplntptolabs.value_namespace = name_space;
        cipslaudpjittertmplntptolabs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplNTPTolPct")
    {
        cipslaudpjittertmplntptolpct = value;
        cipslaudpjittertmplntptolpct.value_namespace = name_space;
        cipslaudpjittertmplntptolpct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplNTPTolType")
    {
        cipslaudpjittertmplntptoltype = value;
        cipslaudpjittertmplntptoltype.value_namespace = name_space;
        cipslaudpjittertmplntptoltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplIcpifFactor")
    {
        cipslaudpjittertmplicpiffactor = value;
        cipslaudpjittertmplicpiffactor.value_namespace = name_space;
        cipslaudpjittertmplicpiffactor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplStatsHours")
    {
        cipslaudpjittertmplstatshours = value;
        cipslaudpjittertmplstatshours.value_namespace = name_space;
        cipslaudpjittertmplstatshours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplDistBuckets")
    {
        cipslaudpjittertmpldistbuckets = value;
        cipslaudpjittertmpldistbuckets.value_namespace = name_space;
        cipslaudpjittertmpldistbuckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplDistInterval")
    {
        cipslaudpjittertmpldistinterval = value;
        cipslaudpjittertmpldistinterval.value_namespace = name_space;
        cipslaudpjittertmpldistinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplStorageType")
    {
        cipslaudpjittertmplstoragetype = value;
        cipslaudpjittertmplstoragetype.value_namespace = name_space;
        cipslaudpjittertmplstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaUdpJitterTmplRowStatus")
    {
        cipslaudpjittertmplrowstatus = value;
        cipslaudpjittertmplrowstatus.value_namespace = name_space;
        cipslaudpjittertmplrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipslaUdpJitterTmplName")
    {
        cipslaudpjittertmplname.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplDescription")
    {
        cipslaudpjittertmpldescription.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplControlEnable")
    {
        cipslaudpjittertmplcontrolenable.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplTimeOut")
    {
        cipslaudpjittertmpltimeout.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplVerifyData")
    {
        cipslaudpjittertmplverifydata.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplCodecType")
    {
        cipslaudpjittertmplcodectype.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplCodecInterval")
    {
        cipslaudpjittertmplcodecinterval.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplCodecPayload")
    {
        cipslaudpjittertmplcodecpayload.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplCodecNumPkts")
    {
        cipslaudpjittertmplcodecnumpkts.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplInterval")
    {
        cipslaudpjittertmplinterval.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplNumPkts")
    {
        cipslaudpjittertmplnumpkts.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplSrcAddrType")
    {
        cipslaudpjittertmplsrcaddrtype.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplSrcAddr")
    {
        cipslaudpjittertmplsrcaddr.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplSrcPort")
    {
        cipslaudpjittertmplsrcport.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplPrecision")
    {
        cipslaudpjittertmplprecision.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplReqDataSize")
    {
        cipslaudpjittertmplreqdatasize.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplPktPriority")
    {
        cipslaudpjittertmplpktpriority.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplTOS")
    {
        cipslaudpjittertmpltos.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplVrfName")
    {
        cipslaudpjittertmplvrfname.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplThreshold")
    {
        cipslaudpjittertmplthreshold.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplNTPTolAbs")
    {
        cipslaudpjittertmplntptolabs.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplNTPTolPct")
    {
        cipslaudpjittertmplntptolpct.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplNTPTolType")
    {
        cipslaudpjittertmplntptoltype.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplIcpifFactor")
    {
        cipslaudpjittertmplicpiffactor.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplStatsHours")
    {
        cipslaudpjittertmplstatshours.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplDistBuckets")
    {
        cipslaudpjittertmpldistbuckets.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplDistInterval")
    {
        cipslaudpjittertmpldistinterval.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplStorageType")
    {
        cipslaudpjittertmplstoragetype.yfilter = yfilter;
    }
    if(value_path == "cipslaUdpJitterTmplRowStatus")
    {
        cipslaudpjittertmplrowstatus.yfilter = yfilter;
    }
}

bool CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaUdpJitterTmplName" || name == "cipslaUdpJitterTmplDescription" || name == "cipslaUdpJitterTmplControlEnable" || name == "cipslaUdpJitterTmplTimeOut" || name == "cipslaUdpJitterTmplVerifyData" || name == "cipslaUdpJitterTmplCodecType" || name == "cipslaUdpJitterTmplCodecInterval" || name == "cipslaUdpJitterTmplCodecPayload" || name == "cipslaUdpJitterTmplCodecNumPkts" || name == "cipslaUdpJitterTmplInterval" || name == "cipslaUdpJitterTmplNumPkts" || name == "cipslaUdpJitterTmplSrcAddrType" || name == "cipslaUdpJitterTmplSrcAddr" || name == "cipslaUdpJitterTmplSrcPort" || name == "cipslaUdpJitterTmplPrecision" || name == "cipslaUdpJitterTmplReqDataSize" || name == "cipslaUdpJitterTmplPktPriority" || name == "cipslaUdpJitterTmplTOS" || name == "cipslaUdpJitterTmplVrfName" || name == "cipslaUdpJitterTmplThreshold" || name == "cipslaUdpJitterTmplNTPTolAbs" || name == "cipslaUdpJitterTmplNTPTolPct" || name == "cipslaUdpJitterTmplNTPTolType" || name == "cipslaUdpJitterTmplIcpifFactor" || name == "cipslaUdpJitterTmplStatsHours" || name == "cipslaUdpJitterTmplDistBuckets" || name == "cipslaUdpJitterTmplDistInterval" || name == "cipslaUdpJitterTmplStorageType" || name == "cipslaUdpJitterTmplRowStatus")
        return true;
    return false;
}

CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::Cipslaicmpjittertmpltable()
{

    yang_name = "cipslaIcmpJitterTmplTable"; yang_parent_name = "CISCO-IPSLA-JITTER-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::~Cipslaicmpjittertmpltable()
{
}

bool CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::has_data() const
{
    for (std::size_t index=0; index<cipslaicmpjittertmplentry.size(); index++)
    {
        if(cipslaicmpjittertmplentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::has_operation() const
{
    for (std::size_t index=0; index<cipslaicmpjittertmplentry.size(); index++)
    {
        if(cipslaicmpjittertmplentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-JITTER-MIB:CISCO-IPSLA-JITTER-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaIcmpJitterTmplTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaIcmpJitterTmplEntry")
    {
        for(auto const & c : cipslaicmpjittertmplentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry>();
        c->parent = this;
        cipslaicmpjittertmplentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslaicmpjittertmplentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaIcmpJitterTmplEntry")
        return true;
    return false;
}

CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::Cipslaicmpjittertmplentry()
    :
    cipslaicmpjittertmplname{YType::str, "cipslaIcmpJitterTmplName"},
    cipslaicmpjittertmpldescription{YType::str, "cipslaIcmpJitterTmplDescription"},
    cipslaicmpjittertmpltimeout{YType::uint32, "cipslaIcmpJitterTmplTimeOut"},
    cipslaicmpjittertmplverifydata{YType::boolean, "cipslaIcmpJitterTmplVerifyData"},
    cipslaicmpjittertmplnumpkts{YType::uint32, "cipslaIcmpJitterTmplNumPkts"},
    cipslaicmpjittertmplinterval{YType::uint32, "cipslaIcmpJitterTmplInterval"},
    cipslaicmpjittertmplsrcaddrtype{YType::enumeration, "cipslaIcmpJitterTmplSrcAddrType"},
    cipslaicmpjittertmplsrcaddr{YType::str, "cipslaIcmpJitterTmplSrcAddr"},
    cipslaicmpjittertmpltos{YType::uint32, "cipslaIcmpJitterTmplTOS"},
    cipslaicmpjittertmplvrfname{YType::str, "cipslaIcmpJitterTmplVrfName"},
    cipslaicmpjittertmplthreshold{YType::uint32, "cipslaIcmpJitterTmplThreshold"},
    cipslaicmpjittertmplstatshours{YType::uint32, "cipslaIcmpJitterTmplStatsHours"},
    cipslaicmpjittertmpldistbuckets{YType::uint32, "cipslaIcmpJitterTmplDistBuckets"},
    cipslaicmpjittertmpldistinterval{YType::uint32, "cipslaIcmpJitterTmplDistInterval"},
    cipslaicmpjittertmplstoragetype{YType::enumeration, "cipslaIcmpJitterTmplStorageType"},
    cipslaicmpjittertmplrowstatus{YType::enumeration, "cipslaIcmpJitterTmplRowStatus"}
{

    yang_name = "cipslaIcmpJitterTmplEntry"; yang_parent_name = "cipslaIcmpJitterTmplTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::~Cipslaicmpjittertmplentry()
{
}

bool CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::has_data() const
{
    return cipslaicmpjittertmplname.is_set
	|| cipslaicmpjittertmpldescription.is_set
	|| cipslaicmpjittertmpltimeout.is_set
	|| cipslaicmpjittertmplverifydata.is_set
	|| cipslaicmpjittertmplnumpkts.is_set
	|| cipslaicmpjittertmplinterval.is_set
	|| cipslaicmpjittertmplsrcaddrtype.is_set
	|| cipslaicmpjittertmplsrcaddr.is_set
	|| cipslaicmpjittertmpltos.is_set
	|| cipslaicmpjittertmplvrfname.is_set
	|| cipslaicmpjittertmplthreshold.is_set
	|| cipslaicmpjittertmplstatshours.is_set
	|| cipslaicmpjittertmpldistbuckets.is_set
	|| cipslaicmpjittertmpldistinterval.is_set
	|| cipslaicmpjittertmplstoragetype.is_set
	|| cipslaicmpjittertmplrowstatus.is_set;
}

bool CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipslaicmpjittertmplname.yfilter)
	|| ydk::is_set(cipslaicmpjittertmpldescription.yfilter)
	|| ydk::is_set(cipslaicmpjittertmpltimeout.yfilter)
	|| ydk::is_set(cipslaicmpjittertmplverifydata.yfilter)
	|| ydk::is_set(cipslaicmpjittertmplnumpkts.yfilter)
	|| ydk::is_set(cipslaicmpjittertmplinterval.yfilter)
	|| ydk::is_set(cipslaicmpjittertmplsrcaddrtype.yfilter)
	|| ydk::is_set(cipslaicmpjittertmplsrcaddr.yfilter)
	|| ydk::is_set(cipslaicmpjittertmpltos.yfilter)
	|| ydk::is_set(cipslaicmpjittertmplvrfname.yfilter)
	|| ydk::is_set(cipslaicmpjittertmplthreshold.yfilter)
	|| ydk::is_set(cipslaicmpjittertmplstatshours.yfilter)
	|| ydk::is_set(cipslaicmpjittertmpldistbuckets.yfilter)
	|| ydk::is_set(cipslaicmpjittertmpldistinterval.yfilter)
	|| ydk::is_set(cipslaicmpjittertmplstoragetype.yfilter)
	|| ydk::is_set(cipslaicmpjittertmplrowstatus.yfilter);
}

std::string CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-JITTER-MIB:CISCO-IPSLA-JITTER-MIB/cipslaIcmpJitterTmplTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaIcmpJitterTmplEntry" <<"[cipslaIcmpJitterTmplName='" <<cipslaicmpjittertmplname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaicmpjittertmplname.is_set || is_set(cipslaicmpjittertmplname.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmplname.get_name_leafdata());
    if (cipslaicmpjittertmpldescription.is_set || is_set(cipslaicmpjittertmpldescription.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmpldescription.get_name_leafdata());
    if (cipslaicmpjittertmpltimeout.is_set || is_set(cipslaicmpjittertmpltimeout.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmpltimeout.get_name_leafdata());
    if (cipslaicmpjittertmplverifydata.is_set || is_set(cipslaicmpjittertmplverifydata.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmplverifydata.get_name_leafdata());
    if (cipslaicmpjittertmplnumpkts.is_set || is_set(cipslaicmpjittertmplnumpkts.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmplnumpkts.get_name_leafdata());
    if (cipslaicmpjittertmplinterval.is_set || is_set(cipslaicmpjittertmplinterval.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmplinterval.get_name_leafdata());
    if (cipslaicmpjittertmplsrcaddrtype.is_set || is_set(cipslaicmpjittertmplsrcaddrtype.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmplsrcaddrtype.get_name_leafdata());
    if (cipslaicmpjittertmplsrcaddr.is_set || is_set(cipslaicmpjittertmplsrcaddr.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmplsrcaddr.get_name_leafdata());
    if (cipslaicmpjittertmpltos.is_set || is_set(cipslaicmpjittertmpltos.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmpltos.get_name_leafdata());
    if (cipslaicmpjittertmplvrfname.is_set || is_set(cipslaicmpjittertmplvrfname.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmplvrfname.get_name_leafdata());
    if (cipslaicmpjittertmplthreshold.is_set || is_set(cipslaicmpjittertmplthreshold.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmplthreshold.get_name_leafdata());
    if (cipslaicmpjittertmplstatshours.is_set || is_set(cipslaicmpjittertmplstatshours.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmplstatshours.get_name_leafdata());
    if (cipslaicmpjittertmpldistbuckets.is_set || is_set(cipslaicmpjittertmpldistbuckets.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmpldistbuckets.get_name_leafdata());
    if (cipslaicmpjittertmpldistinterval.is_set || is_set(cipslaicmpjittertmpldistinterval.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmpldistinterval.get_name_leafdata());
    if (cipslaicmpjittertmplstoragetype.is_set || is_set(cipslaicmpjittertmplstoragetype.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmplstoragetype.get_name_leafdata());
    if (cipslaicmpjittertmplrowstatus.is_set || is_set(cipslaicmpjittertmplrowstatus.yfilter)) leaf_name_data.push_back(cipslaicmpjittertmplrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipslaIcmpJitterTmplName")
    {
        cipslaicmpjittertmplname = value;
        cipslaicmpjittertmplname.value_namespace = name_space;
        cipslaicmpjittertmplname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplDescription")
    {
        cipslaicmpjittertmpldescription = value;
        cipslaicmpjittertmpldescription.value_namespace = name_space;
        cipslaicmpjittertmpldescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplTimeOut")
    {
        cipslaicmpjittertmpltimeout = value;
        cipslaicmpjittertmpltimeout.value_namespace = name_space;
        cipslaicmpjittertmpltimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplVerifyData")
    {
        cipslaicmpjittertmplverifydata = value;
        cipslaicmpjittertmplverifydata.value_namespace = name_space;
        cipslaicmpjittertmplverifydata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplNumPkts")
    {
        cipslaicmpjittertmplnumpkts = value;
        cipslaicmpjittertmplnumpkts.value_namespace = name_space;
        cipslaicmpjittertmplnumpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplInterval")
    {
        cipslaicmpjittertmplinterval = value;
        cipslaicmpjittertmplinterval.value_namespace = name_space;
        cipslaicmpjittertmplinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplSrcAddrType")
    {
        cipslaicmpjittertmplsrcaddrtype = value;
        cipslaicmpjittertmplsrcaddrtype.value_namespace = name_space;
        cipslaicmpjittertmplsrcaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplSrcAddr")
    {
        cipslaicmpjittertmplsrcaddr = value;
        cipslaicmpjittertmplsrcaddr.value_namespace = name_space;
        cipslaicmpjittertmplsrcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplTOS")
    {
        cipslaicmpjittertmpltos = value;
        cipslaicmpjittertmpltos.value_namespace = name_space;
        cipslaicmpjittertmpltos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplVrfName")
    {
        cipslaicmpjittertmplvrfname = value;
        cipslaicmpjittertmplvrfname.value_namespace = name_space;
        cipslaicmpjittertmplvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplThreshold")
    {
        cipslaicmpjittertmplthreshold = value;
        cipslaicmpjittertmplthreshold.value_namespace = name_space;
        cipslaicmpjittertmplthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplStatsHours")
    {
        cipslaicmpjittertmplstatshours = value;
        cipslaicmpjittertmplstatshours.value_namespace = name_space;
        cipslaicmpjittertmplstatshours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplDistBuckets")
    {
        cipslaicmpjittertmpldistbuckets = value;
        cipslaicmpjittertmpldistbuckets.value_namespace = name_space;
        cipslaicmpjittertmpldistbuckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplDistInterval")
    {
        cipslaicmpjittertmpldistinterval = value;
        cipslaicmpjittertmpldistinterval.value_namespace = name_space;
        cipslaicmpjittertmpldistinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplStorageType")
    {
        cipslaicmpjittertmplstoragetype = value;
        cipslaicmpjittertmplstoragetype.value_namespace = name_space;
        cipslaicmpjittertmplstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipslaIcmpJitterTmplRowStatus")
    {
        cipslaicmpjittertmplrowstatus = value;
        cipslaicmpjittertmplrowstatus.value_namespace = name_space;
        cipslaicmpjittertmplrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipslaIcmpJitterTmplName")
    {
        cipslaicmpjittertmplname.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplDescription")
    {
        cipslaicmpjittertmpldescription.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplTimeOut")
    {
        cipslaicmpjittertmpltimeout.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplVerifyData")
    {
        cipslaicmpjittertmplverifydata.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplNumPkts")
    {
        cipslaicmpjittertmplnumpkts.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplInterval")
    {
        cipslaicmpjittertmplinterval.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplSrcAddrType")
    {
        cipslaicmpjittertmplsrcaddrtype.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplSrcAddr")
    {
        cipslaicmpjittertmplsrcaddr.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplTOS")
    {
        cipslaicmpjittertmpltos.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplVrfName")
    {
        cipslaicmpjittertmplvrfname.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplThreshold")
    {
        cipslaicmpjittertmplthreshold.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplStatsHours")
    {
        cipslaicmpjittertmplstatshours.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplDistBuckets")
    {
        cipslaicmpjittertmpldistbuckets.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplDistInterval")
    {
        cipslaicmpjittertmpldistinterval.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplStorageType")
    {
        cipslaicmpjittertmplstoragetype.yfilter = yfilter;
    }
    if(value_path == "cipslaIcmpJitterTmplRowStatus")
    {
        cipslaicmpjittertmplrowstatus.yfilter = yfilter;
    }
}

bool CISCOIPSLAJITTERMIB::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipslaIcmpJitterTmplName" || name == "cipslaIcmpJitterTmplDescription" || name == "cipslaIcmpJitterTmplTimeOut" || name == "cipslaIcmpJitterTmplVerifyData" || name == "cipslaIcmpJitterTmplNumPkts" || name == "cipslaIcmpJitterTmplInterval" || name == "cipslaIcmpJitterTmplSrcAddrType" || name == "cipslaIcmpJitterTmplSrcAddr" || name == "cipslaIcmpJitterTmplTOS" || name == "cipslaIcmpJitterTmplVrfName" || name == "cipslaIcmpJitterTmplThreshold" || name == "cipslaIcmpJitterTmplStatsHours" || name == "cipslaIcmpJitterTmplDistBuckets" || name == "cipslaIcmpJitterTmplDistInterval" || name == "cipslaIcmpJitterTmplStorageType" || name == "cipslaIcmpJitterTmplRowStatus")
        return true;
    return false;
}

const Enum::YLeaf CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::Cipslaudpjittertmplprecision::milliseconds {1, "milliseconds"};
const Enum::YLeaf CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::Cipslaudpjittertmplprecision::microseconds {2, "microseconds"};

const Enum::YLeaf CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::Cipslaudpjittertmplpktpriority::normal {1, "normal"};
const Enum::YLeaf CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::Cipslaudpjittertmplpktpriority::high {2, "high"};

const Enum::YLeaf CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::Cipslaudpjittertmplntptoltype::percent {1, "percent"};
const Enum::YLeaf CISCOIPSLAJITTERMIB::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::Cipslaudpjittertmplntptoltype::absolute {2, "absolute"};


}
}

