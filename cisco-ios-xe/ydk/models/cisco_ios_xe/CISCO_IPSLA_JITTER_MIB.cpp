
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSLA_JITTER_MIB.hpp"

namespace ydk {
namespace CISCO_IPSLA_JITTER_MIB {

CiscoIpslaJitterMib::CiscoIpslaJitterMib()
    :
    cipslaicmpjittertmpltable(std::make_shared<CiscoIpslaJitterMib::Cipslaicmpjittertmpltable>())
	,cipslaudpjittertmpltable(std::make_shared<CiscoIpslaJitterMib::Cipslaudpjittertmpltable>())
{
    cipslaicmpjittertmpltable->parent = this;

    cipslaudpjittertmpltable->parent = this;

    yang_name = "CISCO-IPSLA-JITTER-MIB"; yang_parent_name = "CISCO-IPSLA-JITTER-MIB";
}

CiscoIpslaJitterMib::~CiscoIpslaJitterMib()
{
}

bool CiscoIpslaJitterMib::has_data() const
{
    return (cipslaicmpjittertmpltable !=  nullptr && cipslaicmpjittertmpltable->has_data())
	|| (cipslaudpjittertmpltable !=  nullptr && cipslaudpjittertmpltable->has_data());
}

bool CiscoIpslaJitterMib::has_operation() const
{
    return is_set(operation)
	|| (cipslaicmpjittertmpltable !=  nullptr && cipslaicmpjittertmpltable->has_operation())
	|| (cipslaudpjittertmpltable !=  nullptr && cipslaudpjittertmpltable->has_operation());
}

std::string CiscoIpslaJitterMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-JITTER-MIB:CISCO-IPSLA-JITTER-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIpslaJitterMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaJitterMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaIcmpJitterTmplTable")
    {
        if(cipslaicmpjittertmpltable == nullptr)
        {
            cipslaicmpjittertmpltable = std::make_shared<CiscoIpslaJitterMib::Cipslaicmpjittertmpltable>();
        }
        return cipslaicmpjittertmpltable;
    }

    if(child_yang_name == "cipslaUdpJitterTmplTable")
    {
        if(cipslaudpjittertmpltable == nullptr)
        {
            cipslaudpjittertmpltable = std::make_shared<CiscoIpslaJitterMib::Cipslaudpjittertmpltable>();
        }
        return cipslaudpjittertmpltable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaJitterMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cipslaicmpjittertmpltable != nullptr)
    {
        children["cipslaIcmpJitterTmplTable"] = cipslaicmpjittertmpltable;
    }

    if(cipslaudpjittertmpltable != nullptr)
    {
        children["cipslaUdpJitterTmplTable"] = cipslaudpjittertmpltable;
    }

