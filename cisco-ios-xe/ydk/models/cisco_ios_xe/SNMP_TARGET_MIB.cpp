
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMP_TARGET_MIB.hpp"

namespace ydk {
namespace SNMP_TARGET_MIB {

SnmpTargetMib::SnmpTargetMib()
    :
    snmptargetaddrtable_(std::make_shared<SnmpTargetMib::Snmptargetaddrtable>())
	,snmptargetobjects_(std::make_shared<SnmpTargetMib::Snmptargetobjects>())
	,snmptargetparamstable_(std::make_shared<SnmpTargetMib::Snmptargetparamstable>())
{
    snmptargetaddrtable_->parent = this;

    snmptargetobjects_->parent = this;

    snmptargetparamstable_->parent = this;

    yang_name = "SNMP-TARGET-MIB"; yang_parent_name = "SNMP-TARGET-MIB";
}

SnmpTargetMib::~SnmpTargetMib()
{
}

bool SnmpTargetMib::has_data() const
{
    return (snmptargetaddrtable_ !=  nullptr && snmptargetaddrtable_->has_data())
	|| (snmptargetobjects_ !=  nullptr && snmptargetobjects_->has_data())
	|| (snmptargetparamstable_ !=  nullptr && snmptargetparamstable_->has_data());
}

bool SnmpTargetMib::has_operation() const
{
    return is_set(operation)
	|| (snmptargetaddrtable_ !=  nullptr && snmptargetaddrtable_->has_operation())
	|| (snmptargetobjects_ !=  nullptr && snmptargetobjects_->has_operation())
	|| (snmptargetparamstable_ !=  nullptr && snmptargetparamstable_->has_operation());
}

std::string SnmpTargetMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB";

    return path_buffer.str();

}

const EntityPath SnmpTargetMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> SnmpTargetMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpTargetAddrTable")
    {
        if(snmptargetaddrtable_ == nullptr)
        {
            snmptargetaddrtable_ = std::make_shared<SnmpTargetMib::Snmptargetaddrtable>();
        }
        return snmptargetaddrtable_;
    }

    if(child_yang_name == "snmpTargetObjects")
    {
        if(snmptargetobjects_ == nullptr)
        {
            snmptargetobjects_ = std::make_shared<SnmpTargetMib::Snmptargetobjects>();
        }
        return snmptargetobjects_;
    }

    if(child_yang_name == "snmpTargetParamsTable")
    {
        if(snmptargetparamstable_ == nullptr)
        {
            snmptargetparamstable_ = std::make_shared<SnmpTargetMib::Snmptargetparamstable>();
        }
        return snmptargetparamstable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpTargetMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snmptargetaddrtable_ != nullptr)
    {
        children["snmpTargetAddrTable"] = snmptargetaddrtable_;
    }

    if(snmptargetobjects_ != nullptr)
    {
        children["snmpTargetObjects"] = snmptargetobjects_;
    }

    if(snmptargetparamstable_ != nullptr)
    {
        children["snmpTargetParamsTable"] = snmptargetparamstable_;
    }

    return children;
}

void SnmpTargetMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SnmpTargetMib::clone_ptr() const
{
    return std::make_shared<SnmpTargetMib>();
}

std::string SnmpTargetMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string SnmpTargetMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function SnmpTargetMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

SnmpTargetMib::Snmptargetobjects::Snmptargetobjects()
    :
    snmptargetspinlock{YType::int32, "snmpTargetSpinLock"},
    snmpunavailablecontexts{YType::uint32, "snmpUnavailableContexts"},
    snmpunknowncontexts{YType::uint32, "snmpUnknownContexts"}
{
    yang_name = "snmpTargetObjects"; yang_parent_name = "SNMP-TARGET-MIB";
}

SnmpTargetMib::Snmptargetobjects::~Snmptargetobjects()
{
}

bool SnmpTargetMib::Snmptargetobjects::has_data() const
{
    return snmptargetspinlock.is_set
	|| snmpunavailablecontexts.is_set
	|| snmpunknowncontexts.is_set;
}

bool SnmpTargetMib::Snmptargetobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(snmptargetspinlock.operation)
	|| is_set(snmpunavailablecontexts.operation)
	|| is_set(snmpunknowncontexts.operation);
}

