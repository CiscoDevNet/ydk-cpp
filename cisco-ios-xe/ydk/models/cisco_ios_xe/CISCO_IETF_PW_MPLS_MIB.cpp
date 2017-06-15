
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_PW_MPLS_MIB.hpp"

namespace ydk {
namespace CISCO_IETF_PW_MPLS_MIB {

CiscoIetfPwMplsMib::CiscoIetfPwMplsMib()
    :
    cpwvcmplsinboundtable_(std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplsinboundtable>())
	,cpwvcmplsnontemappingtable_(std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable>())
	,cpwvcmplsobjects_(std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplsobjects>())
	,cpwvcmplsoutboundtable_(std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable>())
	,cpwvcmplstable_(std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplstable>())
	,cpwvcmplstemappingtable_(std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplstemappingtable>())
{
    cpwvcmplsinboundtable_->parent = this;

    cpwvcmplsnontemappingtable_->parent = this;

    cpwvcmplsobjects_->parent = this;

    cpwvcmplsoutboundtable_->parent = this;

    cpwvcmplstable_->parent = this;

    cpwvcmplstemappingtable_->parent = this;

    yang_name = "CISCO-IETF-PW-MPLS-MIB"; yang_parent_name = "CISCO-IETF-PW-MPLS-MIB";
}

CiscoIetfPwMplsMib::~CiscoIetfPwMplsMib()
{
}

bool CiscoIetfPwMplsMib::has_data() const
{
    return (cpwvcmplsinboundtable_ !=  nullptr && cpwvcmplsinboundtable_->has_data())
	|| (cpwvcmplsnontemappingtable_ !=  nullptr && cpwvcmplsnontemappingtable_->has_data())
	|| (cpwvcmplsobjects_ !=  nullptr && cpwvcmplsobjects_->has_data())
	|| (cpwvcmplsoutboundtable_ !=  nullptr && cpwvcmplsoutboundtable_->has_data())
	|| (cpwvcmplstable_ !=  nullptr && cpwvcmplstable_->has_data())
	|| (cpwvcmplstemappingtable_ !=  nullptr && cpwvcmplstemappingtable_->has_data());
}

bool CiscoIetfPwMplsMib::has_operation() const
{
    return is_set(operation)
	|| (cpwvcmplsinboundtable_ !=  nullptr && cpwvcmplsinboundtable_->has_operation())
	|| (cpwvcmplsnontemappingtable_ !=  nullptr && cpwvcmplsnontemappingtable_->has_operation())
	|| (cpwvcmplsobjects_ !=  nullptr && cpwvcmplsobjects_->has_operation())
	|| (cpwvcmplsoutboundtable_ !=  nullptr && cpwvcmplsoutboundtable_->has_operation())
	|| (cpwvcmplstable_ !=  nullptr && cpwvcmplstable_->has_operation())
	|| (cpwvcmplstemappingtable_ !=  nullptr && cpwvcmplstemappingtable_->has_operation());
}

std::string CiscoIetfPwMplsMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMplsMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIetfPwMplsMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcMplsInboundTable")
    {
        if(cpwvcmplsinboundtable_ == nullptr)
        {
            cpwvcmplsinboundtable_ = std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplsinboundtable>();
        }
        return cpwvcmplsinboundtable_;
    }

    if(child_yang_name == "cpwVcMplsNonTeMappingTable")
    {
        if(cpwvcmplsnontemappingtable_ == nullptr)
        {
            cpwvcmplsnontemappingtable_ = std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable>();
        }
        return cpwvcmplsnontemappingtable_;
    }

    if(child_yang_name == "cpwVcMplsObjects")
    {
        if(cpwvcmplsobjects_ == nullptr)
        {
            cpwvcmplsobjects_ = std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplsobjects>();
        }
        return cpwvcmplsobjects_;
    }

    if(child_yang_name == "cpwVcMplsOutboundTable")
    {
        if(cpwvcmplsoutboundtable_ == nullptr)
        {
            cpwvcmplsoutboundtable_ = std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable>();
        }
        return cpwvcmplsoutboundtable_;
    }

    if(child_yang_name == "cpwVcMplsTable")
    {
        if(cpwvcmplstable_ == nullptr)
        {
            cpwvcmplstable_ = std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplstable>();
        }
        return cpwvcmplstable_;
    }

    if(child_yang_name == "cpwVcMplsTeMappingTable")
    {
        if(cpwvcmplstemappingtable_ == nullptr)
        {
            cpwvcmplstemappingtable_ = std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplstemappingtable>();
        }
        return cpwvcmplstemappingtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMplsMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpwvcmplsinboundtable_ != nullptr)
    {
        children["cpwVcMplsInboundTable"] = cpwvcmplsinboundtable_;
    }

