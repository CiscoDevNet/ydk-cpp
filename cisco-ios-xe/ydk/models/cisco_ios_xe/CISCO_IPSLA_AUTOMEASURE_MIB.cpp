
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSLA_AUTOMEASURE_MIB.hpp"

namespace ydk {
namespace CISCO_IPSLA_AUTOMEASURE_MIB {

CiscoIpslaAutomeasureMib::CiscoIpslaAutomeasureMib()
    :
    cipslaautogroupdesttable_(std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable>())
	,cipslaautogroupschedtable_(std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable>())
	,cipslaautogrouptable_(std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogrouptable>())
	,cipslareacttable_(std::make_shared<CiscoIpslaAutomeasureMib::Cipslareacttable>())
{
    cipslaautogroupdesttable_->parent = this;

    cipslaautogroupschedtable_->parent = this;

    cipslaautogrouptable_->parent = this;

    cipslareacttable_->parent = this;

    yang_name = "CISCO-IPSLA-AUTOMEASURE-MIB"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB";
}

CiscoIpslaAutomeasureMib::~CiscoIpslaAutomeasureMib()
{
}

bool CiscoIpslaAutomeasureMib::has_data() const
{
    return (cipslaautogroupdesttable_ !=  nullptr && cipslaautogroupdesttable_->has_data())
	|| (cipslaautogroupschedtable_ !=  nullptr && cipslaautogroupschedtable_->has_data())
	|| (cipslaautogrouptable_ !=  nullptr && cipslaautogrouptable_->has_data())
	|| (cipslareacttable_ !=  nullptr && cipslareacttable_->has_data());
}

bool CiscoIpslaAutomeasureMib::has_operation() const
{
    return is_set(operation)
	|| (cipslaautogroupdesttable_ !=  nullptr && cipslaautogroupdesttable_->has_operation())
	|| (cipslaautogroupschedtable_ !=  nullptr && cipslaautogroupschedtable_->has_operation())
	|| (cipslaautogrouptable_ !=  nullptr && cipslaautogrouptable_->has_operation())
	|| (cipslareacttable_ !=  nullptr && cipslareacttable_->has_operation());
}

std::string CiscoIpslaAutomeasureMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaAutoGroupDestTable")
    {
        if(cipslaautogroupdesttable_ == nullptr)
        {
            cipslaautogroupdesttable_ = std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable>();
        }
        return cipslaautogroupdesttable_;
    }

    if(child_yang_name == "cipslaAutoGroupSchedTable")
    {
        if(cipslaautogroupschedtable_ == nullptr)
        {
            cipslaautogroupschedtable_ = std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable>();
        }
        return cipslaautogroupschedtable_;
    }

    if(child_yang_name == "cipslaAutoGroupTable")
    {
        if(cipslaautogrouptable_ == nullptr)
        {
            cipslaautogrouptable_ = std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogrouptable>();
        }
        return cipslaautogrouptable_;
    }

    if(child_yang_name == "cipslaReactTable")
    {
        if(cipslareacttable_ == nullptr)
        {
            cipslareacttable_ = std::make_shared<CiscoIpslaAutomeasureMib::Cipslareacttable>();
        }
        return cipslareacttable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cipslaautogroupdesttable_ != nullptr)
    {
        children["cipslaAutoGroupDestTable"] = cipslaautogroupdesttable_;
    }

    if(cipslaautogroupschedtable_ != nullptr)
    {
        children["cipslaAutoGroupSchedTable"] = cipslaautogroupschedtable_;
    }

    if(cipslaautogrouptable_ != nullptr)
    {
        children["cipslaAutoGroupTable"] = cipslaautogrouptable_;
    }

    if(cipslareacttable_ != nullptr)
    {
        children["cipslaReactTable"] = cipslareacttable_;
    }

