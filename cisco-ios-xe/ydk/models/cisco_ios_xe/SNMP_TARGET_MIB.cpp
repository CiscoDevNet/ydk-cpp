
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
    snmptargetaddrtable(std::make_shared<SNMPTARGETMIB::Snmptargetaddrtable>())
	,snmptargetobjects(std::make_shared<SNMPTARGETMIB::Snmptargetobjects>())
	,snmptargetparamstable(std::make_shared<SNMPTARGETMIB::Snmptargetparamstable>())
{
    snmptargetaddrtable->parent = this;
    snmptargetobjects->parent = this;
    snmptargetparamstable->parent = this;

    yang_name = "SNMP-TARGET-MIB"; yang_parent_name = "SNMP-TARGET-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

SNMPTARGETMIB::~SNMPTARGETMIB()
{
}

bool SNMPTARGETMIB::has_data() const
{
    return (snmptargetaddrtable !=  nullptr && snmptargetaddrtable->has_data())
	|| (snmptargetobjects !=  nullptr && snmptargetobjects->has_data())
	|| (snmptargetparamstable !=  nullptr && snmptargetparamstable->has_data());
}

bool SNMPTARGETMIB::has_operation() const
{
    return is_set(yfilter)
	|| (snmptargetaddrtable !=  nullptr && snmptargetaddrtable->has_operation())
	|| (snmptargetobjects !=  nullptr && snmptargetobjects->has_operation())
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

std::shared_ptr<Entity> SNMPTARGETMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpTargetAddrTable")
    {
        if(snmptargetaddrtable == nullptr)
        {
            snmptargetaddrtable = std::make_shared<SNMPTARGETMIB::Snmptargetaddrtable>();
        }
        return snmptargetaddrtable;
    }

    if(child_yang_name == "snmpTargetObjects")
    {
        if(snmptargetobjects == nullptr)
        {
            snmptargetobjects = std::make_shared<SNMPTARGETMIB::Snmptargetobjects>();
        }
        return snmptargetobjects;
    }

    if(child_yang_name == "snmpTargetParamsTable")
    {
        if(snmptargetparamstable == nullptr)
        {
            snmptargetparamstable = std::make_shared<SNMPTARGETMIB::Snmptargetparamstable>();
        }
        return snmptargetparamstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SNMPTARGETMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snmptargetaddrtable != nullptr)
    {
        children["snmpTargetAddrTable"] = snmptargetaddrtable;
    }

    if(snmptargetobjects != nullptr)
    {
        children["snmpTargetObjects"] = snmptargetobjects;
    }

    if(snmptargetparamstable != nullptr)
    {
        children["snmpTargetParamsTable"] = snmptargetparamstable;
    }

    return children;
}

void SNMPTARGETMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPTARGETMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SNMPTARGETMIB::clone_ptr() const
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
    if(name == "snmpTargetAddrTable" || name == "snmpTargetObjects" || name == "snmpTargetParamsTable")
        return true;
    return false;
}

SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrtable()
{

    yang_name = "snmpTargetAddrTable"; yang_parent_name = "SNMP-TARGET-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

SNMPTARGETMIB::Snmptargetaddrtable::~Snmptargetaddrtable()
{
}

bool SNMPTARGETMIB::Snmptargetaddrtable::has_data() const
{
    for (std::size_t index=0; index<snmptargetaddrentry.size(); index++)
    {
        if(snmptargetaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPTARGETMIB::Snmptargetaddrtable::has_operation() const
{
    for (std::size_t index=0; index<snmptargetaddrentry.size(); index++)
    {
        if(snmptargetaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPTARGETMIB::Snmptargetaddrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPTARGETMIB::Snmptargetaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPTARGETMIB::Snmptargetaddrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SNMPTARGETMIB::Snmptargetaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpTargetAddrEntry")
    {
        for(auto const & c : snmptargetaddrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry>();
        c->parent = this;
        snmptargetaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SNMPTARGETMIB::Snmptargetaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : snmptargetaddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SNMPTARGETMIB::Snmptargetaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPTARGETMIB::Snmptargetaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPTARGETMIB::Snmptargetaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpTargetAddrEntry")
        return true;
    return false;
}

SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry::Snmptargetaddrentry()
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

    yang_name = "snmpTargetAddrEntry"; yang_parent_name = "snmpTargetAddrTable"; is_top_level_class = false; has_list_ancestor = false;
}

SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry::~Snmptargetaddrentry()
{
}

bool SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry::has_data() const
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

bool SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmptargetaddrname.yfilter)
	|| ydk::is_set(snmptargetaddrparams.yfilter)
	|| ydk::is_set(snmptargetaddrretrycount.yfilter)
	|| ydk::is_set(snmptargetaddrrowstatus.yfilter)
	|| ydk::is_set(snmptargetaddrstoragetype.yfilter)
	|| ydk::is_set(snmptargetaddrtaddress.yfilter)
	|| ydk::is_set(snmptargetaddrtaglist.yfilter)
	|| ydk::is_set(snmptargetaddrtdomain.yfilter)
	|| ydk::is_set(snmptargetaddrtimeout.yfilter);
}

std::string SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/snmpTargetAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetAddrEntry" <<"[snmpTargetAddrName='" <<snmptargetaddrname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmptargetaddrname.is_set || is_set(snmptargetaddrname.yfilter)) leaf_name_data.push_back(snmptargetaddrname.get_name_leafdata());
    if (snmptargetaddrparams.is_set || is_set(snmptargetaddrparams.yfilter)) leaf_name_data.push_back(snmptargetaddrparams.get_name_leafdata());
    if (snmptargetaddrretrycount.is_set || is_set(snmptargetaddrretrycount.yfilter)) leaf_name_data.push_back(snmptargetaddrretrycount.get_name_leafdata());
    if (snmptargetaddrrowstatus.is_set || is_set(snmptargetaddrrowstatus.yfilter)) leaf_name_data.push_back(snmptargetaddrrowstatus.get_name_leafdata());
    if (snmptargetaddrstoragetype.is_set || is_set(snmptargetaddrstoragetype.yfilter)) leaf_name_data.push_back(snmptargetaddrstoragetype.get_name_leafdata());
    if (snmptargetaddrtaddress.is_set || is_set(snmptargetaddrtaddress.yfilter)) leaf_name_data.push_back(snmptargetaddrtaddress.get_name_leafdata());
    if (snmptargetaddrtaglist.is_set || is_set(snmptargetaddrtaglist.yfilter)) leaf_name_data.push_back(snmptargetaddrtaglist.get_name_leafdata());
    if (snmptargetaddrtdomain.is_set || is_set(snmptargetaddrtdomain.yfilter)) leaf_name_data.push_back(snmptargetaddrtdomain.get_name_leafdata());
    if (snmptargetaddrtimeout.is_set || is_set(snmptargetaddrtimeout.yfilter)) leaf_name_data.push_back(snmptargetaddrtimeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmpTargetAddrName")
    {
        snmptargetaddrname = value;
        snmptargetaddrname.value_namespace = name_space;
        snmptargetaddrname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrParams")
    {
        snmptargetaddrparams = value;
        snmptargetaddrparams.value_namespace = name_space;
        snmptargetaddrparams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrRetryCount")
    {
        snmptargetaddrretrycount = value;
        snmptargetaddrretrycount.value_namespace = name_space;
        snmptargetaddrretrycount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrRowStatus")
    {
        snmptargetaddrrowstatus = value;
        snmptargetaddrrowstatus.value_namespace = name_space;
        snmptargetaddrrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrStorageType")
    {
        snmptargetaddrstoragetype = value;
        snmptargetaddrstoragetype.value_namespace = name_space;
        snmptargetaddrstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrTAddress")
    {
        snmptargetaddrtaddress = value;
        snmptargetaddrtaddress.value_namespace = name_space;
        snmptargetaddrtaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrTagList")
    {
        snmptargetaddrtaglist = value;
        snmptargetaddrtaglist.value_namespace = name_space;
        snmptargetaddrtaglist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrTDomain")
    {
        snmptargetaddrtdomain = value;
        snmptargetaddrtdomain.value_namespace = name_space;
        snmptargetaddrtdomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetAddrTimeout")
    {
        snmptargetaddrtimeout = value;
        snmptargetaddrtimeout.value_namespace = name_space;
        snmptargetaddrtimeout.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpTargetAddrName")
    {
        snmptargetaddrname.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrParams")
    {
        snmptargetaddrparams.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrRetryCount")
    {
        snmptargetaddrretrycount.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrRowStatus")
    {
        snmptargetaddrrowstatus.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrStorageType")
    {
        snmptargetaddrstoragetype.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrTAddress")
    {
        snmptargetaddrtaddress.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrTagList")
    {
        snmptargetaddrtaglist.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrTDomain")
    {
        snmptargetaddrtdomain.yfilter = yfilter;
    }
    if(value_path == "snmpTargetAddrTimeout")
    {
        snmptargetaddrtimeout.yfilter = yfilter;
    }
}

bool SNMPTARGETMIB::Snmptargetaddrtable::Snmptargetaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpTargetAddrName" || name == "snmpTargetAddrParams" || name == "snmpTargetAddrRetryCount" || name == "snmpTargetAddrRowStatus" || name == "snmpTargetAddrStorageType" || name == "snmpTargetAddrTAddress" || name == "snmpTargetAddrTagList" || name == "snmpTargetAddrTDomain" || name == "snmpTargetAddrTimeout")
        return true;
    return false;
}

SNMPTARGETMIB::Snmptargetobjects::Snmptargetobjects()
    :
    snmptargetspinlock{YType::int32, "snmpTargetSpinLock"},
    snmpunavailablecontexts{YType::uint32, "snmpUnavailableContexts"},
    snmpunknowncontexts{YType::uint32, "snmpUnknownContexts"}
{

    yang_name = "snmpTargetObjects"; yang_parent_name = "SNMP-TARGET-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

SNMPTARGETMIB::Snmptargetobjects::~Snmptargetobjects()
{
}

bool SNMPTARGETMIB::Snmptargetobjects::has_data() const
{
    return snmptargetspinlock.is_set
	|| snmpunavailablecontexts.is_set
	|| snmpunknowncontexts.is_set;
}

bool SNMPTARGETMIB::Snmptargetobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmptargetspinlock.yfilter)
	|| ydk::is_set(snmpunavailablecontexts.yfilter)
	|| ydk::is_set(snmpunknowncontexts.yfilter);
}

std::string SNMPTARGETMIB::Snmptargetobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPTARGETMIB::Snmptargetobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPTARGETMIB::Snmptargetobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmptargetspinlock.is_set || is_set(snmptargetspinlock.yfilter)) leaf_name_data.push_back(snmptargetspinlock.get_name_leafdata());
    if (snmpunavailablecontexts.is_set || is_set(snmpunavailablecontexts.yfilter)) leaf_name_data.push_back(snmpunavailablecontexts.get_name_leafdata());
    if (snmpunknowncontexts.is_set || is_set(snmpunknowncontexts.yfilter)) leaf_name_data.push_back(snmpunknowncontexts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SNMPTARGETMIB::Snmptargetobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SNMPTARGETMIB::Snmptargetobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SNMPTARGETMIB::Snmptargetobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void SNMPTARGETMIB::Snmptargetobjects::set_filter(const std::string & value_path, YFilter yfilter)
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

bool SNMPTARGETMIB::Snmptargetobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpTargetSpinLock" || name == "snmpUnavailableContexts" || name == "snmpUnknownContexts")
        return true;
    return false;
}

SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamstable()
{

    yang_name = "snmpTargetParamsTable"; yang_parent_name = "SNMP-TARGET-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

SNMPTARGETMIB::Snmptargetparamstable::~Snmptargetparamstable()
{
}

bool SNMPTARGETMIB::Snmptargetparamstable::has_data() const
{
    for (std::size_t index=0; index<snmptargetparamsentry.size(); index++)
    {
        if(snmptargetparamsentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPTARGETMIB::Snmptargetparamstable::has_operation() const
{
    for (std::size_t index=0; index<snmptargetparamsentry.size(); index++)
    {
        if(snmptargetparamsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPTARGETMIB::Snmptargetparamstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPTARGETMIB::Snmptargetparamstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetParamsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPTARGETMIB::Snmptargetparamstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SNMPTARGETMIB::Snmptargetparamstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmpTargetParamsEntry")
    {
        for(auto const & c : snmptargetparamsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry>();
        c->parent = this;
        snmptargetparamsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SNMPTARGETMIB::Snmptargetparamstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : snmptargetparamsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SNMPTARGETMIB::Snmptargetparamstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPTARGETMIB::Snmptargetparamstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPTARGETMIB::Snmptargetparamstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpTargetParamsEntry")
        return true;
    return false;
}

SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry::Snmptargetparamsentry()
    :
    snmptargetparamsname{YType::str, "snmpTargetParamsName"},
    snmptargetparamsmpmodel{YType::int32, "snmpTargetParamsMPModel"},
    snmptargetparamsrowstatus{YType::enumeration, "snmpTargetParamsRowStatus"},
    snmptargetparamssecuritylevel{YType::enumeration, "snmpTargetParamsSecurityLevel"},
    snmptargetparamssecuritymodel{YType::int32, "snmpTargetParamsSecurityModel"},
    snmptargetparamssecurityname{YType::str, "snmpTargetParamsSecurityName"},
    snmptargetparamsstoragetype{YType::enumeration, "snmpTargetParamsStorageType"}
{

    yang_name = "snmpTargetParamsEntry"; yang_parent_name = "snmpTargetParamsTable"; is_top_level_class = false; has_list_ancestor = false;
}

SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry::~Snmptargetparamsentry()
{
}

bool SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry::has_data() const
{
    return snmptargetparamsname.is_set
	|| snmptargetparamsmpmodel.is_set
	|| snmptargetparamsrowstatus.is_set
	|| snmptargetparamssecuritylevel.is_set
	|| snmptargetparamssecuritymodel.is_set
	|| snmptargetparamssecurityname.is_set
	|| snmptargetparamsstoragetype.is_set;
}

bool SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmptargetparamsname.yfilter)
	|| ydk::is_set(snmptargetparamsmpmodel.yfilter)
	|| ydk::is_set(snmptargetparamsrowstatus.yfilter)
	|| ydk::is_set(snmptargetparamssecuritylevel.yfilter)
	|| ydk::is_set(snmptargetparamssecuritymodel.yfilter)
	|| ydk::is_set(snmptargetparamssecurityname.yfilter)
	|| ydk::is_set(snmptargetparamsstoragetype.yfilter);
}

std::string SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-TARGET-MIB:SNMP-TARGET-MIB/snmpTargetParamsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmpTargetParamsEntry" <<"[snmpTargetParamsName='" <<snmptargetparamsname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmptargetparamsname.is_set || is_set(snmptargetparamsname.yfilter)) leaf_name_data.push_back(snmptargetparamsname.get_name_leafdata());
    if (snmptargetparamsmpmodel.is_set || is_set(snmptargetparamsmpmodel.yfilter)) leaf_name_data.push_back(snmptargetparamsmpmodel.get_name_leafdata());
    if (snmptargetparamsrowstatus.is_set || is_set(snmptargetparamsrowstatus.yfilter)) leaf_name_data.push_back(snmptargetparamsrowstatus.get_name_leafdata());
    if (snmptargetparamssecuritylevel.is_set || is_set(snmptargetparamssecuritylevel.yfilter)) leaf_name_data.push_back(snmptargetparamssecuritylevel.get_name_leafdata());
    if (snmptargetparamssecuritymodel.is_set || is_set(snmptargetparamssecuritymodel.yfilter)) leaf_name_data.push_back(snmptargetparamssecuritymodel.get_name_leafdata());
    if (snmptargetparamssecurityname.is_set || is_set(snmptargetparamssecurityname.yfilter)) leaf_name_data.push_back(snmptargetparamssecurityname.get_name_leafdata());
    if (snmptargetparamsstoragetype.is_set || is_set(snmptargetparamsstoragetype.yfilter)) leaf_name_data.push_back(snmptargetparamsstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "snmpTargetParamsRowStatus")
    {
        snmptargetparamsrowstatus = value;
        snmptargetparamsrowstatus.value_namespace = name_space;
        snmptargetparamsrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTargetParamsSecurityLevel")
    {
        snmptargetparamssecuritylevel = value;
        snmptargetparamssecuritylevel.value_namespace = name_space;
        snmptargetparamssecuritylevel.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "snmpTargetParamsStorageType")
    {
        snmptargetparamsstoragetype = value;
        snmptargetparamsstoragetype.value_namespace = name_space;
        snmptargetparamsstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmpTargetParamsName")
    {
        snmptargetparamsname.yfilter = yfilter;
    }
    if(value_path == "snmpTargetParamsMPModel")
    {
        snmptargetparamsmpmodel.yfilter = yfilter;
    }
    if(value_path == "snmpTargetParamsRowStatus")
    {
        snmptargetparamsrowstatus.yfilter = yfilter;
    }
    if(value_path == "snmpTargetParamsSecurityLevel")
    {
        snmptargetparamssecuritylevel.yfilter = yfilter;
    }
    if(value_path == "snmpTargetParamsSecurityModel")
    {
        snmptargetparamssecuritymodel.yfilter = yfilter;
    }
    if(value_path == "snmpTargetParamsSecurityName")
    {
        snmptargetparamssecurityname.yfilter = yfilter;
    }
    if(value_path == "snmpTargetParamsStorageType")
    {
        snmptargetparamsstoragetype.yfilter = yfilter;
    }
}

bool SNMPTARGETMIB::Snmptargetparamstable::Snmptargetparamsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmpTargetParamsName" || name == "snmpTargetParamsMPModel" || name == "snmpTargetParamsRowStatus" || name == "snmpTargetParamsSecurityLevel" || name == "snmpTargetParamsSecurityModel" || name == "snmpTargetParamsSecurityName" || name == "snmpTargetParamsStorageType")
        return true;
    return false;
}


}
}