    if(cpwvcmplsnontemappingtable_ != nullptr)
    {
        children["cpwVcMplsNonTeMappingTable"] = cpwvcmplsnontemappingtable_;
    }

    if(cpwvcmplsobjects_ != nullptr)
    {
        children["cpwVcMplsObjects"] = cpwvcmplsobjects_;
    }

    if(cpwvcmplsoutboundtable_ != nullptr)
    {
        children["cpwVcMplsOutboundTable"] = cpwvcmplsoutboundtable_;
    }

    if(cpwvcmplstable_ != nullptr)
    {
        children["cpwVcMplsTable"] = cpwvcmplstable_;
    }

    if(cpwvcmplstemappingtable_ != nullptr)
    {
        children["cpwVcMplsTeMappingTable"] = cpwvcmplstemappingtable_;
    }

    return children;
}

void CiscoIetfPwMplsMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIetfPwMplsMib::clone_ptr() const
{
    return std::make_shared<CiscoIetfPwMplsMib>();
}

std::string CiscoIetfPwMplsMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIetfPwMplsMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIetfPwMplsMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIetfPwMplsMib::Cpwvcmplsobjects::Cpwvcmplsobjects()
    :
    cpwvcmplsinboundindexnext{YType::uint32, "cpwVcMplsInboundIndexNext"},
    cpwvcmplsoutboundindexnext{YType::uint32, "cpwVcMplsOutboundIndexNext"}
{
    yang_name = "cpwVcMplsObjects"; yang_parent_name = "CISCO-IETF-PW-MPLS-MIB";
}

CiscoIetfPwMplsMib::Cpwvcmplsobjects::~Cpwvcmplsobjects()
{
}

bool CiscoIetfPwMplsMib::Cpwvcmplsobjects::has_data() const
{
    return cpwvcmplsinboundindexnext.is_set
	|| cpwvcmplsoutboundindexnext.is_set;
}

bool CiscoIetfPwMplsMib::Cpwvcmplsobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcmplsinboundindexnext.operation)
	|| is_set(cpwvcmplsoutboundindexnext.operation);
}

std::string CiscoIetfPwMplsMib::Cpwvcmplsobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsObjects";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMplsMib::Cpwvcmplsobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcmplsinboundindexnext.is_set || is_set(cpwvcmplsinboundindexnext.operation)) leaf_name_data.push_back(cpwvcmplsinboundindexnext.get_name_leafdata());
    if (cpwvcmplsoutboundindexnext.is_set || is_set(cpwvcmplsoutboundindexnext.operation)) leaf_name_data.push_back(cpwvcmplsoutboundindexnext.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMplsMib::Cpwvcmplsobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMplsMib::Cpwvcmplsobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwMplsMib::Cpwvcmplsobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcMplsInboundIndexNext")
    {
        cpwvcmplsinboundindexnext = value;
    }
    if(value_path == "cpwVcMplsOutboundIndexNext")
    {
        cpwvcmplsoutboundindexnext = value;
    }
}

CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplstable()
{
    yang_name = "cpwVcMplsTable"; yang_parent_name = "CISCO-IETF-PW-MPLS-MIB";
}

CiscoIetfPwMplsMib::Cpwvcmplstable::~Cpwvcmplstable()
{
}

