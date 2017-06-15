
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSLA_ECHO_MIB.hpp"

namespace ydk {
namespace CISCO_IPSLA_ECHO_MIB {

CiscoIpslaEchoMib::CiscoIpslaEchoMib()
    :
    cipslaicmpechotmpltable_(std::make_shared<CiscoIpslaEchoMib::Cipslaicmpechotmpltable>())
	,cipslatcpconntmpltable_(std::make_shared<CiscoIpslaEchoMib::Cipslatcpconntmpltable>())
	,cipslaudpechotmpltable_(std::make_shared<CiscoIpslaEchoMib::Cipslaudpechotmpltable>())
{
    cipslaicmpechotmpltable_->parent = this;

    cipslatcpconntmpltable_->parent = this;

    cipslaudpechotmpltable_->parent = this;

    yang_name = "CISCO-IPSLA-ECHO-MIB"; yang_parent_name = "CISCO-IPSLA-ECHO-MIB";
}

CiscoIpslaEchoMib::~CiscoIpslaEchoMib()
{
}

bool CiscoIpslaEchoMib::has_data() const
{
    return (cipslaicmpechotmpltable_ !=  nullptr && cipslaicmpechotmpltable_->has_data())
	|| (cipslatcpconntmpltable_ !=  nullptr && cipslatcpconntmpltable_->has_data())
	|| (cipslaudpechotmpltable_ !=  nullptr && cipslaudpechotmpltable_->has_data());
}

bool CiscoIpslaEchoMib::has_operation() const
{
    return is_set(operation)
	|| (cipslaicmpechotmpltable_ !=  nullptr && cipslaicmpechotmpltable_->has_operation())
	|| (cipslatcpconntmpltable_ !=  nullptr && cipslatcpconntmpltable_->has_operation())
	|| (cipslaudpechotmpltable_ !=  nullptr && cipslaudpechotmpltable_->has_operation());
}

std::string CiscoIpslaEchoMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-ECHO-MIB:CISCO-IPSLA-ECHO-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIpslaEchoMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIpslaEchoMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaIcmpEchoTmplTable")
    {
        if(cipslaicmpechotmpltable_ == nullptr)
        {
            cipslaicmpechotmpltable_ = std::make_shared<CiscoIpslaEchoMib::Cipslaicmpechotmpltable>();
        }
        return cipslaicmpechotmpltable_;
    }

    if(child_yang_name == "cipslaTcpConnTmplTable")
    {
        if(cipslatcpconntmpltable_ == nullptr)
        {
            cipslatcpconntmpltable_ = std::make_shared<CiscoIpslaEchoMib::Cipslatcpconntmpltable>();
        }
        return cipslatcpconntmpltable_;
    }

    if(child_yang_name == "cipslaUdpEchoTmplTable")
    {
        if(cipslaudpechotmpltable_ == nullptr)
        {
            cipslaudpechotmpltable_ = std::make_shared<CiscoIpslaEchoMib::Cipslaudpechotmpltable>();
        }
        return cipslaudpechotmpltable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaEchoMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cipslaicmpechotmpltable_ != nullptr)
    {
        children["cipslaIcmpEchoTmplTable"] = cipslaicmpechotmpltable_;
    }

    if(cipslatcpconntmpltable_ != nullptr)
    {
        children["cipslaTcpConnTmplTable"] = cipslatcpconntmpltable_;
    }

    if(cipslaudpechotmpltable_ != nullptr)
    {
        children["cipslaUdpEchoTmplTable"] = cipslaudpechotmpltable_;
    }

