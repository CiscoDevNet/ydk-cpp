
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMP_TARGET_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace SNMP_TARGET_MIB {

SNMPTARGETMIB::SNMPTARGETMIB()
    :
    snmptargetobjects(std::make_shared<SNMPTARGETMIB::SnmpTargetObjects>())
    , snmptargetaddrtable(std::make_shared<SNMPTARGETMIB::SnmpTargetAddrTable>())
    , snmptargetparamstable(std::make_shared<SNMPTARGETMIB::SnmpTargetParamsTable>())
{
    snmptargetobjects->parent = this;
    snmptargetaddrtable->parent = this;
    snmptargetparamstable->parent = this;

    yang_name = "SNMP-TARGET-MIB"; yang_parent_name = "SNMP-TARGET-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

SNMPTARGETMIB::~SNMPTARGETMIB()
{
}

bool SNMPTARGETMIB::has_data() const
{
    if (is_presence_container) return true;
    return (snmptargetobjects !=  nullptr && snmptargetobjects->has_data())
	|| (snmptargetaddrtable !=  nullptr && snmptargetaddrtable->has_data())
	|| (snmptargetparamstable !=  nullptr && snmptargetparamstable->has_data());
}

bool SNMPTARGETMIB::has_operation() const
{
    return is_set(yfilter)
	|| (snmptargetobjects !=  nullptr && snmptargetobjects->has_operation())
	|| (snmptargetaddrtable !=  nullptr && snmptargetaddrtable->has_operation())
	|| (snmptargetparamstable !=  nullptr && snmptargetparamstable->has_operation());
}

std::string SNMPTARGETMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPTARGETMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPTARGETMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpTargetObjects")
    {
        if(snmptargetobjects == nullptr)
        {
            snmptargetobjects = std::make_shared<SNMPTARGETMIB::SnmpTargetObjects>();
        }
        return snmptargetobjects;
    }

    if(child_yang_name == "snmpTargetAddrTable")
    {
        if(snmptargetaddrtable == nullptr)
        {
            snmptargetaddrtable = std::make_shared<SNMPTARGETMIB::SnmpTargetAddrTable>();
        }
        return snmptargetaddrtable;
    }

    if(child_yang_name == "snmpTargetParamsTable")
    {
        if(snmptargetparamstable == nullptr)
        {
            snmptargetparamstable = std::make_shared<SNMPTARGETMIB::SnmpTargetParamsTable>();
        }
        return snmptargetparamstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPTARGETMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snmptargetobjects != nullptr)
    {
        _children["snmpTargetObjects"] = snmptargetobjects;
    }

    if(snmptargetaddrtable != nullptr)
    {
        _children["snmpTargetAddrTable"] = snmptargetaddrtable;
    }

    if(snmptargetparamstable != nullptr)
    {
        _children["snmpTargetParamsTable"] = snmptargetparamstable;
    }

    return _children;
}

void SNMPTARGETMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPTARGETMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SNMPTARGETMIB::clone_ptr() const
{
    return std::make_shared<SNMPTARGETMIB>();
}

std::string SNMPTARGETMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string SNMPTARGETMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function SNMPTARGETMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SNMPTARGETMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool SNMPTARGETMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpTargetObjects" || name == "snmpTargetAddrTable" || name == "snmpTargetParamsTable")
        return true;
    return false;
}

SNMPTARGETMIB::SnmpTargetObjects::SnmpTargetObjects()
    :
    snmptargetspinlock{YType::int32, "snmpTargetSpinLock"},
    snmpunavailablecontexts{YType::uint32, "snmpUnavailableContexts"},
    snmpunknowncontexts{YType::uint32, "snmpUnknownContexts"}
{

    yang_name = "snmpTargetObjects"; yang_parent_name = "SNMP-TARGET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPTARGETMIB::SnmpTargetObjects::~SnmpTargetObjects()
{
}

bool SNMPTARGETMIB::SnmpTargetObjects::has_data() const
{
    if (is_presence_container) return true;
    return snmptargetspinlock.is_set
	|| snmpunavailablecontexts.is_set
	|| snmpunknowncontexts.is_set;
}

bool SNMPTARGETMIB::SnmpTargetObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmptargetspinlock.yfilter)
	|| ydk::is_set(snmpunavailablecontexts.yfilter)
	|| ydk::is_set(snmpunknowncontexts.yfilter);
}