    return children;
}

void CiscoIpslaJitterMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIpslaJitterMib::clone_ptr() const
{
    return std::make_shared<CiscoIpslaJitterMib>();
}

std::string CiscoIpslaJitterMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIpslaJitterMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIpslaJitterMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmpltable()
{
    yang_name = "cipslaUdpJitterTmplTable"; yang_parent_name = "CISCO-IPSLA-JITTER-MIB";
}

CiscoIpslaJitterMib::Cipslaudpjittertmpltable::~Cipslaudpjittertmpltable()
{
}

bool CiscoIpslaJitterMib::Cipslaudpjittertmpltable::has_data() const
{
    for (std::size_t index=0; index<cipslaudpjittertmplentry.size(); index++)
    {
        if(cipslaudpjittertmplentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaJitterMib::Cipslaudpjittertmpltable::has_operation() const
{
    for (std::size_t index=0; index<cipslaudpjittertmplentry.size(); index++)
    {
        if(cipslaudpjittertmplentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpslaJitterMib::Cipslaudpjittertmpltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaUdpJitterTmplTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaJitterMib::Cipslaudpjittertmpltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-JITTER-MIB:CISCO-IPSLA-JITTER-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaJitterMib::Cipslaudpjittertmpltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry>();
        c->parent = this;
        cipslaudpjittertmplentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaJitterMib::Cipslaudpjittertmpltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslaudpjittertmplentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaJitterMib::Cipslaudpjittertmpltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::Cipslaudpjittertmplentry()
    :
    cipslaudpjittertmplname{YType::str, "cipslaUdpJitterTmplName"},
    cipslaudpjittertmplcodecinterval{YType::uint32, "cipslaUdpJitterTmplCodecInterval"},
    cipslaudpjittertmplcodecnumpkts{YType::uint32, "cipslaUdpJitterTmplCodecNumPkts"},
    cipslaudpjittertmplcodecpayload{YType::uint32, "cipslaUdpJitterTmplCodecPayload"},
    cipslaudpjittertmplcodectype{YType::enumeration, "cipslaUdpJitterTmplCodecType"},
    cipslaudpjittertmplcontrolenable{YType::boolean, "cipslaUdpJitterTmplControlEnable"},
    cipslaudpjittertmpldescription{YType::str, "cipslaUdpJitterTmplDescription"},
    cipslaudpjittertmpldistbuckets{YType::uint32, "cipslaUdpJitterTmplDistBuckets"},
    cipslaudpjittertmpldistinterval{YType::uint32, "cipslaUdpJitterTmplDistInterval"},
    cipslaudpjittertmplicpiffactor{YType::uint32, "cipslaUdpJitterTmplIcpifFactor"},
    cipslaudpjittertmplinterval{YType::uint32, "cipslaUdpJitterTmplInterval"},
    cipslaudpjittertmplntptolabs{YType::uint32, "cipslaUdpJitterTmplNTPTolAbs"},
    cipslaudpjittertmplntptolpct{YType::uint32, "cipslaUdpJitterTmplNTPTolPct"},
    cipslaudpjittertmplntptoltype{YType::enumeration, "cipslaUdpJitterTmplNTPTolType"},
    cipslaudpjittertmplnumpkts{YType::uint32, "cipslaUdpJitterTmplNumPkts"},
    cipslaudpjittertmplpktpriority{YType::enumeration, "cipslaUdpJitterTmplPktPriority"},
    cipslaudpjittertmplprecision{YType::enumeration, "cipslaUdpJitterTmplPrecision"},
    cipslaudpjittertmplreqdatasize{YType::uint32, "cipslaUdpJitterTmplReqDataSize"},
    cipslaudpjittertmplrowstatus{YType::enumeration, "cipslaUdpJitterTmplRowStatus"},
    cipslaudpjittertmplsrcaddr{YType::str, "cipslaUdpJitterTmplSrcAddr"},
    cipslaudpjittertmplsrcaddrtype{YType::enumeration, "cipslaUdpJitterTmplSrcAddrType"},
    cipslaudpjittertmplsrcport{YType::uint16, "cipslaUdpJitterTmplSrcPort"},
    cipslaudpjittertmplstatshours{YType::uint32, "cipslaUdpJitterTmplStatsHours"},
    cipslaudpjittertmplstoragetype{YType::enumeration, "cipslaUdpJitterTmplStorageType"},
    cipslaudpjittertmplthreshold{YType::uint32, "cipslaUdpJitterTmplThreshold"},
    cipslaudpjittertmpltimeout{YType::uint32, "cipslaUdpJitterTmplTimeOut"},
    cipslaudpjittertmpltos{YType::uint32, "cipslaUdpJitterTmplTOS"},
    cipslaudpjittertmplverifydata{YType::boolean, "cipslaUdpJitterTmplVerifyData"},
    cipslaudpjittertmplvrfname{YType::str, "cipslaUdpJitterTmplVrfName"}
{
    yang_name = "cipslaUdpJitterTmplEntry"; yang_parent_name = "cipslaUdpJitterTmplTable";
}

CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::~Cipslaudpjittertmplentry()
{
}

bool CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::has_data() const
{
    return cipslaudpjittertmplname.is_set
	|| cipslaudpjittertmplcodecinterval.is_set
	|| cipslaudpjittertmplcodecnumpkts.is_set
	|| cipslaudpjittertmplcodecpayload.is_set
	|| cipslaudpjittertmplcodectype.is_set
	|| cipslaudpjittertmplcontrolenable.is_set
	|| cipslaudpjittertmpldescription.is_set
	|| cipslaudpjittertmpldistbuckets.is_set
	|| cipslaudpjittertmpldistinterval.is_set
	|| cipslaudpjittertmplicpiffactor.is_set
	|| cipslaudpjittertmplinterval.is_set
	|| cipslaudpjittertmplntptolabs.is_set
	|| cipslaudpjittertmplntptolpct.is_set
	|| cipslaudpjittertmplntptoltype.is_set
	|| cipslaudpjittertmplnumpkts.is_set
	|| cipslaudpjittertmplpktpriority.is_set
	|| cipslaudpjittertmplprecision.is_set
	|| cipslaudpjittertmplreqdatasize.is_set
	|| cipslaudpjittertmplrowstatus.is_set
	|| cipslaudpjittertmplsrcaddr.is_set
	|| cipslaudpjittertmplsrcaddrtype.is_set
	|| cipslaudpjittertmplsrcport.is_set
	|| cipslaudpjittertmplstatshours.is_set
	|| cipslaudpjittertmplstoragetype.is_set
	|| cipslaudpjittertmplthreshold.is_set
	|| cipslaudpjittertmpltimeout.is_set
	|| cipslaudpjittertmpltos.is_set
	|| cipslaudpjittertmplverifydata.is_set
	|| cipslaudpjittertmplvrfname.is_set;
}

bool CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipslaudpjittertmplname.operation)
	|| is_set(cipslaudpjittertmplcodecinterval.operation)
	|| is_set(cipslaudpjittertmplcodecnumpkts.operation)
	|| is_set(cipslaudpjittertmplcodecpayload.operation)
	|| is_set(cipslaudpjittertmplcodectype.operation)
	|| is_set(cipslaudpjittertmplcontrolenable.operation)
	|| is_set(cipslaudpjittertmpldescription.operation)
	|| is_set(cipslaudpjittertmpldistbuckets.operation)
	|| is_set(cipslaudpjittertmpldistinterval.operation)
	|| is_set(cipslaudpjittertmplicpiffactor.operation)
	|| is_set(cipslaudpjittertmplinterval.operation)
	|| is_set(cipslaudpjittertmplntptolabs.operation)
	|| is_set(cipslaudpjittertmplntptolpct.operation)
	|| is_set(cipslaudpjittertmplntptoltype.operation)
	|| is_set(cipslaudpjittertmplnumpkts.operation)
	|| is_set(cipslaudpjittertmplpktpriority.operation)
	|| is_set(cipslaudpjittertmplprecision.operation)
	|| is_set(cipslaudpjittertmplreqdatasize.operation)
	|| is_set(cipslaudpjittertmplrowstatus.operation)
	|| is_set(cipslaudpjittertmplsrcaddr.operation)
	|| is_set(cipslaudpjittertmplsrcaddrtype.operation)
	|| is_set(cipslaudpjittertmplsrcport.operation)
	|| is_set(cipslaudpjittertmplstatshours.operation)
	|| is_set(cipslaudpjittertmplstoragetype.operation)
	|| is_set(cipslaudpjittertmplthreshold.operation)
	|| is_set(cipslaudpjittertmpltimeout.operation)
	|| is_set(cipslaudpjittertmpltos.operation)
	|| is_set(cipslaudpjittertmplverifydata.operation)
	|| is_set(cipslaudpjittertmplvrfname.operation);
}

std::string CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaUdpJitterTmplEntry" <<"[cipslaUdpJitterTmplName='" <<cipslaudpjittertmplname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-JITTER-MIB:CISCO-IPSLA-JITTER-MIB/cipslaUdpJitterTmplTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaudpjittertmplname.is_set || is_set(cipslaudpjittertmplname.operation)) leaf_name_data.push_back(cipslaudpjittertmplname.get_name_leafdata());
    if (cipslaudpjittertmplcodecinterval.is_set || is_set(cipslaudpjittertmplcodecinterval.operation)) leaf_name_data.push_back(cipslaudpjittertmplcodecinterval.get_name_leafdata());
    if (cipslaudpjittertmplcodecnumpkts.is_set || is_set(cipslaudpjittertmplcodecnumpkts.operation)) leaf_name_data.push_back(cipslaudpjittertmplcodecnumpkts.get_name_leafdata());
    if (cipslaudpjittertmplcodecpayload.is_set || is_set(cipslaudpjittertmplcodecpayload.operation)) leaf_name_data.push_back(cipslaudpjittertmplcodecpayload.get_name_leafdata());
    if (cipslaudpjittertmplcodectype.is_set || is_set(cipslaudpjittertmplcodectype.operation)) leaf_name_data.push_back(cipslaudpjittertmplcodectype.get_name_leafdata());
    if (cipslaudpjittertmplcontrolenable.is_set || is_set(cipslaudpjittertmplcontrolenable.operation)) leaf_name_data.push_back(cipslaudpjittertmplcontrolenable.get_name_leafdata());
    if (cipslaudpjittertmpldescription.is_set || is_set(cipslaudpjittertmpldescription.operation)) leaf_name_data.push_back(cipslaudpjittertmpldescription.get_name_leafdata());
    if (cipslaudpjittertmpldistbuckets.is_set || is_set(cipslaudpjittertmpldistbuckets.operation)) leaf_name_data.push_back(cipslaudpjittertmpldistbuckets.get_name_leafdata());
    if (cipslaudpjittertmpldistinterval.is_set || is_set(cipslaudpjittertmpldistinterval.operation)) leaf_name_data.push_back(cipslaudpjittertmpldistinterval.get_name_leafdata());
    if (cipslaudpjittertmplicpiffactor.is_set || is_set(cipslaudpjittertmplicpiffactor.operation)) leaf_name_data.push_back(cipslaudpjittertmplicpiffactor.get_name_leafdata());
    if (cipslaudpjittertmplinterval.is_set || is_set(cipslaudpjittertmplinterval.operation)) leaf_name_data.push_back(cipslaudpjittertmplinterval.get_name_leafdata());
    if (cipslaudpjittertmplntptolabs.is_set || is_set(cipslaudpjittertmplntptolabs.operation)) leaf_name_data.push_back(cipslaudpjittertmplntptolabs.get_name_leafdata());
    if (cipslaudpjittertmplntptolpct.is_set || is_set(cipslaudpjittertmplntptolpct.operation)) leaf_name_data.push_back(cipslaudpjittertmplntptolpct.get_name_leafdata());
    if (cipslaudpjittertmplntptoltype.is_set || is_set(cipslaudpjittertmplntptoltype.operation)) leaf_name_data.push_back(cipslaudpjittertmplntptoltype.get_name_leafdata());
    if (cipslaudpjittertmplnumpkts.is_set || is_set(cipslaudpjittertmplnumpkts.operation)) leaf_name_data.push_back(cipslaudpjittertmplnumpkts.get_name_leafdata());
    if (cipslaudpjittertmplpktpriority.is_set || is_set(cipslaudpjittertmplpktpriority.operation)) leaf_name_data.push_back(cipslaudpjittertmplpktpriority.get_name_leafdata());
    if (cipslaudpjittertmplprecision.is_set || is_set(cipslaudpjittertmplprecision.operation)) leaf_name_data.push_back(cipslaudpjittertmplprecision.get_name_leafdata());
    if (cipslaudpjittertmplreqdatasize.is_set || is_set(cipslaudpjittertmplreqdatasize.operation)) leaf_name_data.push_back(cipslaudpjittertmplreqdatasize.get_name_leafdata());
    if (cipslaudpjittertmplrowstatus.is_set || is_set(cipslaudpjittertmplrowstatus.operation)) leaf_name_data.push_back(cipslaudpjittertmplrowstatus.get_name_leafdata());
    if (cipslaudpjittertmplsrcaddr.is_set || is_set(cipslaudpjittertmplsrcaddr.operation)) leaf_name_data.push_back(cipslaudpjittertmplsrcaddr.get_name_leafdata());
    if (cipslaudpjittertmplsrcaddrtype.is_set || is_set(cipslaudpjittertmplsrcaddrtype.operation)) leaf_name_data.push_back(cipslaudpjittertmplsrcaddrtype.get_name_leafdata());
    if (cipslaudpjittertmplsrcport.is_set || is_set(cipslaudpjittertmplsrcport.operation)) leaf_name_data.push_back(cipslaudpjittertmplsrcport.get_name_leafdata());
    if (cipslaudpjittertmplstatshours.is_set || is_set(cipslaudpjittertmplstatshours.operation)) leaf_name_data.push_back(cipslaudpjittertmplstatshours.get_name_leafdata());
    if (cipslaudpjittertmplstoragetype.is_set || is_set(cipslaudpjittertmplstoragetype.operation)) leaf_name_data.push_back(cipslaudpjittertmplstoragetype.get_name_leafdata());
    if (cipslaudpjittertmplthreshold.is_set || is_set(cipslaudpjittertmplthreshold.operation)) leaf_name_data.push_back(cipslaudpjittertmplthreshold.get_name_leafdata());
    if (cipslaudpjittertmpltimeout.is_set || is_set(cipslaudpjittertmpltimeout.operation)) leaf_name_data.push_back(cipslaudpjittertmpltimeout.get_name_leafdata());
    if (cipslaudpjittertmpltos.is_set || is_set(cipslaudpjittertmpltos.operation)) leaf_name_data.push_back(cipslaudpjittertmpltos.get_name_leafdata());
    if (cipslaudpjittertmplverifydata.is_set || is_set(cipslaudpjittertmplverifydata.operation)) leaf_name_data.push_back(cipslaudpjittertmplverifydata.get_name_leafdata());
    if (cipslaudpjittertmplvrfname.is_set || is_set(cipslaudpjittertmplvrfname.operation)) leaf_name_data.push_back(cipslaudpjittertmplvrfname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipslaUdpJitterTmplName")
    {
        cipslaudpjittertmplname = value;
    }
    if(value_path == "cipslaUdpJitterTmplCodecInterval")
    {
        cipslaudpjittertmplcodecinterval = value;
    }
    if(value_path == "cipslaUdpJitterTmplCodecNumPkts")
    {
        cipslaudpjittertmplcodecnumpkts = value;
    }
    if(value_path == "cipslaUdpJitterTmplCodecPayload")
    {
        cipslaudpjittertmplcodecpayload = value;
    }
    if(value_path == "cipslaUdpJitterTmplCodecType")
    {
        cipslaudpjittertmplcodectype = value;
    }
    if(value_path == "cipslaUdpJitterTmplControlEnable")
    {
        cipslaudpjittertmplcontrolenable = value;
    }
    if(value_path == "cipslaUdpJitterTmplDescription")
    {
        cipslaudpjittertmpldescription = value;
    }
    if(value_path == "cipslaUdpJitterTmplDistBuckets")
    {
        cipslaudpjittertmpldistbuckets = value;
    }
    if(value_path == "cipslaUdpJitterTmplDistInterval")
    {
        cipslaudpjittertmpldistinterval = value;
    }
    if(value_path == "cipslaUdpJitterTmplIcpifFactor")
    {
        cipslaudpjittertmplicpiffactor = value;
    }
    if(value_path == "cipslaUdpJitterTmplInterval")
    {
        cipslaudpjittertmplinterval = value;
    }
    if(value_path == "cipslaUdpJitterTmplNTPTolAbs")
    {
        cipslaudpjittertmplntptolabs = value;
    }
    if(value_path == "cipslaUdpJitterTmplNTPTolPct")
    {
        cipslaudpjittertmplntptolpct = value;
    }
    if(value_path == "cipslaUdpJitterTmplNTPTolType")
    {
        cipslaudpjittertmplntptoltype = value;
    }
    if(value_path == "cipslaUdpJitterTmplNumPkts")
    {
        cipslaudpjittertmplnumpkts = value;
    }
    if(value_path == "cipslaUdpJitterTmplPktPriority")
    {
        cipslaudpjittertmplpktpriority = value;
    }
    if(value_path == "cipslaUdpJitterTmplPrecision")
    {
        cipslaudpjittertmplprecision = value;
    }
    if(value_path == "cipslaUdpJitterTmplReqDataSize")
    {
        cipslaudpjittertmplreqdatasize = value;
    }
    if(value_path == "cipslaUdpJitterTmplRowStatus")
    {
        cipslaudpjittertmplrowstatus = value;
    }
    if(value_path == "cipslaUdpJitterTmplSrcAddr")
    {
        cipslaudpjittertmplsrcaddr = value;
    }
    if(value_path == "cipslaUdpJitterTmplSrcAddrType")
    {
        cipslaudpjittertmplsrcaddrtype = value;
    }
    if(value_path == "cipslaUdpJitterTmplSrcPort")
    {
        cipslaudpjittertmplsrcport = value;
    }
    if(value_path == "cipslaUdpJitterTmplStatsHours")
    {
        cipslaudpjittertmplstatshours = value;
    }
    if(value_path == "cipslaUdpJitterTmplStorageType")
    {
        cipslaudpjittertmplstoragetype = value;
    }
    if(value_path == "cipslaUdpJitterTmplThreshold")
    {
        cipslaudpjittertmplthreshold = value;
    }
    if(value_path == "cipslaUdpJitterTmplTimeOut")
    {
        cipslaudpjittertmpltimeout = value;
    }
    if(value_path == "cipslaUdpJitterTmplTOS")
    {
        cipslaudpjittertmpltos = value;
    }
    if(value_path == "cipslaUdpJitterTmplVerifyData")
    {
        cipslaudpjittertmplverifydata = value;
    }
    if(value_path == "cipslaUdpJitterTmplVrfName")
    {
        cipslaudpjittertmplvrfname = value;
    }
}

CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmpltable()
{
    yang_name = "cipslaIcmpJitterTmplTable"; yang_parent_name = "CISCO-IPSLA-JITTER-MIB";
}

CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::~Cipslaicmpjittertmpltable()
{
}

bool CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::has_data() const
{
    for (std::size_t index=0; index<cipslaicmpjittertmplentry.size(); index++)
    {
        if(cipslaicmpjittertmplentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::has_operation() const
{
    for (std::size_t index=0; index<cipslaicmpjittertmplentry.size(); index++)
    {
        if(cipslaicmpjittertmplentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaIcmpJitterTmplTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-JITTER-MIB:CISCO-IPSLA-JITTER-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry>();
        c->parent = this;
        cipslaicmpjittertmplentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslaicmpjittertmplentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::Cipslaicmpjittertmplentry()
    :
    cipslaicmpjittertmplname{YType::str, "cipslaIcmpJitterTmplName"},
    cipslaicmpjittertmpldescription{YType::str, "cipslaIcmpJitterTmplDescription"},
    cipslaicmpjittertmpldistbuckets{YType::uint32, "cipslaIcmpJitterTmplDistBuckets"},
    cipslaicmpjittertmpldistinterval{YType::uint32, "cipslaIcmpJitterTmplDistInterval"},
    cipslaicmpjittertmplinterval{YType::uint32, "cipslaIcmpJitterTmplInterval"},
    cipslaicmpjittertmplnumpkts{YType::uint32, "cipslaIcmpJitterTmplNumPkts"},
    cipslaicmpjittertmplrowstatus{YType::enumeration, "cipslaIcmpJitterTmplRowStatus"},
    cipslaicmpjittertmplsrcaddr{YType::str, "cipslaIcmpJitterTmplSrcAddr"},
    cipslaicmpjittertmplsrcaddrtype{YType::enumeration, "cipslaIcmpJitterTmplSrcAddrType"},
    cipslaicmpjittertmplstatshours{YType::uint32, "cipslaIcmpJitterTmplStatsHours"},
    cipslaicmpjittertmplstoragetype{YType::enumeration, "cipslaIcmpJitterTmplStorageType"},
    cipslaicmpjittertmplthreshold{YType::uint32, "cipslaIcmpJitterTmplThreshold"},
    cipslaicmpjittertmpltimeout{YType::uint32, "cipslaIcmpJitterTmplTimeOut"},
    cipslaicmpjittertmpltos{YType::uint32, "cipslaIcmpJitterTmplTOS"},
    cipslaicmpjittertmplverifydata{YType::boolean, "cipslaIcmpJitterTmplVerifyData"},
    cipslaicmpjittertmplvrfname{YType::str, "cipslaIcmpJitterTmplVrfName"}
{
    yang_name = "cipslaIcmpJitterTmplEntry"; yang_parent_name = "cipslaIcmpJitterTmplTable";
}

CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::~Cipslaicmpjittertmplentry()
{
}

bool CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::has_data() const
{
    return cipslaicmpjittertmplname.is_set
	|| cipslaicmpjittertmpldescription.is_set
	|| cipslaicmpjittertmpldistbuckets.is_set
	|| cipslaicmpjittertmpldistinterval.is_set
	|| cipslaicmpjittertmplinterval.is_set
	|| cipslaicmpjittertmplnumpkts.is_set
	|| cipslaicmpjittertmplrowstatus.is_set
	|| cipslaicmpjittertmplsrcaddr.is_set
	|| cipslaicmpjittertmplsrcaddrtype.is_set
	|| cipslaicmpjittertmplstatshours.is_set
	|| cipslaicmpjittertmplstoragetype.is_set
	|| cipslaicmpjittertmplthreshold.is_set
	|| cipslaicmpjittertmpltimeout.is_set
	|| cipslaicmpjittertmpltos.is_set
	|| cipslaicmpjittertmplverifydata.is_set
	|| cipslaicmpjittertmplvrfname.is_set;
}

bool CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipslaicmpjittertmplname.operation)
	|| is_set(cipslaicmpjittertmpldescription.operation)
	|| is_set(cipslaicmpjittertmpldistbuckets.operation)
	|| is_set(cipslaicmpjittertmpldistinterval.operation)
	|| is_set(cipslaicmpjittertmplinterval.operation)
	|| is_set(cipslaicmpjittertmplnumpkts.operation)
	|| is_set(cipslaicmpjittertmplrowstatus.operation)
	|| is_set(cipslaicmpjittertmplsrcaddr.operation)
	|| is_set(cipslaicmpjittertmplsrcaddrtype.operation)
	|| is_set(cipslaicmpjittertmplstatshours.operation)
	|| is_set(cipslaicmpjittertmplstoragetype.operation)
	|| is_set(cipslaicmpjittertmplthreshold.operation)
	|| is_set(cipslaicmpjittertmpltimeout.operation)
	|| is_set(cipslaicmpjittertmpltos.operation)
	|| is_set(cipslaicmpjittertmplverifydata.operation)
	|| is_set(cipslaicmpjittertmplvrfname.operation);
}

std::string CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaIcmpJitterTmplEntry" <<"[cipslaIcmpJitterTmplName='" <<cipslaicmpjittertmplname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-JITTER-MIB:CISCO-IPSLA-JITTER-MIB/cipslaIcmpJitterTmplTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaicmpjittertmplname.is_set || is_set(cipslaicmpjittertmplname.operation)) leaf_name_data.push_back(cipslaicmpjittertmplname.get_name_leafdata());
    if (cipslaicmpjittertmpldescription.is_set || is_set(cipslaicmpjittertmpldescription.operation)) leaf_name_data.push_back(cipslaicmpjittertmpldescription.get_name_leafdata());
    if (cipslaicmpjittertmpldistbuckets.is_set || is_set(cipslaicmpjittertmpldistbuckets.operation)) leaf_name_data.push_back(cipslaicmpjittertmpldistbuckets.get_name_leafdata());
    if (cipslaicmpjittertmpldistinterval.is_set || is_set(cipslaicmpjittertmpldistinterval.operation)) leaf_name_data.push_back(cipslaicmpjittertmpldistinterval.get_name_leafdata());
    if (cipslaicmpjittertmplinterval.is_set || is_set(cipslaicmpjittertmplinterval.operation)) leaf_name_data.push_back(cipslaicmpjittertmplinterval.get_name_leafdata());
    if (cipslaicmpjittertmplnumpkts.is_set || is_set(cipslaicmpjittertmplnumpkts.operation)) leaf_name_data.push_back(cipslaicmpjittertmplnumpkts.get_name_leafdata());
    if (cipslaicmpjittertmplrowstatus.is_set || is_set(cipslaicmpjittertmplrowstatus.operation)) leaf_name_data.push_back(cipslaicmpjittertmplrowstatus.get_name_leafdata());
    if (cipslaicmpjittertmplsrcaddr.is_set || is_set(cipslaicmpjittertmplsrcaddr.operation)) leaf_name_data.push_back(cipslaicmpjittertmplsrcaddr.get_name_leafdata());
    if (cipslaicmpjittertmplsrcaddrtype.is_set || is_set(cipslaicmpjittertmplsrcaddrtype.operation)) leaf_name_data.push_back(cipslaicmpjittertmplsrcaddrtype.get_name_leafdata());
    if (cipslaicmpjittertmplstatshours.is_set || is_set(cipslaicmpjittertmplstatshours.operation)) leaf_name_data.push_back(cipslaicmpjittertmplstatshours.get_name_leafdata());
    if (cipslaicmpjittertmplstoragetype.is_set || is_set(cipslaicmpjittertmplstoragetype.operation)) leaf_name_data.push_back(cipslaicmpjittertmplstoragetype.get_name_leafdata());
    if (cipslaicmpjittertmplthreshold.is_set || is_set(cipslaicmpjittertmplthreshold.operation)) leaf_name_data.push_back(cipslaicmpjittertmplthreshold.get_name_leafdata());
    if (cipslaicmpjittertmpltimeout.is_set || is_set(cipslaicmpjittertmpltimeout.operation)) leaf_name_data.push_back(cipslaicmpjittertmpltimeout.get_name_leafdata());
    if (cipslaicmpjittertmpltos.is_set || is_set(cipslaicmpjittertmpltos.operation)) leaf_name_data.push_back(cipslaicmpjittertmpltos.get_name_leafdata());
    if (cipslaicmpjittertmplverifydata.is_set || is_set(cipslaicmpjittertmplverifydata.operation)) leaf_name_data.push_back(cipslaicmpjittertmplverifydata.get_name_leafdata());
    if (cipslaicmpjittertmplvrfname.is_set || is_set(cipslaicmpjittertmplvrfname.operation)) leaf_name_data.push_back(cipslaicmpjittertmplvrfname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipslaIcmpJitterTmplName")
    {
        cipslaicmpjittertmplname = value;
    }
    if(value_path == "cipslaIcmpJitterTmplDescription")
    {
        cipslaicmpjittertmpldescription = value;
    }
    if(value_path == "cipslaIcmpJitterTmplDistBuckets")
    {
        cipslaicmpjittertmpldistbuckets = value;
    }
    if(value_path == "cipslaIcmpJitterTmplDistInterval")
    {
        cipslaicmpjittertmpldistinterval = value;
    }
    if(value_path == "cipslaIcmpJitterTmplInterval")
    {
        cipslaicmpjittertmplinterval = value;
    }
    if(value_path == "cipslaIcmpJitterTmplNumPkts")
    {
        cipslaicmpjittertmplnumpkts = value;
    }
    if(value_path == "cipslaIcmpJitterTmplRowStatus")
    {
        cipslaicmpjittertmplrowstatus = value;
    }
    if(value_path == "cipslaIcmpJitterTmplSrcAddr")
    {
        cipslaicmpjittertmplsrcaddr = value;
    }
    if(value_path == "cipslaIcmpJitterTmplSrcAddrType")
    {
        cipslaicmpjittertmplsrcaddrtype = value;
    }
    if(value_path == "cipslaIcmpJitterTmplStatsHours")
    {
        cipslaicmpjittertmplstatshours = value;
    }
    if(value_path == "cipslaIcmpJitterTmplStorageType")
    {
        cipslaicmpjittertmplstoragetype = value;
    }
    if(value_path == "cipslaIcmpJitterTmplThreshold")
    {
        cipslaicmpjittertmplthreshold = value;
    }
    if(value_path == "cipslaIcmpJitterTmplTimeOut")
    {
        cipslaicmpjittertmpltimeout = value;
    }
    if(value_path == "cipslaIcmpJitterTmplTOS")
    {
        cipslaicmpjittertmpltos = value;
    }
    if(value_path == "cipslaIcmpJitterTmplVerifyData")
    {
        cipslaicmpjittertmplverifydata = value;
    }
    if(value_path == "cipslaIcmpJitterTmplVrfName")
    {
        cipslaicmpjittertmplvrfname = value;
    }
}

const Enum::YLeaf CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::CipslaudpjittertmplprecisionEnum::milliseconds {1, "milliseconds"};
const Enum::YLeaf CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::CipslaudpjittertmplprecisionEnum::microseconds {2, "microseconds"};

const Enum::YLeaf CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::CipslaudpjittertmplpktpriorityEnum::normal {1, "normal"};
const Enum::YLeaf CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::CipslaudpjittertmplpktpriorityEnum::high {2, "high"};

const Enum::YLeaf CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::CipslaudpjittertmplntptoltypeEnum::percent {1, "percent"};
const Enum::YLeaf CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::CipslaudpjittertmplntptoltypeEnum::absolute {2, "absolute"};


}
}