std::string SnmpTargetMib::Snmptargetobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetObjects";

    return path_buffer.str();

}

const EntityPath SnmpTargetMib::Snmptargetobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmptargetspinlock.is_set || is_set(snmptargetspinlock.operation)) leaf_name_data.push_back(snmptargetspinlock.get_name_leafdata());
    if (snmpunavailablecontexts.is_set || is_set(snmpunavailablecontexts.operation)) leaf_name_data.push_back(snmpunavailablecontexts.get_name_leafdata());
    if (snmpunknowncontexts.is_set || is_set(snmpunknowncontexts.operation)) leaf_name_data.push_back(snmpunknowncontexts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SnmpTargetMib::Snmptargetobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpTargetMib::Snmptargetobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SnmpTargetMib::Snmptargetobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snmpTargetSpinLock")
    {
        snmptargetspinlock = value;
    }
    if(value_path == "snmpUnavailableContexts")
    {
        snmpunavailablecontexts = value;
    }
    if(value_path == "snmpUnknownContexts")
    {
        snmpunknowncontexts = value;
    }
}

SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrtable()
{
    yang_name = "snmpTargetAddrTable"; yang_parent_name = "SNMP-TARGET-MIB";
}

SnmpTargetMib::Snmptargetaddrtable::~Snmptargetaddrtable()
{
}