    return children;
}

void CiscoIpslaAutomeasureMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::clone_ptr() const
{
    return std::make_shared<CiscoIpslaAutomeasureMib>();
}

std::string CiscoIpslaAutomeasureMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIpslaAutomeasureMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIpslaAutomeasureMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogrouptable()
{
    yang_name = "cipslaAutoGroupTable"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB";
}

CiscoIpslaAutomeasureMib::Cipslaautogrouptable::~Cipslaautogrouptable()
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogrouptable::has_data() const
{
    for (std::size_t index=0; index<cipslaautogroupentry_.size(); index++)
    {
        if(cipslaautogroupentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaAutomeasureMib::Cipslaautogrouptable::has_operation() const
{
    for (std::size_t index=0; index<cipslaautogroupentry_.size(); index++)
    {
        if(cipslaautogroupentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpslaAutomeasureMib::Cipslaautogrouptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslaautogrouptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslaautogrouptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaAutoGroupEntry")
    {
        for(auto const & c : cipslaautogroupentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry>();
        c->parent = this;
        cipslaautogroupentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslaautogrouptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslaautogroupentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaAutomeasureMib::Cipslaautogrouptable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::Cipslaautogroupentry()
    :
    cipslaautogroupname{YType::str, "cipslaAutoGroupName"},
    cipslaautogroupaddestipageout{YType::uint32, "cipslaAutoGroupADDestIPAgeout"},
    cipslaautogroupaddestport{YType::uint16, "cipslaAutoGroupADDestPort"},
    cipslaautogroupadmeasureretry{YType::uint32, "cipslaAutoGroupADMeasureRetry"},
    cipslaautogroupdescription{YType::str, "cipslaAutoGroupDescription"},
    cipslaautogroupdestinationname{YType::str, "cipslaAutoGroupDestinationName"},
    cipslaautogroupdestipadenable{YType::boolean, "cipslaAutoGroupDestIPADEnable"},
    cipslaautogroupopertemplatename{YType::str, "cipslaAutoGroupOperTemplateName"},
    cipslaautogroupopertype{YType::enumeration, "cipslaAutoGroupOperType"},
    cipslaautogroupqosenable{YType::boolean, "cipslaAutoGroupQoSEnable"},
    cipslaautogrouprowstatus{YType::enumeration, "cipslaAutoGroupRowStatus"},
    cipslaautogroupschedulerid{YType::str, "cipslaAutoGroupSchedulerId"},
    cipslaautogroupstoragetype{YType::enumeration, "cipslaAutoGroupStorageType"}
{
    yang_name = "cipslaAutoGroupEntry"; yang_parent_name = "cipslaAutoGroupTable";
}

CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::~Cipslaautogroupentry()
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::has_data() const
{
    return cipslaautogroupname.is_set
	|| cipslaautogroupaddestipageout.is_set
	|| cipslaautogroupaddestport.is_set
	|| cipslaautogroupadmeasureretry.is_set
	|| cipslaautogroupdescription.is_set
	|| cipslaautogroupdestinationname.is_set
	|| cipslaautogroupdestipadenable.is_set
	|| cipslaautogroupopertemplatename.is_set
	|| cipslaautogroupopertype.is_set
	|| cipslaautogroupqosenable.is_set
	|| cipslaautogrouprowstatus.is_set
	|| cipslaautogroupschedulerid.is_set
	|| cipslaautogroupstoragetype.is_set;
}

bool CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipslaautogroupname.operation)
	|| is_set(cipslaautogroupaddestipageout.operation)
	|| is_set(cipslaautogroupaddestport.operation)
	|| is_set(cipslaautogroupadmeasureretry.operation)
	|| is_set(cipslaautogroupdescription.operation)
	|| is_set(cipslaautogroupdestinationname.operation)
	|| is_set(cipslaautogroupdestipadenable.operation)
	|| is_set(cipslaautogroupopertemplatename.operation)
	|| is_set(cipslaautogroupopertype.operation)
	|| is_set(cipslaautogroupqosenable.operation)
	|| is_set(cipslaautogrouprowstatus.operation)
	|| is_set(cipslaautogroupschedulerid.operation)
	|| is_set(cipslaautogroupstoragetype.operation);
}

std::string CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupEntry" <<"[cipslaAutoGroupName='" <<cipslaautogroupname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/cipslaAutoGroupTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaautogroupname.is_set || is_set(cipslaautogroupname.operation)) leaf_name_data.push_back(cipslaautogroupname.get_name_leafdata());
    if (cipslaautogroupaddestipageout.is_set || is_set(cipslaautogroupaddestipageout.operation)) leaf_name_data.push_back(cipslaautogroupaddestipageout.get_name_leafdata());
    if (cipslaautogroupaddestport.is_set || is_set(cipslaautogroupaddestport.operation)) leaf_name_data.push_back(cipslaautogroupaddestport.get_name_leafdata());
    if (cipslaautogroupadmeasureretry.is_set || is_set(cipslaautogroupadmeasureretry.operation)) leaf_name_data.push_back(cipslaautogroupadmeasureretry.get_name_leafdata());
    if (cipslaautogroupdescription.is_set || is_set(cipslaautogroupdescription.operation)) leaf_name_data.push_back(cipslaautogroupdescription.get_name_leafdata());
    if (cipslaautogroupdestinationname.is_set || is_set(cipslaautogroupdestinationname.operation)) leaf_name_data.push_back(cipslaautogroupdestinationname.get_name_leafdata());
    if (cipslaautogroupdestipadenable.is_set || is_set(cipslaautogroupdestipadenable.operation)) leaf_name_data.push_back(cipslaautogroupdestipadenable.get_name_leafdata());
    if (cipslaautogroupopertemplatename.is_set || is_set(cipslaautogroupopertemplatename.operation)) leaf_name_data.push_back(cipslaautogroupopertemplatename.get_name_leafdata());
    if (cipslaautogroupopertype.is_set || is_set(cipslaautogroupopertype.operation)) leaf_name_data.push_back(cipslaautogroupopertype.get_name_leafdata());
    if (cipslaautogroupqosenable.is_set || is_set(cipslaautogroupqosenable.operation)) leaf_name_data.push_back(cipslaautogroupqosenable.get_name_leafdata());
    if (cipslaautogrouprowstatus.is_set || is_set(cipslaautogrouprowstatus.operation)) leaf_name_data.push_back(cipslaautogrouprowstatus.get_name_leafdata());
    if (cipslaautogroupschedulerid.is_set || is_set(cipslaautogroupschedulerid.operation)) leaf_name_data.push_back(cipslaautogroupschedulerid.get_name_leafdata());
    if (cipslaautogroupstoragetype.is_set || is_set(cipslaautogroupstoragetype.operation)) leaf_name_data.push_back(cipslaautogroupstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipslaAutoGroupName")
    {
        cipslaautogroupname = value;
    }
    if(value_path == "cipslaAutoGroupADDestIPAgeout")
    {
        cipslaautogroupaddestipageout = value;
    }
    if(value_path == "cipslaAutoGroupADDestPort")
    {
        cipslaautogroupaddestport = value;
    }
    if(value_path == "cipslaAutoGroupADMeasureRetry")
    {
        cipslaautogroupadmeasureretry = value;
    }
    if(value_path == "cipslaAutoGroupDescription")
    {
        cipslaautogroupdescription = value;
    }
    if(value_path == "cipslaAutoGroupDestinationName")
    {
        cipslaautogroupdestinationname = value;
    }
    if(value_path == "cipslaAutoGroupDestIPADEnable")
    {
        cipslaautogroupdestipadenable = value;
    }
    if(value_path == "cipslaAutoGroupOperTemplateName")
    {
        cipslaautogroupopertemplatename = value;
    }
    if(value_path == "cipslaAutoGroupOperType")
    {
        cipslaautogroupopertype = value;
    }
    if(value_path == "cipslaAutoGroupQoSEnable")
    {
        cipslaautogroupqosenable = value;
    }
    if(value_path == "cipslaAutoGroupRowStatus")
    {
        cipslaautogrouprowstatus = value;
    }
    if(value_path == "cipslaAutoGroupSchedulerId")
    {
        cipslaautogroupschedulerid = value;
    }
    if(value_path == "cipslaAutoGroupStorageType")
    {
        cipslaautogroupstoragetype = value;
    }
}

CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdesttable()
{
    yang_name = "cipslaAutoGroupDestTable"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB";
}

CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::~Cipslaautogroupdesttable()
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::has_data() const
{
    for (std::size_t index=0; index<cipslaautogroupdestentry_.size(); index++)
    {
        if(cipslaautogroupdestentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::has_operation() const
{
    for (std::size_t index=0; index<cipslaautogroupdestentry_.size(); index++)
    {
        if(cipslaautogroupdestentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupDestTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaAutoGroupDestEntry")
    {
        for(auto const & c : cipslaautogroupdestentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry>();
        c->parent = this;
        cipslaautogroupdestentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslaautogroupdestentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::Cipslaautogroupdestentry()
    :
    cipslaautogroupdestname{YType::str, "cipslaAutoGroupDestName"},
    cipslaautogroupdestipaddrtype{YType::enumeration, "cipslaAutoGroupDestIpAddrType"},
    cipslaautogroupdestipaddr{YType::str, "cipslaAutoGroupDestIpAddr"},
    cipslaautogroupdestport{YType::uint16, "cipslaAutoGroupDestPort"},
    cipslaautogroupdestrowstatus{YType::enumeration, "cipslaAutoGroupDestRowStatus"},
    cipslaautogroupdeststoragetype{YType::enumeration, "cipslaAutoGroupDestStorageType"}
{
    yang_name = "cipslaAutoGroupDestEntry"; yang_parent_name = "cipslaAutoGroupDestTable";
}

CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::~Cipslaautogroupdestentry()
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::has_data() const
{
    return cipslaautogroupdestname.is_set
	|| cipslaautogroupdestipaddrtype.is_set
	|| cipslaautogroupdestipaddr.is_set
	|| cipslaautogroupdestport.is_set
	|| cipslaautogroupdestrowstatus.is_set
	|| cipslaautogroupdeststoragetype.is_set;
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipslaautogroupdestname.operation)
	|| is_set(cipslaautogroupdestipaddrtype.operation)
	|| is_set(cipslaautogroupdestipaddr.operation)
	|| is_set(cipslaautogroupdestport.operation)
	|| is_set(cipslaautogroupdestrowstatus.operation)
	|| is_set(cipslaautogroupdeststoragetype.operation);
}

std::string CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupDestEntry" <<"[cipslaAutoGroupDestName='" <<cipslaautogroupdestname <<"']" <<"[cipslaAutoGroupDestIpAddrType='" <<cipslaautogroupdestipaddrtype <<"']" <<"[cipslaAutoGroupDestIpAddr='" <<cipslaautogroupdestipaddr <<"']" <<"[cipslaAutoGroupDestPort='" <<cipslaautogroupdestport <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/cipslaAutoGroupDestTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaautogroupdestname.is_set || is_set(cipslaautogroupdestname.operation)) leaf_name_data.push_back(cipslaautogroupdestname.get_name_leafdata());
    if (cipslaautogroupdestipaddrtype.is_set || is_set(cipslaautogroupdestipaddrtype.operation)) leaf_name_data.push_back(cipslaautogroupdestipaddrtype.get_name_leafdata());
    if (cipslaautogroupdestipaddr.is_set || is_set(cipslaautogroupdestipaddr.operation)) leaf_name_data.push_back(cipslaautogroupdestipaddr.get_name_leafdata());
    if (cipslaautogroupdestport.is_set || is_set(cipslaautogroupdestport.operation)) leaf_name_data.push_back(cipslaautogroupdestport.get_name_leafdata());
    if (cipslaautogroupdestrowstatus.is_set || is_set(cipslaautogroupdestrowstatus.operation)) leaf_name_data.push_back(cipslaautogroupdestrowstatus.get_name_leafdata());
    if (cipslaautogroupdeststoragetype.is_set || is_set(cipslaautogroupdeststoragetype.operation)) leaf_name_data.push_back(cipslaautogroupdeststoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipslaAutoGroupDestName")
    {
        cipslaautogroupdestname = value;
    }
    if(value_path == "cipslaAutoGroupDestIpAddrType")
    {
        cipslaautogroupdestipaddrtype = value;
    }
    if(value_path == "cipslaAutoGroupDestIpAddr")
    {
        cipslaautogroupdestipaddr = value;
    }
    if(value_path == "cipslaAutoGroupDestPort")
    {
        cipslaautogroupdestport = value;
    }
    if(value_path == "cipslaAutoGroupDestRowStatus")
    {
        cipslaautogroupdestrowstatus = value;
    }
    if(value_path == "cipslaAutoGroupDestStorageType")
    {
        cipslaautogroupdeststoragetype = value;
    }
}

CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareacttable()
{
    yang_name = "cipslaReactTable"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB";
}

CiscoIpslaAutomeasureMib::Cipslareacttable::~Cipslareacttable()
{
}

bool CiscoIpslaAutomeasureMib::Cipslareacttable::has_data() const
{
    for (std::size_t index=0; index<cipslareactentry_.size(); index++)
    {
        if(cipslareactentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaAutomeasureMib::Cipslareacttable::has_operation() const
{
    for (std::size_t index=0; index<cipslareactentry_.size(); index++)
    {
        if(cipslareactentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpslaAutomeasureMib::Cipslareacttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaReactTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslareacttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslareacttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaReactEntry")
    {
        for(auto const & c : cipslareactentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry>();
        c->parent = this;
        cipslareactentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslareacttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslareactentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaAutomeasureMib::Cipslareacttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::Cipslareactentry()
    :
    cipslaautogroupopertype{YType::enumeration, "cipslaAutoGroupOperType"},
    cipslareactconfigindex{YType::uint32, "cipslaReactConfigIndex"},
    cipslaautogroupopertemplatename{YType::str, "cipslaAutoGroupOperTemplateName"},
    cipslareactactiontype{YType::enumeration, "cipslaReactActionType"},
    cipslareactrowstatus{YType::enumeration, "cipslaReactRowStatus"},
    cipslareactstoragetype{YType::enumeration, "cipslaReactStorageType"},
    cipslareactthresholdcountx{YType::uint32, "cipslaReactThresholdCountX"},
    cipslareactthresholdcounty{YType::uint32, "cipslaReactThresholdCountY"},
    cipslareactthresholdfalling{YType::uint32, "cipslaReactThresholdFalling"},
    cipslareactthresholdrising{YType::uint32, "cipslaReactThresholdRising"},
    cipslareactthresholdtype{YType::enumeration, "cipslaReactThresholdType"},
    cipslareactvar{YType::enumeration, "cipslaReactVar"}
{
    yang_name = "cipslaReactEntry"; yang_parent_name = "cipslaReactTable";
}

CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::~Cipslareactentry()
{
}

bool CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::has_data() const
{
    return cipslaautogroupopertype.is_set
	|| cipslareactconfigindex.is_set
	|| cipslaautogroupopertemplatename.is_set
	|| cipslareactactiontype.is_set
	|| cipslareactrowstatus.is_set
	|| cipslareactstoragetype.is_set
	|| cipslareactthresholdcountx.is_set
	|| cipslareactthresholdcounty.is_set
	|| cipslareactthresholdfalling.is_set
	|| cipslareactthresholdrising.is_set
	|| cipslareactthresholdtype.is_set
	|| cipslareactvar.is_set;
}

bool CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipslaautogroupopertype.operation)
	|| is_set(cipslareactconfigindex.operation)
	|| is_set(cipslaautogroupopertemplatename.operation)
	|| is_set(cipslareactactiontype.operation)
	|| is_set(cipslareactrowstatus.operation)
	|| is_set(cipslareactstoragetype.operation)
	|| is_set(cipslareactthresholdcountx.operation)
	|| is_set(cipslareactthresholdcounty.operation)
	|| is_set(cipslareactthresholdfalling.operation)
	|| is_set(cipslareactthresholdrising.operation)
	|| is_set(cipslareactthresholdtype.operation)
	|| is_set(cipslareactvar.operation);
}

std::string CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaReactEntry" <<"[cipslaAutoGroupOperType='" <<cipslaautogroupopertype <<"']" <<"[cipslaReactConfigIndex='" <<cipslareactconfigindex <<"']" <<"[cipslaAutoGroupOperTemplateName='" <<cipslaautogroupopertemplatename <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/cipslaReactTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaautogroupopertype.is_set || is_set(cipslaautogroupopertype.operation)) leaf_name_data.push_back(cipslaautogroupopertype.get_name_leafdata());
    if (cipslareactconfigindex.is_set || is_set(cipslareactconfigindex.operation)) leaf_name_data.push_back(cipslareactconfigindex.get_name_leafdata());
    if (cipslaautogroupopertemplatename.is_set || is_set(cipslaautogroupopertemplatename.operation)) leaf_name_data.push_back(cipslaautogroupopertemplatename.get_name_leafdata());
    if (cipslareactactiontype.is_set || is_set(cipslareactactiontype.operation)) leaf_name_data.push_back(cipslareactactiontype.get_name_leafdata());
    if (cipslareactrowstatus.is_set || is_set(cipslareactrowstatus.operation)) leaf_name_data.push_back(cipslareactrowstatus.get_name_leafdata());
    if (cipslareactstoragetype.is_set || is_set(cipslareactstoragetype.operation)) leaf_name_data.push_back(cipslareactstoragetype.get_name_leafdata());
    if (cipslareactthresholdcountx.is_set || is_set(cipslareactthresholdcountx.operation)) leaf_name_data.push_back(cipslareactthresholdcountx.get_name_leafdata());
    if (cipslareactthresholdcounty.is_set || is_set(cipslareactthresholdcounty.operation)) leaf_name_data.push_back(cipslareactthresholdcounty.get_name_leafdata());
    if (cipslareactthresholdfalling.is_set || is_set(cipslareactthresholdfalling.operation)) leaf_name_data.push_back(cipslareactthresholdfalling.get_name_leafdata());
    if (cipslareactthresholdrising.is_set || is_set(cipslareactthresholdrising.operation)) leaf_name_data.push_back(cipslareactthresholdrising.get_name_leafdata());
    if (cipslareactthresholdtype.is_set || is_set(cipslareactthresholdtype.operation)) leaf_name_data.push_back(cipslareactthresholdtype.get_name_leafdata());
    if (cipslareactvar.is_set || is_set(cipslareactvar.operation)) leaf_name_data.push_back(cipslareactvar.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipslaAutoGroupOperType")
    {
        cipslaautogroupopertype = value;
    }
    if(value_path == "cipslaReactConfigIndex")
    {
        cipslareactconfigindex = value;
    }
    if(value_path == "cipslaAutoGroupOperTemplateName")
    {
        cipslaautogroupopertemplatename = value;
    }
    if(value_path == "cipslaReactActionType")
    {
        cipslareactactiontype = value;
    }
    if(value_path == "cipslaReactRowStatus")
    {
        cipslareactrowstatus = value;
    }
    if(value_path == "cipslaReactStorageType")
    {
        cipslareactstoragetype = value;
    }
    if(value_path == "cipslaReactThresholdCountX")
    {
        cipslareactthresholdcountx = value;
    }
    if(value_path == "cipslaReactThresholdCountY")
    {
        cipslareactthresholdcounty = value;
    }
    if(value_path == "cipslaReactThresholdFalling")
    {
        cipslareactthresholdfalling = value;
    }
    if(value_path == "cipslaReactThresholdRising")
    {
        cipslareactthresholdrising = value;
    }
    if(value_path == "cipslaReactThresholdType")
    {
        cipslareactthresholdtype = value;
    }
    if(value_path == "cipslaReactVar")
    {
        cipslareactvar = value;
    }
}

CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedtable()
{
    yang_name = "cipslaAutoGroupSchedTable"; yang_parent_name = "CISCO-IPSLA-AUTOMEASURE-MIB";
}

CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::~Cipslaautogroupschedtable()
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::has_data() const
{
    for (std::size_t index=0; index<cipslaautogroupschedentry_.size(); index++)
    {
        if(cipslaautogroupschedentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::has_operation() const
{
    for (std::size_t index=0; index<cipslaautogroupschedentry_.size(); index++)
    {
        if(cipslaautogroupschedentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupSchedTable";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipslaAutoGroupSchedEntry")
    {
        for(auto const & c : cipslaautogroupschedentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry>();
        c->parent = this;
        cipslaautogroupschedentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipslaautogroupschedentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::Cipslaautogroupschedentry()
    :
    cipslaautogroupschedid{YType::str, "cipslaAutoGroupSchedId"},
    cipslaautogroupschedageout{YType::uint32, "cipslaAutoGroupSchedAgeout"},
    cipslaautogroupschedinterval{YType::uint32, "cipslaAutoGroupSchedInterval"},
    cipslaautogroupschedlife{YType::uint32, "cipslaAutoGroupSchedLife"},
    cipslaautogroupschedmaxinterval{YType::uint32, "cipslaAutoGroupSchedMaxInterval"},
    cipslaautogroupschedmininterval{YType::uint32, "cipslaAutoGroupSchedMinInterval"},
    cipslaautogroupschedperiod{YType::uint32, "cipslaAutoGroupSchedPeriod"},
    cipslaautogroupschedrowstatus{YType::enumeration, "cipslaAutoGroupSchedRowStatus"},
    cipslaautogroupschedstarttime{YType::uint32, "cipslaAutoGroupSchedStartTime"},
    cipslaautogroupschedstoragetype{YType::enumeration, "cipslaAutoGroupSchedStorageType"}
{
    yang_name = "cipslaAutoGroupSchedEntry"; yang_parent_name = "cipslaAutoGroupSchedTable";
}

CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::~Cipslaautogroupschedentry()
{
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::has_data() const
{
    return cipslaautogroupschedid.is_set
	|| cipslaautogroupschedageout.is_set
	|| cipslaautogroupschedinterval.is_set
	|| cipslaautogroupschedlife.is_set
	|| cipslaautogroupschedmaxinterval.is_set
	|| cipslaautogroupschedmininterval.is_set
	|| cipslaautogroupschedperiod.is_set
	|| cipslaautogroupschedrowstatus.is_set
	|| cipslaautogroupschedstarttime.is_set
	|| cipslaautogroupschedstoragetype.is_set;
}

bool CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cipslaautogroupschedid.operation)
	|| is_set(cipslaautogroupschedageout.operation)
	|| is_set(cipslaautogroupschedinterval.operation)
	|| is_set(cipslaautogroupschedlife.operation)
	|| is_set(cipslaautogroupschedmaxinterval.operation)
	|| is_set(cipslaautogroupschedmininterval.operation)
	|| is_set(cipslaautogroupschedperiod.operation)
	|| is_set(cipslaautogroupschedrowstatus.operation)
	|| is_set(cipslaautogroupschedstarttime.operation)
	|| is_set(cipslaautogroupschedstoragetype.operation);
}

std::string CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipslaAutoGroupSchedEntry" <<"[cipslaAutoGroupSchedId='" <<cipslaautogroupschedid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSLA-AUTOMEASURE-MIB:CISCO-IPSLA-AUTOMEASURE-MIB/cipslaAutoGroupSchedTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipslaautogroupschedid.is_set || is_set(cipslaautogroupschedid.operation)) leaf_name_data.push_back(cipslaautogroupschedid.get_name_leafdata());
    if (cipslaautogroupschedageout.is_set || is_set(cipslaautogroupschedageout.operation)) leaf_name_data.push_back(cipslaautogroupschedageout.get_name_leafdata());
    if (cipslaautogroupschedinterval.is_set || is_set(cipslaautogroupschedinterval.operation)) leaf_name_data.push_back(cipslaautogroupschedinterval.get_name_leafdata());
    if (cipslaautogroupschedlife.is_set || is_set(cipslaautogroupschedlife.operation)) leaf_name_data.push_back(cipslaautogroupschedlife.get_name_leafdata());
    if (cipslaautogroupschedmaxinterval.is_set || is_set(cipslaautogroupschedmaxinterval.operation)) leaf_name_data.push_back(cipslaautogroupschedmaxinterval.get_name_leafdata());
    if (cipslaautogroupschedmininterval.is_set || is_set(cipslaautogroupschedmininterval.operation)) leaf_name_data.push_back(cipslaautogroupschedmininterval.get_name_leafdata());
    if (cipslaautogroupschedperiod.is_set || is_set(cipslaautogroupschedperiod.operation)) leaf_name_data.push_back(cipslaautogroupschedperiod.get_name_leafdata());
    if (cipslaautogroupschedrowstatus.is_set || is_set(cipslaautogroupschedrowstatus.operation)) leaf_name_data.push_back(cipslaautogroupschedrowstatus.get_name_leafdata());
    if (cipslaautogroupschedstarttime.is_set || is_set(cipslaautogroupschedstarttime.operation)) leaf_name_data.push_back(cipslaautogroupschedstarttime.get_name_leafdata());
    if (cipslaautogroupschedstoragetype.is_set || is_set(cipslaautogroupschedstoragetype.operation)) leaf_name_data.push_back(cipslaautogroupschedstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipslaAutoGroupSchedId")
    {
        cipslaautogroupschedid = value;
    }
    if(value_path == "cipslaAutoGroupSchedAgeout")
    {
        cipslaautogroupschedageout = value;
    }
    if(value_path == "cipslaAutoGroupSchedInterval")
    {
        cipslaautogroupschedinterval = value;
    }
    if(value_path == "cipslaAutoGroupSchedLife")
    {
        cipslaautogroupschedlife = value;
    }
    if(value_path == "cipslaAutoGroupSchedMaxInterval")
    {
        cipslaautogroupschedmaxinterval = value;
    }
    if(value_path == "cipslaAutoGroupSchedMinInterval")
    {
        cipslaautogroupschedmininterval = value;
    }
    if(value_path == "cipslaAutoGroupSchedPeriod")
    {
        cipslaautogroupschedperiod = value;
    }
    if(value_path == "cipslaAutoGroupSchedRowStatus")
    {
        cipslaautogroupschedrowstatus = value;
    }
    if(value_path == "cipslaAutoGroupSchedStartTime")
    {
        cipslaautogroupschedstarttime = value;
    }
    if(value_path == "cipslaAutoGroupSchedStorageType")
    {
        cipslaautogroupschedstoragetype = value;
    }
}

const Enum::YLeaf CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::CipslareactthresholdtypeEnum::never {1, "never"};
const Enum::YLeaf CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::CipslareactthresholdtypeEnum::immediate {2, "immediate"};
const Enum::YLeaf CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::CipslareactthresholdtypeEnum::consecutive {3, "consecutive"};
const Enum::YLeaf CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::CipslareactthresholdtypeEnum::xOfy {4, "xOfy"};
const Enum::YLeaf CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::CipslareactthresholdtypeEnum::average {5, "average"};

const Enum::YLeaf CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::CipslareactactiontypeEnum::none {1, "none"};
const Enum::YLeaf CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::CipslareactactiontypeEnum::notificationOnly {2, "notificationOnly"};


}
}

