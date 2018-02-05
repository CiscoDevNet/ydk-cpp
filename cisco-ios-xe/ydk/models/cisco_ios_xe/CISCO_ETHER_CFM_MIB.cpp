
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ETHER_CFM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ETHER_CFM_MIB {

CISCOETHERCFMMIB::CISCOETHERCFMMIB()
    :
    ceccfmevents(std::make_shared<CISCOETHERCFMMIB::Ceccfmevents>())
	,cethercfmeventtable(std::make_shared<CISCOETHERCFMMIB::Cethercfmeventtable>())
{
    ceccfmevents->parent = this;
    cethercfmeventtable->parent = this;

    yang_name = "CISCO-ETHER-CFM-MIB"; yang_parent_name = "CISCO-ETHER-CFM-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOETHERCFMMIB::~CISCOETHERCFMMIB()
{
}

bool CISCOETHERCFMMIB::has_data() const
{
    return (ceccfmevents !=  nullptr && ceccfmevents->has_data())
	|| (cethercfmeventtable !=  nullptr && cethercfmeventtable->has_data());
}

bool CISCOETHERCFMMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ceccfmevents !=  nullptr && ceccfmevents->has_operation())
	|| (cethercfmeventtable !=  nullptr && cethercfmeventtable->has_operation());
}

std::string CISCOETHERCFMMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ETHER-CFM-MIB:CISCO-ETHER-CFM-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOETHERCFMMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOETHERCFMMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cecCfmEvents")
    {
        if(ceccfmevents == nullptr)
        {
            ceccfmevents = std::make_shared<CISCOETHERCFMMIB::Ceccfmevents>();
        }
        return ceccfmevents;
    }

    if(child_yang_name == "cEtherCfmEventTable")
    {
        if(cethercfmeventtable == nullptr)
        {
            cethercfmeventtable = std::make_shared<CISCOETHERCFMMIB::Cethercfmeventtable>();
        }
        return cethercfmeventtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOETHERCFMMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ceccfmevents != nullptr)
    {
        children["cecCfmEvents"] = ceccfmevents;
    }

    if(cethercfmeventtable != nullptr)
    {
        children["cEtherCfmEventTable"] = cethercfmeventtable;
    }

    return children;
}

void CISCOETHERCFMMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOETHERCFMMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOETHERCFMMIB::clone_ptr() const
{
    return std::make_shared<CISCOETHERCFMMIB>();
}

std::string CISCOETHERCFMMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOETHERCFMMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOETHERCFMMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOETHERCFMMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOETHERCFMMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cecCfmEvents" || name == "cEtherCfmEventTable")
        return true;
    return false;
}

CISCOETHERCFMMIB::Ceccfmevents::Ceccfmevents()
    :
    cethercfmmaxeventindex{YType::uint32, "cEtherCfmMaxEventIndex"}
{

    yang_name = "cecCfmEvents"; yang_parent_name = "CISCO-ETHER-CFM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOETHERCFMMIB::Ceccfmevents::~Ceccfmevents()
{
}

bool CISCOETHERCFMMIB::Ceccfmevents::has_data() const
{
    return cethercfmmaxeventindex.is_set;
}

bool CISCOETHERCFMMIB::Ceccfmevents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cethercfmmaxeventindex.yfilter);
}

std::string CISCOETHERCFMMIB::Ceccfmevents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ETHER-CFM-MIB:CISCO-ETHER-CFM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOETHERCFMMIB::Ceccfmevents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cecCfmEvents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOETHERCFMMIB::Ceccfmevents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cethercfmmaxeventindex.is_set || is_set(cethercfmmaxeventindex.yfilter)) leaf_name_data.push_back(cethercfmmaxeventindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOETHERCFMMIB::Ceccfmevents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOETHERCFMMIB::Ceccfmevents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOETHERCFMMIB::Ceccfmevents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cEtherCfmMaxEventIndex")
    {
        cethercfmmaxeventindex = value;
        cethercfmmaxeventindex.value_namespace = name_space;
        cethercfmmaxeventindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOETHERCFMMIB::Ceccfmevents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cEtherCfmMaxEventIndex")
    {
        cethercfmmaxeventindex.yfilter = yfilter;
    }
}

bool CISCOETHERCFMMIB::Ceccfmevents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEtherCfmMaxEventIndex")
        return true;
    return false;
}

CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmeventtable()
{

    yang_name = "cEtherCfmEventTable"; yang_parent_name = "CISCO-ETHER-CFM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOETHERCFMMIB::Cethercfmeventtable::~Cethercfmeventtable()
{
}

bool CISCOETHERCFMMIB::Cethercfmeventtable::has_data() const
{
    for (std::size_t index=0; index<cethercfmevententry.size(); index++)
    {
        if(cethercfmevententry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOETHERCFMMIB::Cethercfmeventtable::has_operation() const
{
    for (std::size_t index=0; index<cethercfmevententry.size(); index++)
    {
        if(cethercfmevententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOETHERCFMMIB::Cethercfmeventtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ETHER-CFM-MIB:CISCO-ETHER-CFM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOETHERCFMMIB::Cethercfmeventtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEtherCfmEventTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOETHERCFMMIB::Cethercfmeventtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOETHERCFMMIB::Cethercfmeventtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cEtherCfmEventEntry")
    {
        auto c = std::make_shared<CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry>();
        c->parent = this;
        cethercfmevententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOETHERCFMMIB::Cethercfmeventtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cethercfmevententry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOETHERCFMMIB::Cethercfmeventtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOETHERCFMMIB::Cethercfmeventtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOETHERCFMMIB::Cethercfmeventtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEtherCfmEventEntry")
        return true;
    return false;
}

CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmevententry()
    :
    cethercfmeventdomainindex{YType::uint32, "cEtherCfmEventDomainIndex"},
    cethercfmeventsvlan{YType::int32, "cEtherCfmEventSvlan"},
    cethercfmeventindex{YType::uint32, "cEtherCfmEventIndex"},
    cethercfmeventdomainname{YType::str, "cEtherCfmEventDomainName"},
    cethercfmeventtype{YType::enumeration, "cEtherCfmEventType"},
    cethercfmeventlastchange{YType::uint32, "cEtherCfmEventLastChange"},
    cethercfmeventserviceid{YType::str, "cEtherCfmEventServiceId"},
    cethercfmeventlclmepid{YType::uint32, "cEtherCfmEventLclMepid"},
    cethercfmeventlclmacaddress{YType::str, "cEtherCfmEventLclMacAddress"},
    cethercfmeventlclmepcount{YType::uint32, "cEtherCfmEventLclMepCount"},
    cethercfmeventlclifcount{YType::uint32, "cEtherCfmEventLclIfCount"},
    cethercfmeventrmtmepid{YType::uint32, "cEtherCfmEventRmtMepid"},
    cethercfmeventrmtmacaddress{YType::str, "cEtherCfmEventRmtMacAddress"},
    cethercfmeventrmtportstate{YType::enumeration, "cEtherCfmEventRmtPortState"},
    cethercfmeventrmtserviceid{YType::str, "cEtherCfmEventRmtServiceId"},
    cethercfmeventcode{YType::enumeration, "cEtherCfmEventCode"},
    cethercfmeventdeleterow{YType::enumeration, "cEtherCfmEventDeleteRow"}
{

    yang_name = "cEtherCfmEventEntry"; yang_parent_name = "cEtherCfmEventTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::~Cethercfmevententry()
{
}

bool CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::has_data() const
{
    return cethercfmeventdomainindex.is_set
	|| cethercfmeventsvlan.is_set
	|| cethercfmeventindex.is_set
	|| cethercfmeventdomainname.is_set
	|| cethercfmeventtype.is_set
	|| cethercfmeventlastchange.is_set
	|| cethercfmeventserviceid.is_set
	|| cethercfmeventlclmepid.is_set
	|| cethercfmeventlclmacaddress.is_set
	|| cethercfmeventlclmepcount.is_set
	|| cethercfmeventlclifcount.is_set
	|| cethercfmeventrmtmepid.is_set
	|| cethercfmeventrmtmacaddress.is_set
	|| cethercfmeventrmtportstate.is_set
	|| cethercfmeventrmtserviceid.is_set
	|| cethercfmeventcode.is_set
	|| cethercfmeventdeleterow.is_set;
}

bool CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cethercfmeventdomainindex.yfilter)
	|| ydk::is_set(cethercfmeventsvlan.yfilter)
	|| ydk::is_set(cethercfmeventindex.yfilter)
	|| ydk::is_set(cethercfmeventdomainname.yfilter)
	|| ydk::is_set(cethercfmeventtype.yfilter)
	|| ydk::is_set(cethercfmeventlastchange.yfilter)
	|| ydk::is_set(cethercfmeventserviceid.yfilter)
	|| ydk::is_set(cethercfmeventlclmepid.yfilter)
	|| ydk::is_set(cethercfmeventlclmacaddress.yfilter)
	|| ydk::is_set(cethercfmeventlclmepcount.yfilter)
	|| ydk::is_set(cethercfmeventlclifcount.yfilter)
	|| ydk::is_set(cethercfmeventrmtmepid.yfilter)
	|| ydk::is_set(cethercfmeventrmtmacaddress.yfilter)
	|| ydk::is_set(cethercfmeventrmtportstate.yfilter)
	|| ydk::is_set(cethercfmeventrmtserviceid.yfilter)
	|| ydk::is_set(cethercfmeventcode.yfilter)
	|| ydk::is_set(cethercfmeventdeleterow.yfilter);
}

std::string CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ETHER-CFM-MIB:CISCO-ETHER-CFM-MIB/cEtherCfmEventTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cEtherCfmEventEntry" <<"[cEtherCfmEventDomainIndex='" <<cethercfmeventdomainindex <<"']" <<"[cEtherCfmEventSvlan='" <<cethercfmeventsvlan <<"']" <<"[cEtherCfmEventIndex='" <<cethercfmeventindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cethercfmeventdomainindex.is_set || is_set(cethercfmeventdomainindex.yfilter)) leaf_name_data.push_back(cethercfmeventdomainindex.get_name_leafdata());
    if (cethercfmeventsvlan.is_set || is_set(cethercfmeventsvlan.yfilter)) leaf_name_data.push_back(cethercfmeventsvlan.get_name_leafdata());
    if (cethercfmeventindex.is_set || is_set(cethercfmeventindex.yfilter)) leaf_name_data.push_back(cethercfmeventindex.get_name_leafdata());
    if (cethercfmeventdomainname.is_set || is_set(cethercfmeventdomainname.yfilter)) leaf_name_data.push_back(cethercfmeventdomainname.get_name_leafdata());
    if (cethercfmeventtype.is_set || is_set(cethercfmeventtype.yfilter)) leaf_name_data.push_back(cethercfmeventtype.get_name_leafdata());
    if (cethercfmeventlastchange.is_set || is_set(cethercfmeventlastchange.yfilter)) leaf_name_data.push_back(cethercfmeventlastchange.get_name_leafdata());
    if (cethercfmeventserviceid.is_set || is_set(cethercfmeventserviceid.yfilter)) leaf_name_data.push_back(cethercfmeventserviceid.get_name_leafdata());
    if (cethercfmeventlclmepid.is_set || is_set(cethercfmeventlclmepid.yfilter)) leaf_name_data.push_back(cethercfmeventlclmepid.get_name_leafdata());
    if (cethercfmeventlclmacaddress.is_set || is_set(cethercfmeventlclmacaddress.yfilter)) leaf_name_data.push_back(cethercfmeventlclmacaddress.get_name_leafdata());
    if (cethercfmeventlclmepcount.is_set || is_set(cethercfmeventlclmepcount.yfilter)) leaf_name_data.push_back(cethercfmeventlclmepcount.get_name_leafdata());
    if (cethercfmeventlclifcount.is_set || is_set(cethercfmeventlclifcount.yfilter)) leaf_name_data.push_back(cethercfmeventlclifcount.get_name_leafdata());
    if (cethercfmeventrmtmepid.is_set || is_set(cethercfmeventrmtmepid.yfilter)) leaf_name_data.push_back(cethercfmeventrmtmepid.get_name_leafdata());
    if (cethercfmeventrmtmacaddress.is_set || is_set(cethercfmeventrmtmacaddress.yfilter)) leaf_name_data.push_back(cethercfmeventrmtmacaddress.get_name_leafdata());
    if (cethercfmeventrmtportstate.is_set || is_set(cethercfmeventrmtportstate.yfilter)) leaf_name_data.push_back(cethercfmeventrmtportstate.get_name_leafdata());
    if (cethercfmeventrmtserviceid.is_set || is_set(cethercfmeventrmtserviceid.yfilter)) leaf_name_data.push_back(cethercfmeventrmtserviceid.get_name_leafdata());
    if (cethercfmeventcode.is_set || is_set(cethercfmeventcode.yfilter)) leaf_name_data.push_back(cethercfmeventcode.get_name_leafdata());
    if (cethercfmeventdeleterow.is_set || is_set(cethercfmeventdeleterow.yfilter)) leaf_name_data.push_back(cethercfmeventdeleterow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cEtherCfmEventDomainIndex")
    {
        cethercfmeventdomainindex = value;
        cethercfmeventdomainindex.value_namespace = name_space;
        cethercfmeventdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventSvlan")
    {
        cethercfmeventsvlan = value;
        cethercfmeventsvlan.value_namespace = name_space;
        cethercfmeventsvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventIndex")
    {
        cethercfmeventindex = value;
        cethercfmeventindex.value_namespace = name_space;
        cethercfmeventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventDomainName")
    {
        cethercfmeventdomainname = value;
        cethercfmeventdomainname.value_namespace = name_space;
        cethercfmeventdomainname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventType")
    {
        cethercfmeventtype = value;
        cethercfmeventtype.value_namespace = name_space;
        cethercfmeventtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventLastChange")
    {
        cethercfmeventlastchange = value;
        cethercfmeventlastchange.value_namespace = name_space;
        cethercfmeventlastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventServiceId")
    {
        cethercfmeventserviceid = value;
        cethercfmeventserviceid.value_namespace = name_space;
        cethercfmeventserviceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventLclMepid")
    {
        cethercfmeventlclmepid = value;
        cethercfmeventlclmepid.value_namespace = name_space;
        cethercfmeventlclmepid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventLclMacAddress")
    {
        cethercfmeventlclmacaddress = value;
        cethercfmeventlclmacaddress.value_namespace = name_space;
        cethercfmeventlclmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventLclMepCount")
    {
        cethercfmeventlclmepcount = value;
        cethercfmeventlclmepcount.value_namespace = name_space;
        cethercfmeventlclmepcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventLclIfCount")
    {
        cethercfmeventlclifcount = value;
        cethercfmeventlclifcount.value_namespace = name_space;
        cethercfmeventlclifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventRmtMepid")
    {
        cethercfmeventrmtmepid = value;
        cethercfmeventrmtmepid.value_namespace = name_space;
        cethercfmeventrmtmepid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventRmtMacAddress")
    {
        cethercfmeventrmtmacaddress = value;
        cethercfmeventrmtmacaddress.value_namespace = name_space;
        cethercfmeventrmtmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventRmtPortState")
    {
        cethercfmeventrmtportstate = value;
        cethercfmeventrmtportstate.value_namespace = name_space;
        cethercfmeventrmtportstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventRmtServiceId")
    {
        cethercfmeventrmtserviceid = value;
        cethercfmeventrmtserviceid.value_namespace = name_space;
        cethercfmeventrmtserviceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventCode")
    {
        cethercfmeventcode = value;
        cethercfmeventcode.value_namespace = name_space;
        cethercfmeventcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cEtherCfmEventDeleteRow")
    {
        cethercfmeventdeleterow = value;
        cethercfmeventdeleterow.value_namespace = name_space;
        cethercfmeventdeleterow.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cEtherCfmEventDomainIndex")
    {
        cethercfmeventdomainindex.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventSvlan")
    {
        cethercfmeventsvlan.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventIndex")
    {
        cethercfmeventindex.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventDomainName")
    {
        cethercfmeventdomainname.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventType")
    {
        cethercfmeventtype.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventLastChange")
    {
        cethercfmeventlastchange.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventServiceId")
    {
        cethercfmeventserviceid.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventLclMepid")
    {
        cethercfmeventlclmepid.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventLclMacAddress")
    {
        cethercfmeventlclmacaddress.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventLclMepCount")
    {
        cethercfmeventlclmepcount.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventLclIfCount")
    {
        cethercfmeventlclifcount.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventRmtMepid")
    {
        cethercfmeventrmtmepid.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventRmtMacAddress")
    {
        cethercfmeventrmtmacaddress.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventRmtPortState")
    {
        cethercfmeventrmtportstate.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventRmtServiceId")
    {
        cethercfmeventrmtserviceid.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventCode")
    {
        cethercfmeventcode.yfilter = yfilter;
    }
    if(value_path == "cEtherCfmEventDeleteRow")
    {
        cethercfmeventdeleterow.yfilter = yfilter;
    }
}

bool CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cEtherCfmEventDomainIndex" || name == "cEtherCfmEventSvlan" || name == "cEtherCfmEventIndex" || name == "cEtherCfmEventDomainName" || name == "cEtherCfmEventType" || name == "cEtherCfmEventLastChange" || name == "cEtherCfmEventServiceId" || name == "cEtherCfmEventLclMepid" || name == "cEtherCfmEventLclMacAddress" || name == "cEtherCfmEventLclMepCount" || name == "cEtherCfmEventLclIfCount" || name == "cEtherCfmEventRmtMepid" || name == "cEtherCfmEventRmtMacAddress" || name == "cEtherCfmEventRmtPortState" || name == "cEtherCfmEventRmtServiceId" || name == "cEtherCfmEventCode" || name == "cEtherCfmEventDeleteRow")
        return true;
    return false;
}

const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventtype::mepUp {1, "mepUp"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventtype::mepDown {2, "mepDown"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventtype::xconnect {3, "xconnect"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventtype::loop {4, "loop"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventtype::config {5, "config"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventtype::xcheckMissing {6, "xcheckMissing"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventtype::xcheckUnknown {7, "xcheckUnknown"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventtype::xcheckServiceUp {8, "xcheckServiceUp"};

const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventrmtportstate::up {1, "up"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventrmtportstate::down {2, "down"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventrmtportstate::adminDown {3, "adminDown"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventrmtportstate::test {4, "test"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventrmtportstate::remoteExcessiveErrors {5, "remoteExcessiveErrors"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventrmtportstate::localExcessiveErrors {6, "localExcessiveErrors"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventrmtportstate::localNoData {7, "localNoData"};

const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventcode::new_ {1, "new"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventcode::returning {2, "returning"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventcode::portState {3, "portState"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventcode::lastGasp {4, "lastGasp"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventcode::timeout {5, "timeout"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventcode::configClear {6, "configClear"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventcode::loopClear {7, "loopClear"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventcode::xconnectClear {8, "xconnectClear"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventcode::unknownClear {9, "unknownClear"};

const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventdeleterow::noop {1, "noop"};
const Enum::YLeaf CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventdeleterow::delete_ {2, "delete"};


}
}