    return children;
}

void CiscoIpslaEchoMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIpslaEchoMib::clone_ptr() const
{
    return std::make_shared<CiscoIpslaEchoMib>();
}

std::string CiscoIpslaEchoMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIpslaEchoMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIpslaEchoMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmpltable()
{
    yang_name = "cipslaIcmpEchoTmplTable"; yang_parent_name = "CISCO-IPSLA-ECHO-MIB";
}

CiscoIpslaEchoMib::Cipslaicmpechotmpltable::~Cipslaicmpechotmpltable()
{
}

bool CiscoIpslaEchoMib::Cipslaicmpechotmpltable::has_data() const
{
    for (std::size_t index=0; index<cipslaicmpechotmplentry_.size(); index++)
    {
        if(cipslaicmpechotmplentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaEchoMib::Cipslaicmpechotmpltable::has_operation() const
{
    for (std::size_t index=0; index<cipslaicmpechotmplentry_.size(); index++)
    {
        if(cipslaicmpechotmplentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpslaEchoMib::Cipslaicmpechotmpltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaIcmpEchoTmplTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaEchoMib::Cipslaicmpechotmpltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-ECHO-MIB:CISCO-IPSLA-ECHO-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaEchoMib::Cipslaicmpechotmpltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaIcmpEchoTmplEntry")
    {
        for(auto const & c : cipslaicmpechotmplentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry>();
        c->parent = this;
        cipslaicmpechotmplentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaEchoMib::Cipslaicmpechotmpltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslaicmpechotmplentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaEchoMib::Cipslaicmpechotmpltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::Cipslaicmpechotmplentry()
    :
    cipslaicmpechotmplname{YType::str, "cipslaIcmpEchoTmplName"},
    cipslaicmpechotmpldescription{YType::str, "cipslaIcmpEchoTmplDescription"},
    cipslaicmpechotmpldistbuckets{YType::uint32, "cipslaIcmpEchoTmplDistBuckets"},
    cipslaicmpechotmpldistinterval{YType::uint32, "cipslaIcmpEchoTmplDistInterval"},
    cipslaicmpechotmplhistbuckets{YType::uint32, "cipslaIcmpEchoTmplHistBuckets"},
    cipslaicmpechotmplhistfilter{YType::enumeration, "cipslaIcmpEchoTmplHistFilter"},
    cipslaicmpechotmplhistlives{YType::uint32, "cipslaIcmpEchoTmplHistLives"},
    cipslaicmpechotmplreqdatasize{YType::uint32, "cipslaIcmpEchoTmplReqDataSize"},
    cipslaicmpechotmplrowstatus{YType::enumeration, "cipslaIcmpEchoTmplRowStatus"},
    cipslaicmpechotmplsrcaddr{YType::str, "cipslaIcmpEchoTmplSrcAddr"},
    cipslaicmpechotmplsrcaddrtype{YType::enumeration, "cipslaIcmpEchoTmplSrcAddrType"},
    cipslaicmpechotmplstatshours{YType::uint32, "cipslaIcmpEchoTmplStatsHours"},
    cipslaicmpechotmplstoragetype{YType::enumeration, "cipslaIcmpEchoTmplStorageType"},
    cipslaicmpechotmplthreshold{YType::uint32, "cipslaIcmpEchoTmplThreshold"},
    cipslaicmpechotmpltimeout{YType::uint32, "cipslaIcmpEchoTmplTimeOut"},
    cipslaicmpechotmpltos{YType::uint32, "cipslaIcmpEchoTmplTOS"},
    cipslaicmpechotmplverifydata{YType::boolean, "cipslaIcmpEchoTmplVerifyData"},
    cipslaicmpechotmplvrfname{YType::str, "cipslaIcmpEchoTmplVrfName"}
{
    yang_name = "cipslaIcmpEchoTmplEntry"; yang_parent_name = "cipslaIcmpEchoTmplTable";
}

CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::~Cipslaicmpechotmplentry()
{
}

bool CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::has_data() const
{
    return cipslaicmpechotmplname.is_set
	|| cipslaicmpechotmpldescription.is_set
	|| cipslaicmpechotmpldistbuckets.is_set
	|| cipslaicmpechotmpldistinterval.is_set
	|| cipslaicmpechotmplhistbuckets.is_set
	|| cipslaicmpechotmplhistfilter.is_set
	|| cipslaicmpechotmplhistlives.is_set
	|| cipslaicmpechotmplreqdatasize.is_set
	|| cipslaicmpechotmplrowstatus.is_set
	|| cipslaicmpechotmplsrcaddr.is_set
	|| cipslaicmpechotmplsrcaddrtype.is_set
	|| cipslaicmpechotmplstatshours.is_set
	|| cipslaicmpechotmplstoragetype.is_set
	|| cipslaicmpechotmplthreshold.is_set
	|| cipslaicmpechotmpltimeout.is_set
	|| cipslaicmpechotmpltos.is_set
	|| cipslaicmpechotmplverifydata.is_set
	|| cipslaicmpechotmplvrfname.is_set;
}

bool CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipslaicmpechotmplname.operation)
	|| is_set(cipslaicmpechotmpldescription.operation)
	|| is_set(cipslaicmpechotmpldistbuckets.operation)
	|| is_set(cipslaicmpechotmpldistinterval.operation)
	|| is_set(cipslaicmpechotmplhistbuckets.operation)
	|| is_set(cipslaicmpechotmplhistfilter.operation)
	|| is_set(cipslaicmpechotmplhistlives.operation)
	|| is_set(cipslaicmpechotmplreqdatasize.operation)
	|| is_set(cipslaicmpechotmplrowstatus.operation)
	|| is_set(cipslaicmpechotmplsrcaddr.operation)
	|| is_set(cipslaicmpechotmplsrcaddrtype.operation)
	|| is_set(cipslaicmpechotmplstatshours.operation)
	|| is_set(cipslaicmpechotmplstoragetype.operation)
	|| is_set(cipslaicmpechotmplthreshold.operation)
	|| is_set(cipslaicmpechotmpltimeout.operation)
	|| is_set(cipslaicmpechotmpltos.operation)
	|| is_set(cipslaicmpechotmplverifydata.operation)
	|| is_set(cipslaicmpechotmplvrfname.operation);
}

std::string CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaIcmpEchoTmplEntry" <<"[cipslaIcmpEchoTmplName='" <<cipslaicmpechotmplname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-ECHO-MIB:CISCO-IPSLA-ECHO-MIB/cipslaIcmpEchoTmplTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaicmpechotmplname.is_set || is_set(cipslaicmpechotmplname.operation)) leaf_name_data.push_back(cipslaicmpechotmplname.get_name_leafdata());
    if (cipslaicmpechotmpldescription.is_set || is_set(cipslaicmpechotmpldescription.operation)) leaf_name_data.push_back(cipslaicmpechotmpldescription.get_name_leafdata());
    if (cipslaicmpechotmpldistbuckets.is_set || is_set(cipslaicmpechotmpldistbuckets.operation)) leaf_name_data.push_back(cipslaicmpechotmpldistbuckets.get_name_leafdata());
    if (cipslaicmpechotmpldistinterval.is_set || is_set(cipslaicmpechotmpldistinterval.operation)) leaf_name_data.push_back(cipslaicmpechotmpldistinterval.get_name_leafdata());
    if (cipslaicmpechotmplhistbuckets.is_set || is_set(cipslaicmpechotmplhistbuckets.operation)) leaf_name_data.push_back(cipslaicmpechotmplhistbuckets.get_name_leafdata());
    if (cipslaicmpechotmplhistfilter.is_set || is_set(cipslaicmpechotmplhistfilter.operation)) leaf_name_data.push_back(cipslaicmpechotmplhistfilter.get_name_leafdata());
    if (cipslaicmpechotmplhistlives.is_set || is_set(cipslaicmpechotmplhistlives.operation)) leaf_name_data.push_back(cipslaicmpechotmplhistlives.get_name_leafdata());
    if (cipslaicmpechotmplreqdatasize.is_set || is_set(cipslaicmpechotmplreqdatasize.operation)) leaf_name_data.push_back(cipslaicmpechotmplreqdatasize.get_name_leafdata());
    if (cipslaicmpechotmplrowstatus.is_set || is_set(cipslaicmpechotmplrowstatus.operation)) leaf_name_data.push_back(cipslaicmpechotmplrowstatus.get_name_leafdata());
    if (cipslaicmpechotmplsrcaddr.is_set || is_set(cipslaicmpechotmplsrcaddr.operation)) leaf_name_data.push_back(cipslaicmpechotmplsrcaddr.get_name_leafdata());
    if (cipslaicmpechotmplsrcaddrtype.is_set || is_set(cipslaicmpechotmplsrcaddrtype.operation)) leaf_name_data.push_back(cipslaicmpechotmplsrcaddrtype.get_name_leafdata());
    if (cipslaicmpechotmplstatshours.is_set || is_set(cipslaicmpechotmplstatshours.operation)) leaf_name_data.push_back(cipslaicmpechotmplstatshours.get_name_leafdata());
    if (cipslaicmpechotmplstoragetype.is_set || is_set(cipslaicmpechotmplstoragetype.operation)) leaf_name_data.push_back(cipslaicmpechotmplstoragetype.get_name_leafdata());
    if (cipslaicmpechotmplthreshold.is_set || is_set(cipslaicmpechotmplthreshold.operation)) leaf_name_data.push_back(cipslaicmpechotmplthreshold.get_name_leafdata());
    if (cipslaicmpechotmpltimeout.is_set || is_set(cipslaicmpechotmpltimeout.operation)) leaf_name_data.push_back(cipslaicmpechotmpltimeout.get_name_leafdata());
    if (cipslaicmpechotmpltos.is_set || is_set(cipslaicmpechotmpltos.operation)) leaf_name_data.push_back(cipslaicmpechotmpltos.get_name_leafdata());
    if (cipslaicmpechotmplverifydata.is_set || is_set(cipslaicmpechotmplverifydata.operation)) leaf_name_data.push_back(cipslaicmpechotmplverifydata.get_name_leafdata());
    if (cipslaicmpechotmplvrfname.is_set || is_set(cipslaicmpechotmplvrfname.operation)) leaf_name_data.push_back(cipslaicmpechotmplvrfname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipslaIcmpEchoTmplName")
    {
        cipslaicmpechotmplname = value;
    }
    if(value_path == "cipslaIcmpEchoTmplDescription")
    {
        cipslaicmpechotmpldescription = value;
    }
    if(value_path == "cipslaIcmpEchoTmplDistBuckets")
    {
        cipslaicmpechotmpldistbuckets = value;
    }
    if(value_path == "cipslaIcmpEchoTmplDistInterval")
    {
        cipslaicmpechotmpldistinterval = value;
    }
    if(value_path == "cipslaIcmpEchoTmplHistBuckets")
    {
        cipslaicmpechotmplhistbuckets = value;
    }
    if(value_path == "cipslaIcmpEchoTmplHistFilter")
    {
        cipslaicmpechotmplhistfilter = value;
    }
    if(value_path == "cipslaIcmpEchoTmplHistLives")
    {
        cipslaicmpechotmplhistlives = value;
    }
    if(value_path == "cipslaIcmpEchoTmplReqDataSize")
    {
        cipslaicmpechotmplreqdatasize = value;
    }
    if(value_path == "cipslaIcmpEchoTmplRowStatus")
    {
        cipslaicmpechotmplrowstatus = value;
    }
    if(value_path == "cipslaIcmpEchoTmplSrcAddr")
    {
        cipslaicmpechotmplsrcaddr = value;
    }
    if(value_path == "cipslaIcmpEchoTmplSrcAddrType")
    {
        cipslaicmpechotmplsrcaddrtype = value;
    }
    if(value_path == "cipslaIcmpEchoTmplStatsHours")
    {
        cipslaicmpechotmplstatshours = value;
    }
    if(value_path == "cipslaIcmpEchoTmplStorageType")
    {
        cipslaicmpechotmplstoragetype = value;
    }
    if(value_path == "cipslaIcmpEchoTmplThreshold")
    {
        cipslaicmpechotmplthreshold = value;
    }
    if(value_path == "cipslaIcmpEchoTmplTimeOut")
    {
        cipslaicmpechotmpltimeout = value;
    }
    if(value_path == "cipslaIcmpEchoTmplTOS")
    {
        cipslaicmpechotmpltos = value;
    }
    if(value_path == "cipslaIcmpEchoTmplVerifyData")
    {
        cipslaicmpechotmplverifydata = value;
    }
    if(value_path == "cipslaIcmpEchoTmplVrfName")
    {
        cipslaicmpechotmplvrfname = value;
    }
}

CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmpltable()
{
    yang_name = "cipslaUdpEchoTmplTable"; yang_parent_name = "CISCO-IPSLA-ECHO-MIB";
}

CiscoIpslaEchoMib::Cipslaudpechotmpltable::~Cipslaudpechotmpltable()
{
}

bool CiscoIpslaEchoMib::Cipslaudpechotmpltable::has_data() const
{
    for (std::size_t index=0; index<cipslaudpechotmplentry_.size(); index++)
    {
        if(cipslaudpechotmplentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaEchoMib::Cipslaudpechotmpltable::has_operation() const
{
    for (std::size_t index=0; index<cipslaudpechotmplentry_.size(); index++)
    {
        if(cipslaudpechotmplentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpslaEchoMib::Cipslaudpechotmpltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaUdpEchoTmplTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaEchoMib::Cipslaudpechotmpltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-ECHO-MIB:CISCO-IPSLA-ECHO-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaEchoMib::Cipslaudpechotmpltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaUdpEchoTmplEntry")
    {
        for(auto const & c : cipslaudpechotmplentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry>();
        c->parent = this;
        cipslaudpechotmplentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaEchoMib::Cipslaudpechotmpltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslaudpechotmplentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaEchoMib::Cipslaudpechotmpltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::Cipslaudpechotmplentry()
    :
    cipslaudpechotmplname{YType::str, "cipslaUdpEchoTmplName"},
    cipslaudpechotmplcontrolenable{YType::boolean, "cipslaUdpEchoTmplControlEnable"},
    cipslaudpechotmpldescription{YType::str, "cipslaUdpEchoTmplDescription"},
    cipslaudpechotmpldistbuckets{YType::uint32, "cipslaUdpEchoTmplDistBuckets"},
    cipslaudpechotmpldistinterval{YType::uint32, "cipslaUdpEchoTmplDistInterval"},
    cipslaudpechotmplhistbuckets{YType::uint32, "cipslaUdpEchoTmplHistBuckets"},
    cipslaudpechotmplhistfilter{YType::enumeration, "cipslaUdpEchoTmplHistFilter"},
    cipslaudpechotmplhistlives{YType::uint32, "cipslaUdpEchoTmplHistLives"},
    cipslaudpechotmplreqdatasize{YType::uint32, "cipslaUdpEchoTmplReqDataSize"},
    cipslaudpechotmplrowstatus{YType::enumeration, "cipslaUdpEchoTmplRowStatus"},
    cipslaudpechotmplsrcaddr{YType::str, "cipslaUdpEchoTmplSrcAddr"},
    cipslaudpechotmplsrcaddrtype{YType::enumeration, "cipslaUdpEchoTmplSrcAddrType"},
    cipslaudpechotmplsrcport{YType::uint16, "cipslaUdpEchoTmplSrcPort"},
    cipslaudpechotmplstatshours{YType::uint32, "cipslaUdpEchoTmplStatsHours"},
    cipslaudpechotmplstoragetype{YType::enumeration, "cipslaUdpEchoTmplStorageType"},
    cipslaudpechotmplthreshold{YType::uint32, "cipslaUdpEchoTmplThreshold"},
    cipslaudpechotmpltimeout{YType::uint32, "cipslaUdpEchoTmplTimeOut"},
    cipslaudpechotmpltos{YType::uint32, "cipslaUdpEchoTmplTOS"},
    cipslaudpechotmplverifydata{YType::boolean, "cipslaUdpEchoTmplVerifyData"},
    cipslaudpechotmplvrfname{YType::str, "cipslaUdpEchoTmplVrfName"}
{
    yang_name = "cipslaUdpEchoTmplEntry"; yang_parent_name = "cipslaUdpEchoTmplTable";
}

CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::~Cipslaudpechotmplentry()
{
}

bool CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::has_data() const
{
    return cipslaudpechotmplname.is_set
	|| cipslaudpechotmplcontrolenable.is_set
	|| cipslaudpechotmpldescription.is_set
	|| cipslaudpechotmpldistbuckets.is_set
	|| cipslaudpechotmpldistinterval.is_set
	|| cipslaudpechotmplhistbuckets.is_set
	|| cipslaudpechotmplhistfilter.is_set
	|| cipslaudpechotmplhistlives.is_set
	|| cipslaudpechotmplreqdatasize.is_set
	|| cipslaudpechotmplrowstatus.is_set
	|| cipslaudpechotmplsrcaddr.is_set
	|| cipslaudpechotmplsrcaddrtype.is_set
	|| cipslaudpechotmplsrcport.is_set
	|| cipslaudpechotmplstatshours.is_set
	|| cipslaudpechotmplstoragetype.is_set
	|| cipslaudpechotmplthreshold.is_set
	|| cipslaudpechotmpltimeout.is_set
	|| cipslaudpechotmpltos.is_set
	|| cipslaudpechotmplverifydata.is_set
	|| cipslaudpechotmplvrfname.is_set;
}

bool CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipslaudpechotmplname.operation)
	|| is_set(cipslaudpechotmplcontrolenable.operation)
	|| is_set(cipslaudpechotmpldescription.operation)
	|| is_set(cipslaudpechotmpldistbuckets.operation)
	|| is_set(cipslaudpechotmpldistinterval.operation)
	|| is_set(cipslaudpechotmplhistbuckets.operation)
	|| is_set(cipslaudpechotmplhistfilter.operation)
	|| is_set(cipslaudpechotmplhistlives.operation)
	|| is_set(cipslaudpechotmplreqdatasize.operation)
	|| is_set(cipslaudpechotmplrowstatus.operation)
	|| is_set(cipslaudpechotmplsrcaddr.operation)
	|| is_set(cipslaudpechotmplsrcaddrtype.operation)
	|| is_set(cipslaudpechotmplsrcport.operation)
	|| is_set(cipslaudpechotmplstatshours.operation)
	|| is_set(cipslaudpechotmplstoragetype.operation)
	|| is_set(cipslaudpechotmplthreshold.operation)
	|| is_set(cipslaudpechotmpltimeout.operation)
	|| is_set(cipslaudpechotmpltos.operation)
	|| is_set(cipslaudpechotmplverifydata.operation)
	|| is_set(cipslaudpechotmplvrfname.operation);
}

std::string CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaUdpEchoTmplEntry" <<"[cipslaUdpEchoTmplName='" <<cipslaudpechotmplname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-ECHO-MIB:CISCO-IPSLA-ECHO-MIB/cipslaUdpEchoTmplTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaudpechotmplname.is_set || is_set(cipslaudpechotmplname.operation)) leaf_name_data.push_back(cipslaudpechotmplname.get_name_leafdata());
    if (cipslaudpechotmplcontrolenable.is_set || is_set(cipslaudpechotmplcontrolenable.operation)) leaf_name_data.push_back(cipslaudpechotmplcontrolenable.get_name_leafdata());
    if (cipslaudpechotmpldescription.is_set || is_set(cipslaudpechotmpldescription.operation)) leaf_name_data.push_back(cipslaudpechotmpldescription.get_name_leafdata());
    if (cipslaudpechotmpldistbuckets.is_set || is_set(cipslaudpechotmpldistbuckets.operation)) leaf_name_data.push_back(cipslaudpechotmpldistbuckets.get_name_leafdata());
    if (cipslaudpechotmpldistinterval.is_set || is_set(cipslaudpechotmpldistinterval.operation)) leaf_name_data.push_back(cipslaudpechotmpldistinterval.get_name_leafdata());
    if (cipslaudpechotmplhistbuckets.is_set || is_set(cipslaudpechotmplhistbuckets.operation)) leaf_name_data.push_back(cipslaudpechotmplhistbuckets.get_name_leafdata());
    if (cipslaudpechotmplhistfilter.is_set || is_set(cipslaudpechotmplhistfilter.operation)) leaf_name_data.push_back(cipslaudpechotmplhistfilter.get_name_leafdata());
    if (cipslaudpechotmplhistlives.is_set || is_set(cipslaudpechotmplhistlives.operation)) leaf_name_data.push_back(cipslaudpechotmplhistlives.get_name_leafdata());
    if (cipslaudpechotmplreqdatasize.is_set || is_set(cipslaudpechotmplreqdatasize.operation)) leaf_name_data.push_back(cipslaudpechotmplreqdatasize.get_name_leafdata());
    if (cipslaudpechotmplrowstatus.is_set || is_set(cipslaudpechotmplrowstatus.operation)) leaf_name_data.push_back(cipslaudpechotmplrowstatus.get_name_leafdata());
    if (cipslaudpechotmplsrcaddr.is_set || is_set(cipslaudpechotmplsrcaddr.operation)) leaf_name_data.push_back(cipslaudpechotmplsrcaddr.get_name_leafdata());
    if (cipslaudpechotmplsrcaddrtype.is_set || is_set(cipslaudpechotmplsrcaddrtype.operation)) leaf_name_data.push_back(cipslaudpechotmplsrcaddrtype.get_name_leafdata());
    if (cipslaudpechotmplsrcport.is_set || is_set(cipslaudpechotmplsrcport.operation)) leaf_name_data.push_back(cipslaudpechotmplsrcport.get_name_leafdata());
    if (cipslaudpechotmplstatshours.is_set || is_set(cipslaudpechotmplstatshours.operation)) leaf_name_data.push_back(cipslaudpechotmplstatshours.get_name_leafdata());
    if (cipslaudpechotmplstoragetype.is_set || is_set(cipslaudpechotmplstoragetype.operation)) leaf_name_data.push_back(cipslaudpechotmplstoragetype.get_name_leafdata());
    if (cipslaudpechotmplthreshold.is_set || is_set(cipslaudpechotmplthreshold.operation)) leaf_name_data.push_back(cipslaudpechotmplthreshold.get_name_leafdata());
    if (cipslaudpechotmpltimeout.is_set || is_set(cipslaudpechotmpltimeout.operation)) leaf_name_data.push_back(cipslaudpechotmpltimeout.get_name_leafdata());
    if (cipslaudpechotmpltos.is_set || is_set(cipslaudpechotmpltos.operation)) leaf_name_data.push_back(cipslaudpechotmpltos.get_name_leafdata());
    if (cipslaudpechotmplverifydata.is_set || is_set(cipslaudpechotmplverifydata.operation)) leaf_name_data.push_back(cipslaudpechotmplverifydata.get_name_leafdata());
    if (cipslaudpechotmplvrfname.is_set || is_set(cipslaudpechotmplvrfname.operation)) leaf_name_data.push_back(cipslaudpechotmplvrfname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipslaUdpEchoTmplName")
    {
        cipslaudpechotmplname = value;
    }
    if(value_path == "cipslaUdpEchoTmplControlEnable")
    {
        cipslaudpechotmplcontrolenable = value;
    }
    if(value_path == "cipslaUdpEchoTmplDescription")
    {
        cipslaudpechotmpldescription = value;
    }
    if(value_path == "cipslaUdpEchoTmplDistBuckets")
    {
        cipslaudpechotmpldistbuckets = value;
    }
    if(value_path == "cipslaUdpEchoTmplDistInterval")
    {
        cipslaudpechotmpldistinterval = value;
    }
    if(value_path == "cipslaUdpEchoTmplHistBuckets")
    {
        cipslaudpechotmplhistbuckets = value;
    }
    if(value_path == "cipslaUdpEchoTmplHistFilter")
    {
        cipslaudpechotmplhistfilter = value;
    }
    if(value_path == "cipslaUdpEchoTmplHistLives")
    {
        cipslaudpechotmplhistlives = value;
    }
    if(value_path == "cipslaUdpEchoTmplReqDataSize")
    {
        cipslaudpechotmplreqdatasize = value;
    }
    if(value_path == "cipslaUdpEchoTmplRowStatus")
    {
        cipslaudpechotmplrowstatus = value;
    }
    if(value_path == "cipslaUdpEchoTmplSrcAddr")
    {
        cipslaudpechotmplsrcaddr = value;
    }
    if(value_path == "cipslaUdpEchoTmplSrcAddrType")
    {
        cipslaudpechotmplsrcaddrtype = value;
    }
    if(value_path == "cipslaUdpEchoTmplSrcPort")
    {
        cipslaudpechotmplsrcport = value;
    }
    if(value_path == "cipslaUdpEchoTmplStatsHours")
    {
        cipslaudpechotmplstatshours = value;
    }
    if(value_path == "cipslaUdpEchoTmplStorageType")
    {
        cipslaudpechotmplstoragetype = value;
    }
    if(value_path == "cipslaUdpEchoTmplThreshold")
    {
        cipslaudpechotmplthreshold = value;
    }
    if(value_path == "cipslaUdpEchoTmplTimeOut")
    {
        cipslaudpechotmpltimeout = value;
    }
    if(value_path == "cipslaUdpEchoTmplTOS")
    {
        cipslaudpechotmpltos = value;
    }
    if(value_path == "cipslaUdpEchoTmplVerifyData")
    {
        cipslaudpechotmplverifydata = value;
    }
    if(value_path == "cipslaUdpEchoTmplVrfName")
    {
        cipslaudpechotmplvrfname = value;
    }
}

CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmpltable()
{
    yang_name = "cipslaTcpConnTmplTable"; yang_parent_name = "CISCO-IPSLA-ECHO-MIB";
}

CiscoIpslaEchoMib::Cipslatcpconntmpltable::~Cipslatcpconntmpltable()
{
}

bool CiscoIpslaEchoMib::Cipslatcpconntmpltable::has_data() const
{
    for (std::size_t index=0; index<cipslatcpconntmplentry_.size(); index++)
    {
        if(cipslatcpconntmplentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaEchoMib::Cipslatcpconntmpltable::has_operation() const
{
    for (std::size_t index=0; index<cipslatcpconntmplentry_.size(); index++)
    {
        if(cipslatcpconntmplentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpslaEchoMib::Cipslatcpconntmpltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaTcpConnTmplTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaEchoMib::Cipslatcpconntmpltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-ECHO-MIB:CISCO-IPSLA-ECHO-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaEchoMib::Cipslatcpconntmpltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaTcpConnTmplEntry")
    {
        for(auto const & c : cipslatcpconntmplentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry>();
        c->parent = this;
        cipslatcpconntmplentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaEchoMib::Cipslatcpconntmpltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslatcpconntmplentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaEchoMib::Cipslatcpconntmpltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::Cipslatcpconntmplentry()
    :
    cipslatcpconntmplname{YType::str, "cipslaTcpConnTmplName"},
    cipslatcpconntmplcontrolenable{YType::boolean, "cipslaTcpConnTmplControlEnable"},
    cipslatcpconntmpldescription{YType::str, "cipslaTcpConnTmplDescription"},
    cipslatcpconntmpldistbuckets{YType::uint32, "cipslaTcpConnTmplDistBuckets"},
    cipslatcpconntmpldistinterval{YType::uint32, "cipslaTcpConnTmplDistInterval"},
    cipslatcpconntmplhistbuckets{YType::uint32, "cipslaTcpConnTmplHistBuckets"},
    cipslatcpconntmplhistfilter{YType::enumeration, "cipslaTcpConnTmplHistFilter"},
    cipslatcpconntmplhistlives{YType::uint32, "cipslaTcpConnTmplHistLives"},
    cipslatcpconntmplrowstatus{YType::enumeration, "cipslaTcpConnTmplRowStatus"},
    cipslatcpconntmplsrcaddr{YType::str, "cipslaTcpConnTmplSrcAddr"},
    cipslatcpconntmplsrcaddrtype{YType::enumeration, "cipslaTcpConnTmplSrcAddrType"},
    cipslatcpconntmplsrcport{YType::uint16, "cipslaTcpConnTmplSrcPort"},
    cipslatcpconntmplstatshours{YType::uint32, "cipslaTcpConnTmplStatsHours"},
    cipslatcpconntmplstoragetype{YType::enumeration, "cipslaTcpConnTmplStorageType"},
    cipslatcpconntmplthreshold{YType::uint32, "cipslaTcpConnTmplThreshold"},
    cipslatcpconntmpltimeout{YType::uint32, "cipslaTcpConnTmplTimeOut"},
    cipslatcpconntmpltos{YType::uint32, "cipslaTcpConnTmplTOS"},
    cipslatcpconntmplverifydata{YType::boolean, "cipslaTcpConnTmplVerifyData"}
{
    yang_name = "cipslaTcpConnTmplEntry"; yang_parent_name = "cipslaTcpConnTmplTable";
}

CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::~Cipslatcpconntmplentry()
{
}

bool CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::has_data() const
{
    return cipslatcpconntmplname.is_set
	|| cipslatcpconntmplcontrolenable.is_set
	|| cipslatcpconntmpldescription.is_set
	|| cipslatcpconntmpldistbuckets.is_set
	|| cipslatcpconntmpldistinterval.is_set
	|| cipslatcpconntmplhistbuckets.is_set
	|| cipslatcpconntmplhistfilter.is_set
	|| cipslatcpconntmplhistlives.is_set
	|| cipslatcpconntmplrowstatus.is_set
	|| cipslatcpconntmplsrcaddr.is_set
	|| cipslatcpconntmplsrcaddrtype.is_set
	|| cipslatcpconntmplsrcport.is_set
	|| cipslatcpconntmplstatshours.is_set
	|| cipslatcpconntmplstoragetype.is_set
	|| cipslatcpconntmplthreshold.is_set
	|| cipslatcpconntmpltimeout.is_set
	|| cipslatcpconntmpltos.is_set
	|| cipslatcpconntmplverifydata.is_set;
}

bool CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipslatcpconntmplname.operation)
	|| is_set(cipslatcpconntmplcontrolenable.operation)
	|| is_set(cipslatcpconntmpldescription.operation)
	|| is_set(cipslatcpconntmpldistbuckets.operation)
	|| is_set(cipslatcpconntmpldistinterval.operation)
	|| is_set(cipslatcpconntmplhistbuckets.operation)
	|| is_set(cipslatcpconntmplhistfilter.operation)
	|| is_set(cipslatcpconntmplhistlives.operation)
	|| is_set(cipslatcpconntmplrowstatus.operation)
	|| is_set(cipslatcpconntmplsrcaddr.operation)
	|| is_set(cipslatcpconntmplsrcaddrtype.operation)
	|| is_set(cipslatcpconntmplsrcport.operation)
	|| is_set(cipslatcpconntmplstatshours.operation)
	|| is_set(cipslatcpconntmplstoragetype.operation)
	|| is_set(cipslatcpconntmplthreshold.operation)
	|| is_set(cipslatcpconntmpltimeout.operation)
	|| is_set(cipslatcpconntmpltos.operation)
	|| is_set(cipslatcpconntmplverifydata.operation);
}

std::string CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaTcpConnTmplEntry" <<"[cipslaTcpConnTmplName='" <<cipslatcpconntmplname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-ECHO-MIB:CISCO-IPSLA-ECHO-MIB/cipslaTcpConnTmplTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslatcpconntmplname.is_set || is_set(cipslatcpconntmplname.operation)) leaf_name_data.push_back(cipslatcpconntmplname.get_name_leafdata());
    if (cipslatcpconntmplcontrolenable.is_set || is_set(cipslatcpconntmplcontrolenable.operation)) leaf_name_data.push_back(cipslatcpconntmplcontrolenable.get_name_leafdata());
    if (cipslatcpconntmpldescription.is_set || is_set(cipslatcpconntmpldescription.operation)) leaf_name_data.push_back(cipslatcpconntmpldescription.get_name_leafdata());
    if (cipslatcpconntmpldistbuckets.is_set || is_set(cipslatcpconntmpldistbuckets.operation)) leaf_name_data.push_back(cipslatcpconntmpldistbuckets.get_name_leafdata());
    if (cipslatcpconntmpldistinterval.is_set || is_set(cipslatcpconntmpldistinterval.operation)) leaf_name_data.push_back(cipslatcpconntmpldistinterval.get_name_leafdata());
    if (cipslatcpconntmplhistbuckets.is_set || is_set(cipslatcpconntmplhistbuckets.operation)) leaf_name_data.push_back(cipslatcpconntmplhistbuckets.get_name_leafdata());
    if (cipslatcpconntmplhistfilter.is_set || is_set(cipslatcpconntmplhistfilter.operation)) leaf_name_data.push_back(cipslatcpconntmplhistfilter.get_name_leafdata());
    if (cipslatcpconntmplhistlives.is_set || is_set(cipslatcpconntmplhistlives.operation)) leaf_name_data.push_back(cipslatcpconntmplhistlives.get_name_leafdata());
    if (cipslatcpconntmplrowstatus.is_set || is_set(cipslatcpconntmplrowstatus.operation)) leaf_name_data.push_back(cipslatcpconntmplrowstatus.get_name_leafdata());
    if (cipslatcpconntmplsrcaddr.is_set || is_set(cipslatcpconntmplsrcaddr.operation)) leaf_name_data.push_back(cipslatcpconntmplsrcaddr.get_name_leafdata());
    if (cipslatcpconntmplsrcaddrtype.is_set || is_set(cipslatcpconntmplsrcaddrtype.operation)) leaf_name_data.push_back(cipslatcpconntmplsrcaddrtype.get_name_leafdata());
    if (cipslatcpconntmplsrcport.is_set || is_set(cipslatcpconntmplsrcport.operation)) leaf_name_data.push_back(cipslatcpconntmplsrcport.get_name_leafdata());
    if (cipslatcpconntmplstatshours.is_set || is_set(cipslatcpconntmplstatshours.operation)) leaf_name_data.push_back(cipslatcpconntmplstatshours.get_name_leafdata());
    if (cipslatcpconntmplstoragetype.is_set || is_set(cipslatcpconntmplstoragetype.operation)) leaf_name_data.push_back(cipslatcpconntmplstoragetype.get_name_leafdata());
    if (cipslatcpconntmplthreshold.is_set || is_set(cipslatcpconntmplthreshold.operation)) leaf_name_data.push_back(cipslatcpconntmplthreshold.get_name_leafdata());
    if (cipslatcpconntmpltimeout.is_set || is_set(cipslatcpconntmpltimeout.operation)) leaf_name_data.push_back(cipslatcpconntmpltimeout.get_name_leafdata());
    if (cipslatcpconntmpltos.is_set || is_set(cipslatcpconntmpltos.operation)) leaf_name_data.push_back(cipslatcpconntmpltos.get_name_leafdata());
    if (cipslatcpconntmplverifydata.is_set || is_set(cipslatcpconntmplverifydata.operation)) leaf_name_data.push_back(cipslatcpconntmplverifydata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipslaTcpConnTmplName")
    {
        cipslatcpconntmplname = value;
    }
    if(value_path == "cipslaTcpConnTmplControlEnable")
    {
        cipslatcpconntmplcontrolenable = value;
    }
    if(value_path == "cipslaTcpConnTmplDescription")
    {
        cipslatcpconntmpldescription = value;
    }
    if(value_path == "cipslaTcpConnTmplDistBuckets")
    {
        cipslatcpconntmpldistbuckets = value;
    }
    if(value_path == "cipslaTcpConnTmplDistInterval")
    {
        cipslatcpconntmpldistinterval = value;
    }
    if(value_path == "cipslaTcpConnTmplHistBuckets")
    {
        cipslatcpconntmplhistbuckets = value;
    }
    if(value_path == "cipslaTcpConnTmplHistFilter")
    {
        cipslatcpconntmplhistfilter = value;
    }
    if(value_path == "cipslaTcpConnTmplHistLives")
    {
        cipslatcpconntmplhistlives = value;
    }
    if(value_path == "cipslaTcpConnTmplRowStatus")
    {
        cipslatcpconntmplrowstatus = value;
    }
    if(value_path == "cipslaTcpConnTmplSrcAddr")
    {
        cipslatcpconntmplsrcaddr = value;
    }
    if(value_path == "cipslaTcpConnTmplSrcAddrType")
    {
        cipslatcpconntmplsrcaddrtype = value;
    }
    if(value_path == "cipslaTcpConnTmplSrcPort")
    {
        cipslatcpconntmplsrcport = value;
    }
    if(value_path == "cipslaTcpConnTmplStatsHours")
    {
        cipslatcpconntmplstatshours = value;
    }
    if(value_path == "cipslaTcpConnTmplStorageType")
    {
        cipslatcpconntmplstoragetype = value;
    }
    if(value_path == "cipslaTcpConnTmplThreshold")
    {
        cipslatcpconntmplthreshold = value;
    }
    if(value_path == "cipslaTcpConnTmplTimeOut")
    {
        cipslatcpconntmpltimeout = value;
    }
    if(value_path == "cipslaTcpConnTmplTOS")
    {
        cipslatcpconntmpltos = value;
    }
    if(value_path == "cipslaTcpConnTmplVerifyData")
    {
        cipslatcpconntmplverifydata = value;
    }
}

const Enum::YLeaf CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::CipslaicmpechotmplhistfilterEnum::none {1, "none"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::CipslaicmpechotmplhistfilterEnum::all {2, "all"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::CipslaicmpechotmplhistfilterEnum::overThreshold {3, "overThreshold"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::CipslaicmpechotmplhistfilterEnum::failures {4, "failures"};

const Enum::YLeaf CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::CipslaudpechotmplhistfilterEnum::none {1, "none"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::CipslaudpechotmplhistfilterEnum::all {2, "all"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::CipslaudpechotmplhistfilterEnum::overThreshold {3, "overThreshold"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::CipslaudpechotmplhistfilterEnum::failures {4, "failures"};

const Enum::YLeaf CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::CipslatcpconntmplhistfilterEnum::none {1, "none"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::CipslatcpconntmplhistfilterEnum::all {2, "all"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::CipslatcpconntmplhistfilterEnum::overThreshold {3, "overThreshold"};
const Enum::YLeaf CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::CipslatcpconntmplhistfilterEnum::failures {4, "failures"};


}
}