std::string SNMPTARGETMIB::SnmpTargetObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPTARGETMIB::SnmpTargetObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPTARGETMIB::SnmpTargetObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmptargetspinlock.is_set || is_set(snmptargetspinlock.yfilter)) leaf_name_data.push_back(snmptargetspinlock.get_name_leafdata());
    if (snmpunavailablecontexts.is_set || is_set(snmpunavailablecontexts.yfilter)) leaf_name_data.push_back(snmpunavailablecontexts.get_name_leafdata());
    if (snmpunknowncontexts.is_set || is_set(snmpunknowncontexts.yfilter)) leaf_name_data.push_back(snmpunknowncontexts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPTARGETMIB::SnmpTargetObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPTARGETMIB::SnmpTargetObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPTARGETMIB::SnmpTargetObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpTargetSpinLock")
    {
        snmptargetspinlock = value;
        snmptargetspinlock.value_namespace = name_space;
        snmptargetspinlock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpUnavailableContexts")
    {
        snmpunavailablecontexts = value;
        snmpunavailablecontexts.value_namespace = name_space;
        snmpunavailablecontexts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpUnknownContexts")
    {
        snmpunknowncontexts = value;
        snmpunknowncontexts.value_namespace = name_space;
        snmpunknowncontexts.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPTARGETMIB::SnmpTargetObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpTargetSpinLock")
    {
        snmptargetspinlock.yfilter = yfilter;
    }
    if(value_path == "snmpUnavailableContexts")
    {
        snmpunavailablecontexts.yfilter = yfilter;
    }
    if(value_path == "snmpUnknownContexts")
    {
        snmpunknowncontexts.yfilter = yfilter;
    }
}

bool SNMPTARGETMIB::SnmpTargetObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpTargetSpinLock" || name == "snmpUnavailableContexts" || name == "snmpUnknownContexts")
        return true;
    return false;
}

SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrTable()
    :
    snmptargetaddrentry(this, {"snmptargetaddrname"})
{

    yang_name = "snmpTargetAddrTable"; yang_parent_name = "SNMP-TARGET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPTARGETMIB::SnmpTargetAddrTable::~SnmpTargetAddrTable()
{
}

bool SNMPTARGETMIB::SnmpTargetAddrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<snmptargetaddrentry.len(); index++)
    {
        if(snmptargetaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPTARGETMIB::SnmpTargetAddrTable::has_operation() const
{
    for (std::size_t index=0; index<snmptargetaddrentry.len(); index++)
    {
        if(snmptargetaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPTARGETMIB::SnmpTargetAddrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPTARGETMIB::SnmpTargetAddrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPTARGETMIB::SnmpTargetAddrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPTARGETMIB::SnmpTargetAddrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpTargetAddrEntry")
    {
        auto ent_ = std::make_shared<SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry>();
        ent_->parent = this;
        snmptargetaddrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPTARGETMIB::SnmpTargetAddrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : snmptargetaddrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SNMPTARGETMIB::SnmpTargetAddrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPTARGETMIB::SnmpTargetAddrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPTARGETMIB::SnmpTargetAddrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpTargetAddrEntry")
        return true;
    return false;
}

SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry::SnmpTargetAddrEntry()
    :
    snmptargetaddrname{YType::str, "snmpTargetAddrName"},
    snmptargetaddrtdomain{YType::str, "snmpTargetAddrTDomain"},
    snmptargetaddrtaddress{YType::str, "snmpTargetAddrTAddress"},
    snmptargetaddrtimeout{YType::int32, "snmpTargetAddrTimeout"},
    snmptargetaddrretrycount{YType::int32, "snmpTargetAddrRetryCount"},
    snmptargetaddrtaglist{YType::str, "snmpTargetAddrTagList"},
    snmptargetaddrparams{YType::str, "snmpTargetAddrParams"},
    snmptargetaddrstoragetype{YType::enumeration, "snmpTargetAddrStorageType"},
    snmptargetaddrrowstatus{YType::enumeration, "snmpTargetAddrRowStatus"}
{

    yang_name = "snmpTargetAddrEntry"; yang_parent_name = "snmpTargetAddrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry::~SnmpTargetAddrEntry()
{
}

bool SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry::has_data() const
{
    if (is_presence_container) return true;
    return snmptargetaddrname.is_set
	|| snmptargetaddrtdomain.is_set
	|| snmptargetaddrtaddress.is_set
	|| snmptargetaddrtimeout.is_set
	|| snmptargetaddrretrycount.is_set
	|| snmptargetaddrtaglist.is_set
	|| snmptargetaddrparams.is_set
	|| snmptargetaddrstoragetype.is_set
	|| snmptargetaddrrowstatus.is_set;
}

bool SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmptargetaddrname.yfilter)
	|| ydk::is_set(snmptargetaddrtdomain.yfilter)
	|| ydk::is_set(snmptargetaddrtaddress.yfilter)
	|| ydk::is_set(snmptargetaddrtimeout.yfilter)
	|| ydk::is_set(snmptargetaddrretrycount.yfilter)
	|| ydk::is_set(snmptargetaddrtaglist.yfilter)
	|| ydk::is_set(snmptargetaddrparams.yfilter)
	|| ydk::is_set(snmptargetaddrstoragetype.yfilter)
	|| ydk::is_set(snmptargetaddrrowstatus.yfilter);
}

std::string SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/snmpTargetAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetAddrEntry";
    ADD_KEY_TOKEN(snmptargetaddrname, "snmpTargetAddrName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmptargetaddrname.is_set || is_set(snmptargetaddrname.yfilter)) leaf_name_data.push_back(snmptargetaddrname.get_name_leafdata());
    if (snmptargetaddrtdomain.is_set || is_set(snmptargetaddrtdomain.yfilter)) leaf_name_data.push_back(snmptargetaddrtdomain.get_name_leafdata());
    if (snmptargetaddrtaddress.is_set || is_set(snmptargetaddrtaddress.yfilter)) leaf_name_data.push_back(snmptargetaddrtaddress.get_name_leafdata());
    if (snmptargetaddrtimeout.is_set || is_set(snmptargetaddrtimeout.yfilter)) leaf_name_data.push_back(snmptargetaddrtimeout.get_name_leafdata());
    if (snmptargetaddrretrycount.is_set || is_set(snmptargetaddrretrycount.yfilter)) leaf_name_data.push_back(snmptargetaddrretrycount.get_name_leafdata());
    if (snmptargetaddrtaglist.is_set || is_set(snmptargetaddrtaglist.yfilter)) leaf_name_data.push_back(snmptargetaddrtaglist.get_name_leafdata());
    if (snmptargetaddrparams.is_set || is_set(snmptargetaddrparams.yfilter)) leaf_name_data.push_back(snmptargetaddrparams.get_name_leafdata());
    if (snmptargetaddrstoragetype.is_set || is_set(snmptargetaddrstoragetype.yfilter)) leaf_name_data.push_back(snmptargetaddrstoragetype.get_name_leafdata());
    if (snmptargetaddrrowstatus.is_set || is_set(snmptargetaddrrowstatus.yfilter)) leaf_name_data.push_back(snmptargetaddrrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpTargetAddrName")
    {
        snmptargetaddrname = value;
        snmptargetaddrname.value_namespace = name_space;
        snmptargetaddrname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrTDomain")
    {
        snmptargetaddrtdomain = value;
        snmptargetaddrtdomain.value_namespace = name_space;
        snmptargetaddrtdomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrTAddress")
    {
        snmptargetaddrtaddress = value;
        snmptargetaddrtaddress.value_namespace = name_space;
        snmptargetaddrtaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrTimeout")
    {
        snmptargetaddrtimeout = value;
        snmptargetaddrtimeout.value_namespace = name_space;
        snmptargetaddrtimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrRetryCount")
    {
        snmptargetaddrretrycount = value;
        snmptargetaddrretrycount.value_namespace = name_space;
        snmptargetaddrretrycount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrTagList")
    {
        snmptargetaddrtaglist = value;
        snmptargetaddrtaglist.value_namespace = name_space;
        snmptargetaddrtaglist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrParams")
    {
        snmptargetaddrparams = value;
        snmptargetaddrparams.value_namespace = name_space;
        snmptargetaddrparams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrStorageType")
    {
        snmptargetaddrstoragetype = value;
        snmptargetaddrstoragetype.value_namespace = name_space;
        snmptargetaddrstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrRowStatus")
    {
        snmptargetaddrrowstatus = value;
        snmptargetaddrrowstatus.value_namespace = name_space;
        snmptargetaddrrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpTargetAddrName")
    {
        snmptargetaddrname.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrTDomain")
    {
        snmptargetaddrtdomain.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrTAddress")
    {
        snmptargetaddrtaddress.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrTimeout")
    {
        snmptargetaddrtimeout.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrRetryCount")
    {
        snmptargetaddrretrycount.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrTagList")
    {
        snmptargetaddrtaglist.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrParams")
    {
        snmptargetaddrparams.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrStorageType")
    {
        snmptargetaddrstoragetype.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrRowStatus")
    {
        snmptargetaddrrowstatus.yfilter = yfilter;
    }
}

bool SNMPTARGETMIB::SnmpTargetAddrTable::SnmpTargetAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpTargetAddrName" || name == "snmpTargetAddrTDomain" || name == "snmpTargetAddrTAddress" || name == "snmpTargetAddrTimeout" || name == "snmpTargetAddrRetryCount" || name == "snmpTargetAddrTagList" || name == "snmpTargetAddrParams" || name == "snmpTargetAddrStorageType" || name == "snmpTargetAddrRowStatus")
        return true;
    return false;
}

SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsTable()
    :
    snmptargetparamsentry(this, {"snmptargetparamsname"})
{

    yang_name = "snmpTargetParamsTable"; yang_parent_name = "SNMP-TARGET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPTARGETMIB::SnmpTargetParamsTable::~SnmpTargetParamsTable()
{
}

bool SNMPTARGETMIB::SnmpTargetParamsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<snmptargetparamsentry.len(); index++)
    {
        if(snmptargetparamsentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPTARGETMIB::SnmpTargetParamsTable::has_operation() const
{
    for (std::size_t index=0; index<snmptargetparamsentry.len(); index++)
    {
        if(snmptargetparamsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPTARGETMIB::SnmpTargetParamsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPTARGETMIB::SnmpTargetParamsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetParamsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPTARGETMIB::SnmpTargetParamsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPTARGETMIB::SnmpTargetParamsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpTargetParamsEntry")
    {
        auto ent_ = std::make_shared<SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry>();
        ent_->parent = this;
        snmptargetparamsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPTARGETMIB::SnmpTargetParamsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : snmptargetparamsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SNMPTARGETMIB::SnmpTargetParamsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPTARGETMIB::SnmpTargetParamsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPTARGETMIB::SnmpTargetParamsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpTargetParamsEntry")
        return true;
    return false;
}

SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry::SnmpTargetParamsEntry()
    :
    snmptargetparamsname{YType::str, "snmpTargetParamsName"},
    snmptargetparamsmpmodel{YType::int32, "snmpTargetParamsMPModel"},
    snmptargetparamssecuritymodel{YType::int32, "snmpTargetParamsSecurityModel"},
    snmptargetparamssecurityname{YType::str, "snmpTargetParamsSecurityName"},
    snmptargetparamssecuritylevel{YType::enumeration, "snmpTargetParamsSecurityLevel"},
    snmptargetparamsstoragetype{YType::enumeration, "snmpTargetParamsStorageType"},
    snmptargetparamsrowstatus{YType::enumeration, "snmpTargetParamsRowStatus"}
{

    yang_name = "snmpTargetParamsEntry"; yang_parent_name = "snmpTargetParamsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry::~SnmpTargetParamsEntry()
{
}

bool SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry::has_data() const
{
    if (is_presence_container) return true;
    return snmptargetparamsname.is_set
	|| snmptargetparamsmpmodel.is_set
	|| snmptargetparamssecuritymodel.is_set
	|| snmptargetparamssecurityname.is_set
	|| snmptargetparamssecuritylevel.is_set
	|| snmptargetparamsstoragetype.is_set
	|| snmptargetparamsrowstatus.is_set;
}

bool SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmptargetparamsname.yfilter)
	|| ydk::is_set(snmptargetparamsmpmodel.yfilter)
	|| ydk::is_set(snmptargetparamssecuritymodel.yfilter)
	|| ydk::is_set(snmptargetparamssecurityname.yfilter)
	|| ydk::is_set(snmptargetparamssecuritylevel.yfilter)
	|| ydk::is_set(snmptargetparamsstoragetype.yfilter)
	|| ydk::is_set(snmptargetparamsrowstatus.yfilter);
}

std::string SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/snmpTargetParamsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetParamsEntry";
    ADD_KEY_TOKEN(snmptargetparamsname, "snmpTargetParamsName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmptargetparamsname.is_set || is_set(snmptargetparamsname.yfilter)) leaf_name_data.push_back(snmptargetparamsname.get_name_leafdata());
    if (snmptargetparamsmpmodel.is_set || is_set(snmptargetparamsmpmodel.yfilter)) leaf_name_data.push_back(snmptargetparamsmpmodel.get_name_leafdata());
    if (snmptargetparamssecuritymodel.is_set || is_set(snmptargetparamssecuritymodel.yfilter)) leaf_name_data.push_back(snmptargetparamssecuritymodel.get_name_leafdata());
    if (snmptargetparamssecurityname.is_set || is_set(snmptargetparamssecurityname.yfilter)) leaf_name_data.push_back(snmptargetparamssecurityname.get_name_leafdata());
    if (snmptargetparamssecuritylevel.is_set || is_set(snmptargetparamssecuritylevel.yfilter)) leaf_name_data.push_back(snmptargetparamssecuritylevel.get_name_leafdata());
    if (snmptargetparamsstoragetype.is_set || is_set(snmptargetparamsstoragetype.yfilter)) leaf_name_data.push_back(snmptargetparamsstoragetype.get_name_leafdata());
    if (snmptargetparamsrowstatus.is_set || is_set(snmptargetparamsrowstatus.yfilter)) leaf_name_data.push_back(snmptargetparamsrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpTargetParamsName")
    {
        snmptargetparamsname = value;
        snmptargetparamsname.value_namespace = name_space;
        snmptargetparamsname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetParamsMPModel")
    {
        snmptargetparamsmpmodel = value;
        snmptargetparamsmpmodel.value_namespace = name_space;
        snmptargetparamsmpmodel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetParamsSecurityModel")
    {
        snmptargetparamssecuritymodel = value;
        snmptargetparamssecuritymodel.value_namespace = name_space;
        snmptargetparamssecuritymodel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetParamsSecurityName")
    {
        snmptargetparamssecurityname = value;
        snmptargetparamssecurityname.value_namespace = name_space;
        snmptargetparamssecurityname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetParamsSecurityLevel")
    {
        snmptargetparamssecuritylevel = value;
        snmptargetparamssecuritylevel.value_namespace = name_space;
        snmptargetparamssecuritylevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetParamsStorageType")
    {
        snmptargetparamsstoragetype = value;
        snmptargetparamsstoragetype.value_namespace = name_space;
        snmptargetparamsstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetParamsRowStatus")
    {
        snmptargetparamsrowstatus = value;
        snmptargetparamsrowstatus.value_namespace = name_space;
        snmptargetparamsrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpTargetParamsName")
    {
        snmptargetparamsname.yfilter = yfilter;
    }
    if(value_path == "snmpTargetParamsMPModel")
    {
        snmptargetparamsmpmodel.yfilter = yfilter;
    }
    if(value_path == "snmpTargetParamsSecurityModel")
    {
        snmptargetparamssecuritymodel.yfilter = yfilter;
    }
    if(value_path == "snmpTargetParamsSecurityName")
    {
        snmptargetparamssecurityname.yfilter = yfilter;
    }
    if(value_path == "snmpTargetParamsSecurityLevel")
    {
        snmptargetparamssecuritylevel.yfilter = yfilter;
    }
    if(value_path == "snmpTargetParamsStorageType")
    {
        snmptargetparamsstoragetype.yfilter = yfilter;
    }
    if(value_path == "snmpTargetParamsRowStatus")
    {
        snmptargetparamsrowstatus.yfilter = yfilter;
    }
}

bool SNMPTARGETMIB::SnmpTargetParamsTable::SnmpTargetParamsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpTargetParamsName" || name == "snmpTargetParamsMPModel" || name == "snmpTargetParamsSecurityModel" || name == "snmpTargetParamsSecurityName" || name == "snmpTargetParamsSecurityLevel" || name == "snmpTargetParamsStorageType" || name == "snmpTargetParamsRowStatus")
        return true;
    return false;
}


}
}