bool SnmpTargetMib::Snmptargetaddrtable::has_data() const
{
    for (std::size_t index=0; index<snmptargetaddrentry_.size(); index++)
    {
        if(snmptargetaddrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool SnmpTargetMib::Snmptargetaddrtable::has_operation() const
{
    for (std::size_t index=0; index<snmptargetaddrentry_.size(); index++)
    {
        if(snmptargetaddrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SnmpTargetMib::Snmptargetaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetAddrTable";

    return path_buffer.str();

}

const EntityPath SnmpTargetMib::Snmptargetaddrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SnmpTargetMib::Snmptargetaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpTargetAddrEntry")
    {
        for(auto const & c : snmptargetaddrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry>();
        c->parent = this;
        snmptargetaddrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpTargetMib::Snmptargetaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : snmptargetaddrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SnmpTargetMib::Snmptargetaddrtable::set_value(const std::string & value_path, std::string value)
{
}

SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry::Snmptargetaddrentry()
    :
    snmptargetaddrname{YType::str, "snmpTargetAddrName"},
    snmptargetaddrparams{YType::str, "snmpTargetAddrParams"},
    snmptargetaddrretrycount{YType::int32, "snmpTargetAddrRetryCount"},
    snmptargetaddrrowstatus{YType::enumeration, "snmpTargetAddrRowStatus"},
    snmptargetaddrstoragetype{YType::enumeration, "snmpTargetAddrStorageType"},
    snmptargetaddrtaddress{YType::str, "snmpTargetAddrTAddress"},
    snmptargetaddrtaglist{YType::str, "snmpTargetAddrTagList"},
    snmptargetaddrtdomain{YType::str, "snmpTargetAddrTDomain"},
    snmptargetaddrtimeout{YType::int32, "snmpTargetAddrTimeout"}
{
    yang_name = "snmpTargetAddrEntry"; yang_parent_name = "snmpTargetAddrTable";
}

SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry::~Snmptargetaddrentry()
{
}

bool SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry::has_data() const
{
    return snmptargetaddrname.is_set
	|| snmptargetaddrparams.is_set
	|| snmptargetaddrretrycount.is_set
	|| snmptargetaddrrowstatus.is_set
	|| snmptargetaddrstoragetype.is_set
	|| snmptargetaddrtaddress.is_set
	|| snmptargetaddrtaglist.is_set
	|| snmptargetaddrtdomain.is_set
	|| snmptargetaddrtimeout.is_set;
}

bool SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(snmptargetaddrname.operation)
	|| is_set(snmptargetaddrparams.operation)
	|| is_set(snmptargetaddrretrycount.operation)
	|| is_set(snmptargetaddrrowstatus.operation)
	|| is_set(snmptargetaddrstoragetype.operation)
	|| is_set(snmptargetaddrtaddress.operation)
	|| is_set(snmptargetaddrtaglist.operation)
	|| is_set(snmptargetaddrtdomain.operation)
	|| is_set(snmptargetaddrtimeout.operation);
}

std::string SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetAddrEntry" <<"[snmpTargetAddrName='" <<snmptargetaddrname <<"']";

    return path_buffer.str();

}

const EntityPath SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/snmpTargetAddrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmptargetaddrname.is_set || is_set(snmptargetaddrname.operation)) leaf_name_data.push_back(snmptargetaddrname.get_name_leafdata());
    if (snmptargetaddrparams.is_set || is_set(snmptargetaddrparams.operation)) leaf_name_data.push_back(snmptargetaddrparams.get_name_leafdata());
    if (snmptargetaddrretrycount.is_set || is_set(snmptargetaddrretrycount.operation)) leaf_name_data.push_back(snmptargetaddrretrycount.get_name_leafdata());
    if (snmptargetaddrrowstatus.is_set || is_set(snmptargetaddrrowstatus.operation)) leaf_name_data.push_back(snmptargetaddrrowstatus.get_name_leafdata());
    if (snmptargetaddrstoragetype.is_set || is_set(snmptargetaddrstoragetype.operation)) leaf_name_data.push_back(snmptargetaddrstoragetype.get_name_leafdata());
    if (snmptargetaddrtaddress.is_set || is_set(snmptargetaddrtaddress.operation)) leaf_name_data.push_back(snmptargetaddrtaddress.get_name_leafdata());
    if (snmptargetaddrtaglist.is_set || is_set(snmptargetaddrtaglist.operation)) leaf_name_data.push_back(snmptargetaddrtaglist.get_name_leafdata());
    if (snmptargetaddrtdomain.is_set || is_set(snmptargetaddrtdomain.operation)) leaf_name_data.push_back(snmptargetaddrtdomain.get_name_leafdata());
    if (snmptargetaddrtimeout.is_set || is_set(snmptargetaddrtimeout.operation)) leaf_name_data.push_back(snmptargetaddrtimeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SnmpTargetMib::Snmptargetaddrtable::Snmptargetaddrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snmpTargetAddrName")
    {
        snmptargetaddrname = value;
    }
    if(value_path == "snmpTargetAddrParams")
    {
        snmptargetaddrparams = value;
    }
    if(value_path == "snmpTargetAddrRetryCount")
    {
        snmptargetaddrretrycount = value;
    }
    if(value_path == "snmpTargetAddrRowStatus")
    {
        snmptargetaddrrowstatus = value;
    }
    if(value_path == "snmpTargetAddrStorageType")
    {
        snmptargetaddrstoragetype = value;
    }
    if(value_path == "snmpTargetAddrTAddress")
    {
        snmptargetaddrtaddress = value;
    }
    if(value_path == "snmpTargetAddrTagList")
    {
        snmptargetaddrtaglist = value;
    }
    if(value_path == "snmpTargetAddrTDomain")
    {
        snmptargetaddrtdomain = value;
    }
    if(value_path == "snmpTargetAddrTimeout")
    {
        snmptargetaddrtimeout = value;
    }
}

SnmpTargetMib::Snmptargetparamstable::Snmptargetparamstable()
{
    yang_name = "snmpTargetParamsTable"; yang_parent_name = "SNMP-TARGET-MIB";
}

SnmpTargetMib::Snmptargetparamstable::~Snmptargetparamstable()
{
}

bool SnmpTargetMib::Snmptargetparamstable::has_data() const
{
    for (std::size_t index=0; index<snmptargetparamsentry_.size(); index++)
    {
        if(snmptargetparamsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool SnmpTargetMib::Snmptargetparamstable::has_operation() const
{
    for (std::size_t index=0; index<snmptargetparamsentry_.size(); index++)
    {
        if(snmptargetparamsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SnmpTargetMib::Snmptargetparamstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetParamsTable";

    return path_buffer.str();

}

const EntityPath SnmpTargetMib::Snmptargetparamstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SnmpTargetMib::Snmptargetparamstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpTargetParamsEntry")
    {
        for(auto const & c : snmptargetparamsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry>();
        c->parent = this;
        snmptargetparamsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpTargetMib::Snmptargetparamstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : snmptargetparamsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SnmpTargetMib::Snmptargetparamstable::set_value(const std::string & value_path, std::string value)
{
}

SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry::Snmptargetparamsentry()
    :
    snmptargetparamsname{YType::str, "snmpTargetParamsName"},
    snmptargetparamsmpmodel{YType::int32, "snmpTargetParamsMPModel"},
    snmptargetparamsrowstatus{YType::enumeration, "snmpTargetParamsRowStatus"},
    snmptargetparamssecuritylevel{YType::enumeration, "snmpTargetParamsSecurityLevel"},
    snmptargetparamssecuritymodel{YType::int32, "snmpTargetParamsSecurityModel"},
    snmptargetparamssecurityname{YType::str, "snmpTargetParamsSecurityName"},
    snmptargetparamsstoragetype{YType::enumeration, "snmpTargetParamsStorageType"}
{
    yang_name = "snmpTargetParamsEntry"; yang_parent_name = "snmpTargetParamsTable";
}

SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry::~Snmptargetparamsentry()
{
}

bool SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry::has_data() const
{
    return snmptargetparamsname.is_set
	|| snmptargetparamsmpmodel.is_set
	|| snmptargetparamsrowstatus.is_set
	|| snmptargetparamssecuritylevel.is_set
	|| snmptargetparamssecuritymodel.is_set
	|| snmptargetparamssecurityname.is_set
	|| snmptargetparamsstoragetype.is_set;
}

bool SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(snmptargetparamsname.operation)
	|| is_set(snmptargetparamsmpmodel.operation)
	|| is_set(snmptargetparamsrowstatus.operation)
	|| is_set(snmptargetparamssecuritylevel.operation)
	|| is_set(snmptargetparamssecuritymodel.operation)
	|| is_set(snmptargetparamssecurityname.operation)
	|| is_set(snmptargetparamsstoragetype.operation);
}

std::string SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetParamsEntry" <<"[snmpTargetParamsName='" <<snmptargetparamsname <<"']";

    return path_buffer.str();

}

const EntityPath SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/snmpTargetParamsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmptargetparamsname.is_set || is_set(snmptargetparamsname.operation)) leaf_name_data.push_back(snmptargetparamsname.get_name_leafdata());
    if (snmptargetparamsmpmodel.is_set || is_set(snmptargetparamsmpmodel.operation)) leaf_name_data.push_back(snmptargetparamsmpmodel.get_name_leafdata());
    if (snmptargetparamsrowstatus.is_set || is_set(snmptargetparamsrowstatus.operation)) leaf_name_data.push_back(snmptargetparamsrowstatus.get_name_leafdata());
    if (snmptargetparamssecuritylevel.is_set || is_set(snmptargetparamssecuritylevel.operation)) leaf_name_data.push_back(snmptargetparamssecuritylevel.get_name_leafdata());
    if (snmptargetparamssecuritymodel.is_set || is_set(snmptargetparamssecuritymodel.operation)) leaf_name_data.push_back(snmptargetparamssecuritymodel.get_name_leafdata());
    if (snmptargetparamssecurityname.is_set || is_set(snmptargetparamssecurityname.operation)) leaf_name_data.push_back(snmptargetparamssecurityname.get_name_leafdata());
    if (snmptargetparamsstoragetype.is_set || is_set(snmptargetparamsstoragetype.operation)) leaf_name_data.push_back(snmptargetparamsstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SnmpTargetMib::Snmptargetparamstable::Snmptargetparamsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snmpTargetParamsName")
    {
        snmptargetparamsname = value;
    }
    if(value_path == "snmpTargetParamsMPModel")
    {
        snmptargetparamsmpmodel = value;
    }
    if(value_path == "snmpTargetParamsRowStatus")
    {
        snmptargetparamsrowstatus = value;
    }
    if(value_path == "snmpTargetParamsSecurityLevel")
    {
        snmptargetparamssecuritylevel = value;
    }
    if(value_path == "snmpTargetParamsSecurityModel")
    {
        snmptargetparamssecuritymodel = value;
    }
    if(value_path == "snmpTargetParamsSecurityName")
    {
        snmptargetparamssecurityname = value;
    }
    if(value_path == "snmpTargetParamsStorageType")
    {
        snmptargetparamsstoragetype = value;
    }
}


}
}