bool CiscoIetfPwMplsMib::Cpwvcmplstable::has_data() const
{
    for (std::size_t index=0; index<cpwvcmplsentry_.size(); index++)
    {
        if(cpwvcmplsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwMplsMib::Cpwvcmplstable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcmplsentry_.size(); index++)
    {
        if(cpwvcmplsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwMplsMib::Cpwvcmplstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMplsMib::Cpwvcmplstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMplsMib::Cpwvcmplstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcMplsEntry")
    {
        for(auto const & c : cpwvcmplsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry>();
        c->parent = this;
        cpwvcmplsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMplsMib::Cpwvcmplstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcmplsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwMplsMib::Cpwvcmplstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry::Cpwvcmplsentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcmplsexpbits{YType::uint32, "cpwVcMplsExpBits"},
    cpwvcmplsexpbitsmode{YType::enumeration, "cpwVcMplsExpBitsMode"},
    cpwvcmplslocalldpentityid{YType::uint32, "cpwVcMplsLocalLdpEntityID"},
    cpwvcmplslocalldpid{YType::str, "cpwVcMplsLocalLdpID"},
    cpwvcmplsmplstype{YType::bits, "cpwVcMplsMplsType"},
    cpwvcmplspeerldpid{YType::str, "cpwVcMplsPeerLdpID"},
    cpwvcmplsstoragetype{YType::enumeration, "cpwVcMplsStorageType"},
    cpwvcmplsttl{YType::uint32, "cpwVcMplsTtl"}
{
    yang_name = "cpwVcMplsEntry"; yang_parent_name = "cpwVcMplsTable";
}

CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry::~Cpwvcmplsentry()
{
}

bool CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcmplsexpbits.is_set
	|| cpwvcmplsexpbitsmode.is_set
	|| cpwvcmplslocalldpentityid.is_set
	|| cpwvcmplslocalldpid.is_set
	|| cpwvcmplsmplstype.is_set
	|| cpwvcmplspeerldpid.is_set
	|| cpwvcmplsstoragetype.is_set
	|| cpwvcmplsttl.is_set;
}

bool CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwvcmplsexpbits.operation)
	|| is_set(cpwvcmplsexpbitsmode.operation)
	|| is_set(cpwvcmplslocalldpentityid.operation)
	|| is_set(cpwvcmplslocalldpid.operation)
	|| is_set(cpwvcmplsmplstype.operation)
	|| is_set(cpwvcmplspeerldpid.operation)
	|| is_set(cpwvcmplsstoragetype.operation)
	|| is_set(cpwvcmplsttl.operation);
}

std::string CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/cpwVcMplsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcmplsexpbits.is_set || is_set(cpwvcmplsexpbits.operation)) leaf_name_data.push_back(cpwvcmplsexpbits.get_name_leafdata());
    if (cpwvcmplsexpbitsmode.is_set || is_set(cpwvcmplsexpbitsmode.operation)) leaf_name_data.push_back(cpwvcmplsexpbitsmode.get_name_leafdata());
    if (cpwvcmplslocalldpentityid.is_set || is_set(cpwvcmplslocalldpentityid.operation)) leaf_name_data.push_back(cpwvcmplslocalldpentityid.get_name_leafdata());
    if (cpwvcmplslocalldpid.is_set || is_set(cpwvcmplslocalldpid.operation)) leaf_name_data.push_back(cpwvcmplslocalldpid.get_name_leafdata());
    if (cpwvcmplsmplstype.is_set || is_set(cpwvcmplsmplstype.operation)) leaf_name_data.push_back(cpwvcmplsmplstype.get_name_leafdata());
    if (cpwvcmplspeerldpid.is_set || is_set(cpwvcmplspeerldpid.operation)) leaf_name_data.push_back(cpwvcmplspeerldpid.get_name_leafdata());
    if (cpwvcmplsstoragetype.is_set || is_set(cpwvcmplsstoragetype.operation)) leaf_name_data.push_back(cpwvcmplsstoragetype.get_name_leafdata());
    if (cpwvcmplsttl.is_set || is_set(cpwvcmplsttl.operation)) leaf_name_data.push_back(cpwvcmplsttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwVcMplsExpBits")
    {
        cpwvcmplsexpbits = value;
    }
    if(value_path == "cpwVcMplsExpBitsMode")
    {
        cpwvcmplsexpbitsmode = value;
    }
    if(value_path == "cpwVcMplsLocalLdpEntityID")
    {
        cpwvcmplslocalldpentityid = value;
    }
    if(value_path == "cpwVcMplsLocalLdpID")
    {
        cpwvcmplslocalldpid = value;
    }
    if(value_path == "cpwVcMplsMplsType")
    {
        cpwvcmplsmplstype[value] = true;
    }
    if(value_path == "cpwVcMplsPeerLdpID")
    {
        cpwvcmplspeerldpid = value;
    }
    if(value_path == "cpwVcMplsStorageType")
    {
        cpwvcmplsstoragetype = value;
    }
    if(value_path == "cpwVcMplsTtl")
    {
        cpwvcmplsttl = value;
    }
}

CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundtable()
{
    yang_name = "cpwVcMplsOutboundTable"; yang_parent_name = "CISCO-IETF-PW-MPLS-MIB";
}

CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::~Cpwvcmplsoutboundtable()
{
}

bool CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::has_data() const
{
    for (std::size_t index=0; index<cpwvcmplsoutboundentry_.size(); index++)
    {
        if(cpwvcmplsoutboundentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcmplsoutboundentry_.size(); index++)
    {
        if(cpwvcmplsoutboundentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsOutboundTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcMplsOutboundEntry")
    {
        for(auto const & c : cpwvcmplsoutboundentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry>();
        c->parent = this;
        cpwvcmplsoutboundentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcmplsoutboundentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry::Cpwvcmplsoutboundentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcmplsoutboundindex{YType::uint32, "cpwVcMplsOutboundIndex"},
    cpwvcmplsoutboundifindex{YType::int32, "cpwVcMplsOutboundIfIndex"},
    cpwvcmplsoutboundlsrxcindex{YType::uint32, "cpwVcMplsOutboundLsrXcIndex"},
    cpwvcmplsoutboundrowstatus{YType::enumeration, "cpwVcMplsOutboundRowStatus"},
    cpwvcmplsoutboundstoragetype{YType::enumeration, "cpwVcMplsOutboundStorageType"},
    cpwvcmplsoutboundtunnelindex{YType::uint32, "cpwVcMplsOutboundTunnelIndex"},
    cpwvcmplsoutboundtunnelinstance{YType::uint32, "cpwVcMplsOutboundTunnelInstance"},
    cpwvcmplsoutboundtunnellcllsr{YType::str, "cpwVcMplsOutboundTunnelLclLSR"},
    cpwvcmplsoutboundtunnelpeerlsr{YType::str, "cpwVcMplsOutboundTunnelPeerLSR"}
{
    yang_name = "cpwVcMplsOutboundEntry"; yang_parent_name = "cpwVcMplsOutboundTable";
}

CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry::~Cpwvcmplsoutboundentry()
{
}

bool CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcmplsoutboundindex.is_set
	|| cpwvcmplsoutboundifindex.is_set
	|| cpwvcmplsoutboundlsrxcindex.is_set
	|| cpwvcmplsoutboundrowstatus.is_set
	|| cpwvcmplsoutboundstoragetype.is_set
	|| cpwvcmplsoutboundtunnelindex.is_set
	|| cpwvcmplsoutboundtunnelinstance.is_set
	|| cpwvcmplsoutboundtunnellcllsr.is_set
	|| cpwvcmplsoutboundtunnelpeerlsr.is_set;
}

bool CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwvcmplsoutboundindex.operation)
	|| is_set(cpwvcmplsoutboundifindex.operation)
	|| is_set(cpwvcmplsoutboundlsrxcindex.operation)
	|| is_set(cpwvcmplsoutboundrowstatus.operation)
	|| is_set(cpwvcmplsoutboundstoragetype.operation)
	|| is_set(cpwvcmplsoutboundtunnelindex.operation)
	|| is_set(cpwvcmplsoutboundtunnelinstance.operation)
	|| is_set(cpwvcmplsoutboundtunnellcllsr.operation)
	|| is_set(cpwvcmplsoutboundtunnelpeerlsr.operation);
}

std::string CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsOutboundEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']" <<"[cpwVcMplsOutboundIndex='" <<cpwvcmplsoutboundindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/cpwVcMplsOutboundTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcmplsoutboundindex.is_set || is_set(cpwvcmplsoutboundindex.operation)) leaf_name_data.push_back(cpwvcmplsoutboundindex.get_name_leafdata());
    if (cpwvcmplsoutboundifindex.is_set || is_set(cpwvcmplsoutboundifindex.operation)) leaf_name_data.push_back(cpwvcmplsoutboundifindex.get_name_leafdata());
    if (cpwvcmplsoutboundlsrxcindex.is_set || is_set(cpwvcmplsoutboundlsrxcindex.operation)) leaf_name_data.push_back(cpwvcmplsoutboundlsrxcindex.get_name_leafdata());
    if (cpwvcmplsoutboundrowstatus.is_set || is_set(cpwvcmplsoutboundrowstatus.operation)) leaf_name_data.push_back(cpwvcmplsoutboundrowstatus.get_name_leafdata());
    if (cpwvcmplsoutboundstoragetype.is_set || is_set(cpwvcmplsoutboundstoragetype.operation)) leaf_name_data.push_back(cpwvcmplsoutboundstoragetype.get_name_leafdata());
    if (cpwvcmplsoutboundtunnelindex.is_set || is_set(cpwvcmplsoutboundtunnelindex.operation)) leaf_name_data.push_back(cpwvcmplsoutboundtunnelindex.get_name_leafdata());
    if (cpwvcmplsoutboundtunnelinstance.is_set || is_set(cpwvcmplsoutboundtunnelinstance.operation)) leaf_name_data.push_back(cpwvcmplsoutboundtunnelinstance.get_name_leafdata());
    if (cpwvcmplsoutboundtunnellcllsr.is_set || is_set(cpwvcmplsoutboundtunnellcllsr.operation)) leaf_name_data.push_back(cpwvcmplsoutboundtunnellcllsr.get_name_leafdata());
    if (cpwvcmplsoutboundtunnelpeerlsr.is_set || is_set(cpwvcmplsoutboundtunnelpeerlsr.operation)) leaf_name_data.push_back(cpwvcmplsoutboundtunnelpeerlsr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwVcMplsOutboundIndex")
    {
        cpwvcmplsoutboundindex = value;
    }
    if(value_path == "cpwVcMplsOutboundIfIndex")
    {
        cpwvcmplsoutboundifindex = value;
    }
    if(value_path == "cpwVcMplsOutboundLsrXcIndex")
    {
        cpwvcmplsoutboundlsrxcindex = value;
    }
    if(value_path == "cpwVcMplsOutboundRowStatus")
    {
        cpwvcmplsoutboundrowstatus = value;
    }
    if(value_path == "cpwVcMplsOutboundStorageType")
    {
        cpwvcmplsoutboundstoragetype = value;
    }
    if(value_path == "cpwVcMplsOutboundTunnelIndex")
    {
        cpwvcmplsoutboundtunnelindex = value;
    }
    if(value_path == "cpwVcMplsOutboundTunnelInstance")
    {
        cpwvcmplsoutboundtunnelinstance = value;
    }
    if(value_path == "cpwVcMplsOutboundTunnelLclLSR")
    {
        cpwvcmplsoutboundtunnellcllsr = value;
    }
    if(value_path == "cpwVcMplsOutboundTunnelPeerLSR")
    {
        cpwvcmplsoutboundtunnelpeerlsr = value;
    }
}

CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundtable()
{
    yang_name = "cpwVcMplsInboundTable"; yang_parent_name = "CISCO-IETF-PW-MPLS-MIB";
}

CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::~Cpwvcmplsinboundtable()
{
}

bool CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::has_data() const
{
    for (std::size_t index=0; index<cpwvcmplsinboundentry_.size(); index++)
    {
        if(cpwvcmplsinboundentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcmplsinboundentry_.size(); index++)
    {
        if(cpwvcmplsinboundentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsInboundTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcMplsInboundEntry")
    {
        for(auto const & c : cpwvcmplsinboundentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry>();
        c->parent = this;
        cpwvcmplsinboundentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcmplsinboundentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry::Cpwvcmplsinboundentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcmplsinboundindex{YType::uint32, "cpwVcMplsInboundIndex"},
    cpwvcmplsinboundifindex{YType::int32, "cpwVcMplsInboundIfIndex"},
    cpwvcmplsinboundlsrxcindex{YType::uint32, "cpwVcMplsInboundLsrXcIndex"},
    cpwvcmplsinboundrowstatus{YType::enumeration, "cpwVcMplsInboundRowStatus"},
    cpwvcmplsinboundstoragetype{YType::enumeration, "cpwVcMplsInboundStorageType"},
    cpwvcmplsinboundtunnelindex{YType::uint32, "cpwVcMplsInboundTunnelIndex"},
    cpwvcmplsinboundtunnelinstance{YType::uint32, "cpwVcMplsInboundTunnelInstance"},
    cpwvcmplsinboundtunnellcllsr{YType::str, "cpwVcMplsInboundTunnelLclLSR"},
    cpwvcmplsinboundtunnelpeerlsr{YType::str, "cpwVcMplsInboundTunnelPeerLSR"}
{
    yang_name = "cpwVcMplsInboundEntry"; yang_parent_name = "cpwVcMplsInboundTable";
}

CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry::~Cpwvcmplsinboundentry()
{
}

bool CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcmplsinboundindex.is_set
	|| cpwvcmplsinboundifindex.is_set
	|| cpwvcmplsinboundlsrxcindex.is_set
	|| cpwvcmplsinboundrowstatus.is_set
	|| cpwvcmplsinboundstoragetype.is_set
	|| cpwvcmplsinboundtunnelindex.is_set
	|| cpwvcmplsinboundtunnelinstance.is_set
	|| cpwvcmplsinboundtunnellcllsr.is_set
	|| cpwvcmplsinboundtunnelpeerlsr.is_set;
}

bool CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwvcmplsinboundindex.operation)
	|| is_set(cpwvcmplsinboundifindex.operation)
	|| is_set(cpwvcmplsinboundlsrxcindex.operation)
	|| is_set(cpwvcmplsinboundrowstatus.operation)
	|| is_set(cpwvcmplsinboundstoragetype.operation)
	|| is_set(cpwvcmplsinboundtunnelindex.operation)
	|| is_set(cpwvcmplsinboundtunnelinstance.operation)
	|| is_set(cpwvcmplsinboundtunnellcllsr.operation)
	|| is_set(cpwvcmplsinboundtunnelpeerlsr.operation);
}

std::string CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsInboundEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']" <<"[cpwVcMplsInboundIndex='" <<cpwvcmplsinboundindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/cpwVcMplsInboundTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcmplsinboundindex.is_set || is_set(cpwvcmplsinboundindex.operation)) leaf_name_data.push_back(cpwvcmplsinboundindex.get_name_leafdata());
    if (cpwvcmplsinboundifindex.is_set || is_set(cpwvcmplsinboundifindex.operation)) leaf_name_data.push_back(cpwvcmplsinboundifindex.get_name_leafdata());
    if (cpwvcmplsinboundlsrxcindex.is_set || is_set(cpwvcmplsinboundlsrxcindex.operation)) leaf_name_data.push_back(cpwvcmplsinboundlsrxcindex.get_name_leafdata());
    if (cpwvcmplsinboundrowstatus.is_set || is_set(cpwvcmplsinboundrowstatus.operation)) leaf_name_data.push_back(cpwvcmplsinboundrowstatus.get_name_leafdata());
    if (cpwvcmplsinboundstoragetype.is_set || is_set(cpwvcmplsinboundstoragetype.operation)) leaf_name_data.push_back(cpwvcmplsinboundstoragetype.get_name_leafdata());
    if (cpwvcmplsinboundtunnelindex.is_set || is_set(cpwvcmplsinboundtunnelindex.operation)) leaf_name_data.push_back(cpwvcmplsinboundtunnelindex.get_name_leafdata());
    if (cpwvcmplsinboundtunnelinstance.is_set || is_set(cpwvcmplsinboundtunnelinstance.operation)) leaf_name_data.push_back(cpwvcmplsinboundtunnelinstance.get_name_leafdata());
    if (cpwvcmplsinboundtunnellcllsr.is_set || is_set(cpwvcmplsinboundtunnellcllsr.operation)) leaf_name_data.push_back(cpwvcmplsinboundtunnellcllsr.get_name_leafdata());
    if (cpwvcmplsinboundtunnelpeerlsr.is_set || is_set(cpwvcmplsinboundtunnelpeerlsr.operation)) leaf_name_data.push_back(cpwvcmplsinboundtunnelpeerlsr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwVcMplsInboundIndex")
    {
        cpwvcmplsinboundindex = value;
    }
    if(value_path == "cpwVcMplsInboundIfIndex")
    {
        cpwvcmplsinboundifindex = value;
    }
    if(value_path == "cpwVcMplsInboundLsrXcIndex")
    {
        cpwvcmplsinboundlsrxcindex = value;
    }
    if(value_path == "cpwVcMplsInboundRowStatus")
    {
        cpwvcmplsinboundrowstatus = value;
    }
    if(value_path == "cpwVcMplsInboundStorageType")
    {
        cpwvcmplsinboundstoragetype = value;
    }
    if(value_path == "cpwVcMplsInboundTunnelIndex")
    {
        cpwvcmplsinboundtunnelindex = value;
    }
    if(value_path == "cpwVcMplsInboundTunnelInstance")
    {
        cpwvcmplsinboundtunnelinstance = value;
    }
    if(value_path == "cpwVcMplsInboundTunnelLclLSR")
    {
        cpwvcmplsinboundtunnellcllsr = value;
    }
    if(value_path == "cpwVcMplsInboundTunnelPeerLSR")
    {
        cpwvcmplsinboundtunnelpeerlsr = value;
    }
}

CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingtable()
{
    yang_name = "cpwVcMplsNonTeMappingTable"; yang_parent_name = "CISCO-IETF-PW-MPLS-MIB";
}

CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::~Cpwvcmplsnontemappingtable()
{
}

bool CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::has_data() const
{
    for (std::size_t index=0; index<cpwvcmplsnontemappingentry_.size(); index++)
    {
        if(cpwvcmplsnontemappingentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcmplsnontemappingentry_.size(); index++)
    {
        if(cpwvcmplsnontemappingentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsNonTeMappingTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcMplsNonTeMappingEntry")
    {
        for(auto const & c : cpwvcmplsnontemappingentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry>();
        c->parent = this;
        cpwvcmplsnontemappingentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcmplsnontemappingentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry::Cpwvcmplsnontemappingentry()
    :
    cpwvcmplsnontemappingtunneldirection{YType::enumeration, "cpwVcMplsNonTeMappingTunnelDirection"},
    cpwvcmplsnontemappingxctunnelindex{YType::uint32, "cpwVcMplsNonTeMappingXcTunnelIndex"},
    cpwvcmplsnontemappingifindex{YType::int32, "cpwVcMplsNonTeMappingIfIndex"},
    cpwvcmplsnontemappingvcindex{YType::uint32, "cpwVcMplsNonTeMappingVcIndex"}
{
    yang_name = "cpwVcMplsNonTeMappingEntry"; yang_parent_name = "cpwVcMplsNonTeMappingTable";
}

CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry::~Cpwvcmplsnontemappingentry()
{
}

bool CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry::has_data() const
{
    return cpwvcmplsnontemappingtunneldirection.is_set
	|| cpwvcmplsnontemappingxctunnelindex.is_set
	|| cpwvcmplsnontemappingifindex.is_set
	|| cpwvcmplsnontemappingvcindex.is_set;
}

bool CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcmplsnontemappingtunneldirection.operation)
	|| is_set(cpwvcmplsnontemappingxctunnelindex.operation)
	|| is_set(cpwvcmplsnontemappingifindex.operation)
	|| is_set(cpwvcmplsnontemappingvcindex.operation);
}

std::string CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsNonTeMappingEntry" <<"[cpwVcMplsNonTeMappingTunnelDirection='" <<cpwvcmplsnontemappingtunneldirection <<"']" <<"[cpwVcMplsNonTeMappingXcTunnelIndex='" <<cpwvcmplsnontemappingxctunnelindex <<"']" <<"[cpwVcMplsNonTeMappingIfIndex='" <<cpwvcmplsnontemappingifindex <<"']" <<"[cpwVcMplsNonTeMappingVcIndex='" <<cpwvcmplsnontemappingvcindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/cpwVcMplsNonTeMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcmplsnontemappingtunneldirection.is_set || is_set(cpwvcmplsnontemappingtunneldirection.operation)) leaf_name_data.push_back(cpwvcmplsnontemappingtunneldirection.get_name_leafdata());
    if (cpwvcmplsnontemappingxctunnelindex.is_set || is_set(cpwvcmplsnontemappingxctunnelindex.operation)) leaf_name_data.push_back(cpwvcmplsnontemappingxctunnelindex.get_name_leafdata());
    if (cpwvcmplsnontemappingifindex.is_set || is_set(cpwvcmplsnontemappingifindex.operation)) leaf_name_data.push_back(cpwvcmplsnontemappingifindex.get_name_leafdata());
    if (cpwvcmplsnontemappingvcindex.is_set || is_set(cpwvcmplsnontemappingvcindex.operation)) leaf_name_data.push_back(cpwvcmplsnontemappingvcindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcMplsNonTeMappingTunnelDirection")
    {
        cpwvcmplsnontemappingtunneldirection = value;
    }
    if(value_path == "cpwVcMplsNonTeMappingXcTunnelIndex")
    {
        cpwvcmplsnontemappingxctunnelindex = value;
    }
    if(value_path == "cpwVcMplsNonTeMappingIfIndex")
    {
        cpwvcmplsnontemappingifindex = value;
    }
    if(value_path == "cpwVcMplsNonTeMappingVcIndex")
    {
        cpwvcmplsnontemappingvcindex = value;
    }
}

CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingtable()
{
    yang_name = "cpwVcMplsTeMappingTable"; yang_parent_name = "CISCO-IETF-PW-MPLS-MIB";
}

CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::~Cpwvcmplstemappingtable()
{
}

bool CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::has_data() const
{
    for (std::size_t index=0; index<cpwvcmplstemappingentry_.size(); index++)
    {
        if(cpwvcmplstemappingentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcmplstemappingentry_.size(); index++)
    {
        if(cpwvcmplstemappingentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsTeMappingTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcMplsTeMappingEntry")
    {
        for(auto const & c : cpwvcmplstemappingentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry>();
        c->parent = this;
        cpwvcmplstemappingentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcmplstemappingentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry::Cpwvcmplstemappingentry()
    :
    cpwvcmplstemappingtunneldirection{YType::enumeration, "cpwVcMplsTeMappingTunnelDirection"},
    cpwvcmplstemappingtunnelindex{YType::uint32, "cpwVcMplsTeMappingTunnelIndex"},
    cpwvcmplstemappingtunnelinstance{YType::uint32, "cpwVcMplsTeMappingTunnelInstance"},
    cpwvcmplstemappingtunnelpeerlsrid{YType::str, "cpwVcMplsTeMappingTunnelPeerLsrID"},
    cpwvcmplstemappingtunnellocallsrid{YType::str, "cpwVcMplsTeMappingTunnelLocalLsrID"},
    cpwvcmplstemappingvcindex{YType::uint32, "cpwVcMplsTeMappingVcIndex"}
{
    yang_name = "cpwVcMplsTeMappingEntry"; yang_parent_name = "cpwVcMplsTeMappingTable";
}

CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry::~Cpwvcmplstemappingentry()
{
}

bool CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry::has_data() const
{
    return cpwvcmplstemappingtunneldirection.is_set
	|| cpwvcmplstemappingtunnelindex.is_set
	|| cpwvcmplstemappingtunnelinstance.is_set
	|| cpwvcmplstemappingtunnelpeerlsrid.is_set
	|| cpwvcmplstemappingtunnellocallsrid.is_set
	|| cpwvcmplstemappingvcindex.is_set;
}

bool CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcmplstemappingtunneldirection.operation)
	|| is_set(cpwvcmplstemappingtunnelindex.operation)
	|| is_set(cpwvcmplstemappingtunnelinstance.operation)
	|| is_set(cpwvcmplstemappingtunnelpeerlsrid.operation)
	|| is_set(cpwvcmplstemappingtunnellocallsrid.operation)
	|| is_set(cpwvcmplstemappingvcindex.operation);
}

std::string CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsTeMappingEntry" <<"[cpwVcMplsTeMappingTunnelDirection='" <<cpwvcmplstemappingtunneldirection <<"']" <<"[cpwVcMplsTeMappingTunnelIndex='" <<cpwvcmplstemappingtunnelindex <<"']" <<"[cpwVcMplsTeMappingTunnelInstance='" <<cpwvcmplstemappingtunnelinstance <<"']" <<"[cpwVcMplsTeMappingTunnelPeerLsrID='" <<cpwvcmplstemappingtunnelpeerlsrid <<"']" <<"[cpwVcMplsTeMappingTunnelLocalLsrID='" <<cpwvcmplstemappingtunnellocallsrid <<"']" <<"[cpwVcMplsTeMappingVcIndex='" <<cpwvcmplstemappingvcindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/cpwVcMplsTeMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcmplstemappingtunneldirection.is_set || is_set(cpwvcmplstemappingtunneldirection.operation)) leaf_name_data.push_back(cpwvcmplstemappingtunneldirection.get_name_leafdata());
    if (cpwvcmplstemappingtunnelindex.is_set || is_set(cpwvcmplstemappingtunnelindex.operation)) leaf_name_data.push_back(cpwvcmplstemappingtunnelindex.get_name_leafdata());
    if (cpwvcmplstemappingtunnelinstance.is_set || is_set(cpwvcmplstemappingtunnelinstance.operation)) leaf_name_data.push_back(cpwvcmplstemappingtunnelinstance.get_name_leafdata());
    if (cpwvcmplstemappingtunnelpeerlsrid.is_set || is_set(cpwvcmplstemappingtunnelpeerlsrid.operation)) leaf_name_data.push_back(cpwvcmplstemappingtunnelpeerlsrid.get_name_leafdata());
    if (cpwvcmplstemappingtunnellocallsrid.is_set || is_set(cpwvcmplstemappingtunnellocallsrid.operation)) leaf_name_data.push_back(cpwvcmplstemappingtunnellocallsrid.get_name_leafdata());
    if (cpwvcmplstemappingvcindex.is_set || is_set(cpwvcmplstemappingvcindex.operation)) leaf_name_data.push_back(cpwvcmplstemappingvcindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcMplsTeMappingTunnelDirection")
    {
        cpwvcmplstemappingtunneldirection = value;
    }
    if(value_path == "cpwVcMplsTeMappingTunnelIndex")
    {
        cpwvcmplstemappingtunnelindex = value;
    }
    if(value_path == "cpwVcMplsTeMappingTunnelInstance")
    {
        cpwvcmplstemappingtunnelinstance = value;
    }
    if(value_path == "cpwVcMplsTeMappingTunnelPeerLsrID")
    {
        cpwvcmplstemappingtunnelpeerlsrid = value;
    }
    if(value_path == "cpwVcMplsTeMappingTunnelLocalLsrID")
    {
        cpwvcmplstemappingtunnellocallsrid = value;
    }
    if(value_path == "cpwVcMplsTeMappingVcIndex")
    {
        cpwvcmplstemappingvcindex = value;
    }
}

const Enum::YLeaf CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry::CpwvcmplsexpbitsmodeEnum::outerTunnel {1, "outerTunnel"};
const Enum::YLeaf CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry::CpwvcmplsexpbitsmodeEnum::specifiedValue {2, "specifiedValue"};
const Enum::YLeaf CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry::CpwvcmplsexpbitsmodeEnum::serviceDependant {3, "serviceDependant"};

const Enum::YLeaf CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry::CpwvcmplsnontemappingtunneldirectionEnum::outbound {1, "outbound"};
const Enum::YLeaf CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry::CpwvcmplsnontemappingtunneldirectionEnum::inbound {2, "inbound"};

const Enum::YLeaf CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry::CpwvcmplstemappingtunneldirectionEnum::outbound {1, "outbound"};
const Enum::YLeaf CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry::CpwvcmplstemappingtunneldirectionEnum::inbound {2, "inbound"};


}
}

