
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_MEDIA_GATEWAY_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_MEDIA_GATEWAY_MIB {

CISCOMEDIAGATEWAYMIB::CISCOMEDIAGATEWAYMIB()
    :
    cmediagwtable(std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwtable>())
	,cmgwsignalprotocoltable(std::make_shared<CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable>())
	,cmediagwipconfigtable(std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable>())
	,cmediagwdomainnameconfigtable(std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable>())
	,cmediagwdnsipconfigtable(std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable>())
	,cmgwliftable(std::make_shared<CISCOMEDIAGATEWAYMIB::Cmgwliftable>())
	,cmediagwcallcontrolconfigtable(std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable>())
	,cmediagwrscstatstable(std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable>())
{
    cmediagwtable->parent = this;
    cmgwsignalprotocoltable->parent = this;
    cmediagwipconfigtable->parent = this;
    cmediagwdomainnameconfigtable->parent = this;
    cmediagwdnsipconfigtable->parent = this;
    cmgwliftable->parent = this;
    cmediagwcallcontrolconfigtable->parent = this;
    cmediagwrscstatstable->parent = this;

    yang_name = "CISCO-MEDIA-GATEWAY-MIB"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::~CISCOMEDIAGATEWAYMIB()
{
}

bool CISCOMEDIAGATEWAYMIB::has_data() const
{
    return (cmediagwtable !=  nullptr && cmediagwtable->has_data())
	|| (cmgwsignalprotocoltable !=  nullptr && cmgwsignalprotocoltable->has_data())
	|| (cmediagwipconfigtable !=  nullptr && cmediagwipconfigtable->has_data())
	|| (cmediagwdomainnameconfigtable !=  nullptr && cmediagwdomainnameconfigtable->has_data())
	|| (cmediagwdnsipconfigtable !=  nullptr && cmediagwdnsipconfigtable->has_data())
	|| (cmgwliftable !=  nullptr && cmgwliftable->has_data())
	|| (cmediagwcallcontrolconfigtable !=  nullptr && cmediagwcallcontrolconfigtable->has_data())
	|| (cmediagwrscstatstable !=  nullptr && cmediagwrscstatstable->has_data());
}

bool CISCOMEDIAGATEWAYMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cmediagwtable !=  nullptr && cmediagwtable->has_operation())
	|| (cmgwsignalprotocoltable !=  nullptr && cmgwsignalprotocoltable->has_operation())
	|| (cmediagwipconfigtable !=  nullptr && cmediagwipconfigtable->has_operation())
	|| (cmediagwdomainnameconfigtable !=  nullptr && cmediagwdomainnameconfigtable->has_operation())
	|| (cmediagwdnsipconfigtable !=  nullptr && cmediagwdnsipconfigtable->has_operation())
	|| (cmgwliftable !=  nullptr && cmgwliftable->has_operation())
	|| (cmediagwcallcontrolconfigtable !=  nullptr && cmediagwcallcontrolconfigtable->has_operation())
	|| (cmediagwrscstatstable !=  nullptr && cmediagwrscstatstable->has_operation());
}

std::string CISCOMEDIAGATEWAYMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwTable")
    {
        if(cmediagwtable == nullptr)
        {
            cmediagwtable = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwtable>();
        }
        return cmediagwtable;
    }

    if(child_yang_name == "cmgwSignalProtocolTable")
    {
        if(cmgwsignalprotocoltable == nullptr)
        {
            cmgwsignalprotocoltable = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable>();
        }
        return cmgwsignalprotocoltable;
    }

    if(child_yang_name == "cMediaGwIpConfigTable")
    {
        if(cmediagwipconfigtable == nullptr)
        {
            cmediagwipconfigtable = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable>();
        }
        return cmediagwipconfigtable;
    }

    if(child_yang_name == "cMediaGwDomainNameConfigTable")
    {
        if(cmediagwdomainnameconfigtable == nullptr)
        {
            cmediagwdomainnameconfigtable = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable>();
        }
        return cmediagwdomainnameconfigtable;
    }

    if(child_yang_name == "cMediaGwDnsIpConfigTable")
    {
        if(cmediagwdnsipconfigtable == nullptr)
        {
            cmediagwdnsipconfigtable = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable>();
        }
        return cmediagwdnsipconfigtable;
    }

    if(child_yang_name == "cmgwLifTable")
    {
        if(cmgwliftable == nullptr)
        {
            cmgwliftable = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmgwliftable>();
        }
        return cmgwliftable;
    }

    if(child_yang_name == "cMediaGwCallControlConfigTable")
    {
        if(cmediagwcallcontrolconfigtable == nullptr)
        {
            cmediagwcallcontrolconfigtable = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable>();
        }
        return cmediagwcallcontrolconfigtable;
    }

    if(child_yang_name == "cMediaGwRscStatsTable")
    {
        if(cmediagwrscstatstable == nullptr)
        {
            cmediagwrscstatstable = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable>();
        }
        return cmediagwrscstatstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cmediagwtable != nullptr)
    {
        children["cMediaGwTable"] = cmediagwtable;
    }

    if(cmgwsignalprotocoltable != nullptr)
    {
        children["cmgwSignalProtocolTable"] = cmgwsignalprotocoltable;
    }

    if(cmediagwipconfigtable != nullptr)
    {
        children["cMediaGwIpConfigTable"] = cmediagwipconfigtable;
    }

    if(cmediagwdomainnameconfigtable != nullptr)
    {
        children["cMediaGwDomainNameConfigTable"] = cmediagwdomainnameconfigtable;
    }

    if(cmediagwdnsipconfigtable != nullptr)
    {
        children["cMediaGwDnsIpConfigTable"] = cmediagwdnsipconfigtable;
    }

    if(cmgwliftable != nullptr)
    {
        children["cmgwLifTable"] = cmgwliftable;
    }

    if(cmediagwcallcontrolconfigtable != nullptr)
    {
        children["cMediaGwCallControlConfigTable"] = cmediagwcallcontrolconfigtable;
    }

    if(cmediagwrscstatstable != nullptr)
    {
        children["cMediaGwRscStatsTable"] = cmediagwrscstatstable;
    }

    return children;
}

void CISCOMEDIAGATEWAYMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::clone_ptr() const
{
    return std::make_shared<CISCOMEDIAGATEWAYMIB>();
}

std::string CISCOMEDIAGATEWAYMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOMEDIAGATEWAYMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOMEDIAGATEWAYMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOMEDIAGATEWAYMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOMEDIAGATEWAYMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cMediaGwTable" || name == "cmgwSignalProtocolTable" || name == "cMediaGwIpConfigTable" || name == "cMediaGwDomainNameConfigTable" || name == "cMediaGwDnsIpConfigTable" || name == "cmgwLifTable" || name == "cMediaGwCallControlConfigTable" || name == "cMediaGwRscStatsTable")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwtable()
{

    yang_name = "cMediaGwTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwtable::~Cmediagwtable()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwtable::has_data() const
{
    for (std::size_t index=0; index<cmediagwentry.size(); index++)
    {
        if(cmediagwentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwtable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwentry.size(); index++)
    {
        if(cmediagwentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmediagwtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmediagwtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwEntry")
    {
        auto c = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry>();
        c->parent = this;
        cmediagwentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmediagwtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cmediagwentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmediagwtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::Cmediagwtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cMediaGwEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::Cmediagwentry()
    :
    cmgwindex{YType::int32, "cmgwIndex"},
    cmgwdomainname{YType::str, "cmgwDomainName"},
    cmgwphysicalindex{YType::int32, "cmgwPhysicalIndex"},
    cmgwservicestate{YType::enumeration, "cmgwServiceState"},
    cmgwadminstate{YType::enumeration, "cmgwAdminState"},
    cmgwgracetime{YType::int32, "cmgwGraceTime"},
    cmgwvtmappingmode{YType::enumeration, "cmgwVtMappingMode"},
    cmgwsrcfilterenabled{YType::boolean, "cmgwSrcFilterEnabled"},
    cmgwlawinterceptenabled{YType::boolean, "cmgwLawInterceptEnabled"},
    cmgwv23enabled{YType::boolean, "cmgwV23Enabled"}
{

    yang_name = "cMediaGwEntry"; yang_parent_name = "cMediaGwTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::~Cmediagwentry()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::has_data() const
{
    return cmgwindex.is_set
	|| cmgwdomainname.is_set
	|| cmgwphysicalindex.is_set
	|| cmgwservicestate.is_set
	|| cmgwadminstate.is_set
	|| cmgwgracetime.is_set
	|| cmgwvtmappingmode.is_set
	|| cmgwsrcfilterenabled.is_set
	|| cmgwlawinterceptenabled.is_set
	|| cmgwv23enabled.is_set;
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmgwindex.yfilter)
	|| ydk::is_set(cmgwdomainname.yfilter)
	|| ydk::is_set(cmgwphysicalindex.yfilter)
	|| ydk::is_set(cmgwservicestate.yfilter)
	|| ydk::is_set(cmgwadminstate.yfilter)
	|| ydk::is_set(cmgwgracetime.yfilter)
	|| ydk::is_set(cmgwvtmappingmode.yfilter)
	|| ydk::is_set(cmgwsrcfilterenabled.yfilter)
	|| ydk::is_set(cmgwlawinterceptenabled.yfilter)
	|| ydk::is_set(cmgwv23enabled.yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwEntry" <<"[cmgwIndex='" <<cmgwindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.yfilter)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwdomainname.is_set || is_set(cmgwdomainname.yfilter)) leaf_name_data.push_back(cmgwdomainname.get_name_leafdata());
    if (cmgwphysicalindex.is_set || is_set(cmgwphysicalindex.yfilter)) leaf_name_data.push_back(cmgwphysicalindex.get_name_leafdata());
    if (cmgwservicestate.is_set || is_set(cmgwservicestate.yfilter)) leaf_name_data.push_back(cmgwservicestate.get_name_leafdata());
    if (cmgwadminstate.is_set || is_set(cmgwadminstate.yfilter)) leaf_name_data.push_back(cmgwadminstate.get_name_leafdata());
    if (cmgwgracetime.is_set || is_set(cmgwgracetime.yfilter)) leaf_name_data.push_back(cmgwgracetime.get_name_leafdata());
    if (cmgwvtmappingmode.is_set || is_set(cmgwvtmappingmode.yfilter)) leaf_name_data.push_back(cmgwvtmappingmode.get_name_leafdata());
    if (cmgwsrcfilterenabled.is_set || is_set(cmgwsrcfilterenabled.yfilter)) leaf_name_data.push_back(cmgwsrcfilterenabled.get_name_leafdata());
    if (cmgwlawinterceptenabled.is_set || is_set(cmgwlawinterceptenabled.yfilter)) leaf_name_data.push_back(cmgwlawinterceptenabled.get_name_leafdata());
    if (cmgwv23enabled.is_set || is_set(cmgwv23enabled.yfilter)) leaf_name_data.push_back(cmgwv23enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
        cmgwindex.value_namespace = name_space;
        cmgwindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwDomainName")
    {
        cmgwdomainname = value;
        cmgwdomainname.value_namespace = name_space;
        cmgwdomainname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwPhysicalIndex")
    {
        cmgwphysicalindex = value;
        cmgwphysicalindex.value_namespace = name_space;
        cmgwphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwServiceState")
    {
        cmgwservicestate = value;
        cmgwservicestate.value_namespace = name_space;
        cmgwservicestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwAdminState")
    {
        cmgwadminstate = value;
        cmgwadminstate.value_namespace = name_space;
        cmgwadminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwGraceTime")
    {
        cmgwgracetime = value;
        cmgwgracetime.value_namespace = name_space;
        cmgwgracetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwVtMappingMode")
    {
        cmgwvtmappingmode = value;
        cmgwvtmappingmode.value_namespace = name_space;
        cmgwvtmappingmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwSrcFilterEnabled")
    {
        cmgwsrcfilterenabled = value;
        cmgwsrcfilterenabled.value_namespace = name_space;
        cmgwsrcfilterenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwLawInterceptEnabled")
    {
        cmgwlawinterceptenabled = value;
        cmgwlawinterceptenabled.value_namespace = name_space;
        cmgwlawinterceptenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwV23Enabled")
    {
        cmgwv23enabled = value;
        cmgwv23enabled.value_namespace = name_space;
        cmgwv23enabled.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex.yfilter = yfilter;
    }
    if(value_path == "cmgwDomainName")
    {
        cmgwdomainname.yfilter = yfilter;
    }
    if(value_path == "cmgwPhysicalIndex")
    {
        cmgwphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cmgwServiceState")
    {
        cmgwservicestate.yfilter = yfilter;
    }
    if(value_path == "cmgwAdminState")
    {
        cmgwadminstate.yfilter = yfilter;
    }
    if(value_path == "cmgwGraceTime")
    {
        cmgwgracetime.yfilter = yfilter;
    }
    if(value_path == "cmgwVtMappingMode")
    {
        cmgwvtmappingmode.yfilter = yfilter;
    }
    if(value_path == "cmgwSrcFilterEnabled")
    {
        cmgwsrcfilterenabled.yfilter = yfilter;
    }
    if(value_path == "cmgwLawInterceptEnabled")
    {
        cmgwlawinterceptenabled.yfilter = yfilter;
    }
    if(value_path == "cmgwV23Enabled")
    {
        cmgwv23enabled.yfilter = yfilter;
    }
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cmgwDomainName" || name == "cmgwPhysicalIndex" || name == "cmgwServiceState" || name == "cmgwAdminState" || name == "cmgwGraceTime" || name == "cmgwVtMappingMode" || name == "cmgwSrcFilterEnabled" || name == "cmgwLawInterceptEnabled" || name == "cmgwV23Enabled")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocoltable()
{

    yang_name = "cmgwSignalProtocolTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::~Cmgwsignalprotocoltable()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::has_data() const
{
    for (std::size_t index=0; index<cmgwsignalprotocolentry.size(); index++)
    {
        if(cmgwsignalprotocolentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::has_operation() const
{
    for (std::size_t index=0; index<cmgwsignalprotocolentry.size(); index++)
    {
        if(cmgwsignalprotocolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmgwSignalProtocolTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmgwSignalProtocolEntry")
    {
        auto c = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry>();
        c->parent = this;
        cmgwsignalprotocolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cmgwsignalprotocolentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwSignalProtocolEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::Cmgwsignalprotocolentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmgwsignalprotocolindex{YType::int32, "cmgwSignalProtocolIndex"},
    cmgwsignalprotocol{YType::enumeration, "cmgwSignalProtocol"},
    cmgwsignalprotocolversion{YType::str, "cmgwSignalProtocolVersion"},
    cmgwsignalprotocolport{YType::int32, "cmgwSignalProtocolPort"},
    cmgwsignalmgcprotocolport{YType::uint16, "cmgwSignalMgcProtocolPort"},
    cmgwsignalprotocolpreference{YType::int32, "cmgwSignalProtocolPreference"},
    cmgwsignalprotocolconfigver{YType::str, "cmgwSignalProtocolConfigVer"}
{

    yang_name = "cmgwSignalProtocolEntry"; yang_parent_name = "cmgwSignalProtocolTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::~Cmgwsignalprotocolentry()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::has_data() const
{
    return cmgwindex.is_set
	|| cmgwsignalprotocolindex.is_set
	|| cmgwsignalprotocol.is_set
	|| cmgwsignalprotocolversion.is_set
	|| cmgwsignalprotocolport.is_set
	|| cmgwsignalmgcprotocolport.is_set
	|| cmgwsignalprotocolpreference.is_set
	|| cmgwsignalprotocolconfigver.is_set;
}

bool CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmgwindex.yfilter)
	|| ydk::is_set(cmgwsignalprotocolindex.yfilter)
	|| ydk::is_set(cmgwsignalprotocol.yfilter)
	|| ydk::is_set(cmgwsignalprotocolversion.yfilter)
	|| ydk::is_set(cmgwsignalprotocolport.yfilter)
	|| ydk::is_set(cmgwsignalmgcprotocolport.yfilter)
	|| ydk::is_set(cmgwsignalprotocolpreference.yfilter)
	|| ydk::is_set(cmgwsignalprotocolconfigver.yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cmgwSignalProtocolTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmgwSignalProtocolEntry" <<"[cmgwIndex='" <<cmgwindex <<"']" <<"[cmgwSignalProtocolIndex='" <<cmgwsignalprotocolindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.yfilter)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwsignalprotocolindex.is_set || is_set(cmgwsignalprotocolindex.yfilter)) leaf_name_data.push_back(cmgwsignalprotocolindex.get_name_leafdata());
    if (cmgwsignalprotocol.is_set || is_set(cmgwsignalprotocol.yfilter)) leaf_name_data.push_back(cmgwsignalprotocol.get_name_leafdata());
    if (cmgwsignalprotocolversion.is_set || is_set(cmgwsignalprotocolversion.yfilter)) leaf_name_data.push_back(cmgwsignalprotocolversion.get_name_leafdata());
    if (cmgwsignalprotocolport.is_set || is_set(cmgwsignalprotocolport.yfilter)) leaf_name_data.push_back(cmgwsignalprotocolport.get_name_leafdata());
    if (cmgwsignalmgcprotocolport.is_set || is_set(cmgwsignalmgcprotocolport.yfilter)) leaf_name_data.push_back(cmgwsignalmgcprotocolport.get_name_leafdata());
    if (cmgwsignalprotocolpreference.is_set || is_set(cmgwsignalprotocolpreference.yfilter)) leaf_name_data.push_back(cmgwsignalprotocolpreference.get_name_leafdata());
    if (cmgwsignalprotocolconfigver.is_set || is_set(cmgwsignalprotocolconfigver.yfilter)) leaf_name_data.push_back(cmgwsignalprotocolconfigver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
        cmgwindex.value_namespace = name_space;
        cmgwindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwSignalProtocolIndex")
    {
        cmgwsignalprotocolindex = value;
        cmgwsignalprotocolindex.value_namespace = name_space;
        cmgwsignalprotocolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwSignalProtocol")
    {
        cmgwsignalprotocol = value;
        cmgwsignalprotocol.value_namespace = name_space;
        cmgwsignalprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwSignalProtocolVersion")
    {
        cmgwsignalprotocolversion = value;
        cmgwsignalprotocolversion.value_namespace = name_space;
        cmgwsignalprotocolversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwSignalProtocolPort")
    {
        cmgwsignalprotocolport = value;
        cmgwsignalprotocolport.value_namespace = name_space;
        cmgwsignalprotocolport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwSignalMgcProtocolPort")
    {
        cmgwsignalmgcprotocolport = value;
        cmgwsignalmgcprotocolport.value_namespace = name_space;
        cmgwsignalmgcprotocolport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwSignalProtocolPreference")
    {
        cmgwsignalprotocolpreference = value;
        cmgwsignalprotocolpreference.value_namespace = name_space;
        cmgwsignalprotocolpreference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwSignalProtocolConfigVer")
    {
        cmgwsignalprotocolconfigver = value;
        cmgwsignalprotocolconfigver.value_namespace = name_space;
        cmgwsignalprotocolconfigver.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex.yfilter = yfilter;
    }
    if(value_path == "cmgwSignalProtocolIndex")
    {
        cmgwsignalprotocolindex.yfilter = yfilter;
    }
    if(value_path == "cmgwSignalProtocol")
    {
        cmgwsignalprotocol.yfilter = yfilter;
    }
    if(value_path == "cmgwSignalProtocolVersion")
    {
        cmgwsignalprotocolversion.yfilter = yfilter;
    }
    if(value_path == "cmgwSignalProtocolPort")
    {
        cmgwsignalprotocolport.yfilter = yfilter;
    }
    if(value_path == "cmgwSignalMgcProtocolPort")
    {
        cmgwsignalmgcprotocolport.yfilter = yfilter;
    }
    if(value_path == "cmgwSignalProtocolPreference")
    {
        cmgwsignalprotocolpreference.yfilter = yfilter;
    }
    if(value_path == "cmgwSignalProtocolConfigVer")
    {
        cmgwsignalprotocolconfigver.yfilter = yfilter;
    }
}

bool CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cmgwSignalProtocolIndex" || name == "cmgwSignalProtocol" || name == "cmgwSignalProtocolVersion" || name == "cmgwSignalProtocolPort" || name == "cmgwSignalMgcProtocolPort" || name == "cmgwSignalProtocolPreference" || name == "cmgwSignalProtocolConfigVer")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::Cmediagwipconfigtable()
{

    yang_name = "cMediaGwIpConfigTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::~Cmediagwipconfigtable()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::has_data() const
{
    for (std::size_t index=0; index<cmediagwipconfigentry.size(); index++)
    {
        if(cmediagwipconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwipconfigentry.size(); index++)
    {
        if(cmediagwipconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwIpConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwIpConfigEntry")
    {
        auto c = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::Cmediagwipconfigentry>();
        c->parent = this;
        cmediagwipconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cmediagwipconfigentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cMediaGwIpConfigEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::Cmediagwipconfigentry::Cmediagwipconfigentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmgwipconfigindex{YType::int32, "cmgwIpConfigIndex"},
    cmgwipconfigifindex{YType::int32, "cmgwIpConfigIfIndex"},
    cmgwipconfigvpi{YType::int32, "cmgwIpConfigVpi"},
    cmgwipconfigvci{YType::int32, "cmgwIpConfigVci"},
    cmgwipconfigaddrtype{YType::enumeration, "cmgwIpConfigAddrType"},
    cmgwipconfigaddress{YType::str, "cmgwIpConfigAddress"},
    cmgwipconfigsubnetmask{YType::uint32, "cmgwIpConfigSubnetMask"},
    cmgwipconfigdefaultgwip{YType::boolean, "cmgwIpConfigDefaultGwIp"},
    cmgwipconfigforremotemapping{YType::boolean, "cmgwIpConfigForRemoteMapping"},
    cmgwipconfigrowstatus{YType::enumeration, "cmgwIpConfigRowStatus"}
{

    yang_name = "cMediaGwIpConfigEntry"; yang_parent_name = "cMediaGwIpConfigTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::Cmediagwipconfigentry::~Cmediagwipconfigentry()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::Cmediagwipconfigentry::has_data() const
{
    return cmgwindex.is_set
	|| cmgwipconfigindex.is_set
	|| cmgwipconfigifindex.is_set
	|| cmgwipconfigvpi.is_set
	|| cmgwipconfigvci.is_set
	|| cmgwipconfigaddrtype.is_set
	|| cmgwipconfigaddress.is_set
	|| cmgwipconfigsubnetmask.is_set
	|| cmgwipconfigdefaultgwip.is_set
	|| cmgwipconfigforremotemapping.is_set
	|| cmgwipconfigrowstatus.is_set;
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::Cmediagwipconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmgwindex.yfilter)
	|| ydk::is_set(cmgwipconfigindex.yfilter)
	|| ydk::is_set(cmgwipconfigifindex.yfilter)
	|| ydk::is_set(cmgwipconfigvpi.yfilter)
	|| ydk::is_set(cmgwipconfigvci.yfilter)
	|| ydk::is_set(cmgwipconfigaddrtype.yfilter)
	|| ydk::is_set(cmgwipconfigaddress.yfilter)
	|| ydk::is_set(cmgwipconfigsubnetmask.yfilter)
	|| ydk::is_set(cmgwipconfigdefaultgwip.yfilter)
	|| ydk::is_set(cmgwipconfigforremotemapping.yfilter)
	|| ydk::is_set(cmgwipconfigrowstatus.yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::Cmediagwipconfigentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwIpConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::Cmediagwipconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwIpConfigEntry" <<"[cmgwIndex='" <<cmgwindex <<"']" <<"[cmgwIpConfigIndex='" <<cmgwipconfigindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::Cmediagwipconfigentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.yfilter)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwipconfigindex.is_set || is_set(cmgwipconfigindex.yfilter)) leaf_name_data.push_back(cmgwipconfigindex.get_name_leafdata());
    if (cmgwipconfigifindex.is_set || is_set(cmgwipconfigifindex.yfilter)) leaf_name_data.push_back(cmgwipconfigifindex.get_name_leafdata());
    if (cmgwipconfigvpi.is_set || is_set(cmgwipconfigvpi.yfilter)) leaf_name_data.push_back(cmgwipconfigvpi.get_name_leafdata());
    if (cmgwipconfigvci.is_set || is_set(cmgwipconfigvci.yfilter)) leaf_name_data.push_back(cmgwipconfigvci.get_name_leafdata());
    if (cmgwipconfigaddrtype.is_set || is_set(cmgwipconfigaddrtype.yfilter)) leaf_name_data.push_back(cmgwipconfigaddrtype.get_name_leafdata());
    if (cmgwipconfigaddress.is_set || is_set(cmgwipconfigaddress.yfilter)) leaf_name_data.push_back(cmgwipconfigaddress.get_name_leafdata());
    if (cmgwipconfigsubnetmask.is_set || is_set(cmgwipconfigsubnetmask.yfilter)) leaf_name_data.push_back(cmgwipconfigsubnetmask.get_name_leafdata());
    if (cmgwipconfigdefaultgwip.is_set || is_set(cmgwipconfigdefaultgwip.yfilter)) leaf_name_data.push_back(cmgwipconfigdefaultgwip.get_name_leafdata());
    if (cmgwipconfigforremotemapping.is_set || is_set(cmgwipconfigforremotemapping.yfilter)) leaf_name_data.push_back(cmgwipconfigforremotemapping.get_name_leafdata());
    if (cmgwipconfigrowstatus.is_set || is_set(cmgwipconfigrowstatus.yfilter)) leaf_name_data.push_back(cmgwipconfigrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::Cmediagwipconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::Cmediagwipconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::Cmediagwipconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
        cmgwindex.value_namespace = name_space;
        cmgwindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwIpConfigIndex")
    {
        cmgwipconfigindex = value;
        cmgwipconfigindex.value_namespace = name_space;
        cmgwipconfigindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwIpConfigIfIndex")
    {
        cmgwipconfigifindex = value;
        cmgwipconfigifindex.value_namespace = name_space;
        cmgwipconfigifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwIpConfigVpi")
    {
        cmgwipconfigvpi = value;
        cmgwipconfigvpi.value_namespace = name_space;
        cmgwipconfigvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwIpConfigVci")
    {
        cmgwipconfigvci = value;
        cmgwipconfigvci.value_namespace = name_space;
        cmgwipconfigvci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwIpConfigAddrType")
    {
        cmgwipconfigaddrtype = value;
        cmgwipconfigaddrtype.value_namespace = name_space;
        cmgwipconfigaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwIpConfigAddress")
    {
        cmgwipconfigaddress = value;
        cmgwipconfigaddress.value_namespace = name_space;
        cmgwipconfigaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwIpConfigSubnetMask")
    {
        cmgwipconfigsubnetmask = value;
        cmgwipconfigsubnetmask.value_namespace = name_space;
        cmgwipconfigsubnetmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwIpConfigDefaultGwIp")
    {
        cmgwipconfigdefaultgwip = value;
        cmgwipconfigdefaultgwip.value_namespace = name_space;
        cmgwipconfigdefaultgwip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwIpConfigForRemoteMapping")
    {
        cmgwipconfigforremotemapping = value;
        cmgwipconfigforremotemapping.value_namespace = name_space;
        cmgwipconfigforremotemapping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwIpConfigRowStatus")
    {
        cmgwipconfigrowstatus = value;
        cmgwipconfigrowstatus.value_namespace = name_space;
        cmgwipconfigrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::Cmediagwipconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex.yfilter = yfilter;
    }
    if(value_path == "cmgwIpConfigIndex")
    {
        cmgwipconfigindex.yfilter = yfilter;
    }
    if(value_path == "cmgwIpConfigIfIndex")
    {
        cmgwipconfigifindex.yfilter = yfilter;
    }
    if(value_path == "cmgwIpConfigVpi")
    {
        cmgwipconfigvpi.yfilter = yfilter;
    }
    if(value_path == "cmgwIpConfigVci")
    {
        cmgwipconfigvci.yfilter = yfilter;
    }
    if(value_path == "cmgwIpConfigAddrType")
    {
        cmgwipconfigaddrtype.yfilter = yfilter;
    }
    if(value_path == "cmgwIpConfigAddress")
    {
        cmgwipconfigaddress.yfilter = yfilter;
    }
    if(value_path == "cmgwIpConfigSubnetMask")
    {
        cmgwipconfigsubnetmask.yfilter = yfilter;
    }
    if(value_path == "cmgwIpConfigDefaultGwIp")
    {
        cmgwipconfigdefaultgwip.yfilter = yfilter;
    }
    if(value_path == "cmgwIpConfigForRemoteMapping")
    {
        cmgwipconfigforremotemapping.yfilter = yfilter;
    }
    if(value_path == "cmgwIpConfigRowStatus")
    {
        cmgwipconfigrowstatus.yfilter = yfilter;
    }
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwipconfigtable::Cmediagwipconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cmgwIpConfigIndex" || name == "cmgwIpConfigIfIndex" || name == "cmgwIpConfigVpi" || name == "cmgwIpConfigVci" || name == "cmgwIpConfigAddrType" || name == "cmgwIpConfigAddress" || name == "cmgwIpConfigSubnetMask" || name == "cmgwIpConfigDefaultGwIp" || name == "cmgwIpConfigForRemoteMapping" || name == "cmgwIpConfigRowStatus")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigtable()
{

    yang_name = "cMediaGwDomainNameConfigTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::~Cmediagwdomainnameconfigtable()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::has_data() const
{
    for (std::size_t index=0; index<cmediagwdomainnameconfigentry.size(); index++)
    {
        if(cmediagwdomainnameconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwdomainnameconfigentry.size(); index++)
    {
        if(cmediagwdomainnameconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwDomainNameConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwDomainNameConfigEntry")
    {
        auto c = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry>();
        c->parent = this;
        cmediagwdomainnameconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cmediagwdomainnameconfigentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cMediaGwDomainNameConfigEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::Cmediagwdomainnameconfigentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmgwconfigdomainnameindex{YType::int32, "cmgwConfigDomainNameIndex"},
    cmgwconfigdomainnameentity{YType::enumeration, "cmgwConfigDomainNameEntity"},
    cmgwconfigdomainname{YType::str, "cmgwConfigDomainName"},
    cmgwconfigdomainnamerowstatus{YType::enumeration, "cmgwConfigDomainNameRowStatus"}
{

    yang_name = "cMediaGwDomainNameConfigEntry"; yang_parent_name = "cMediaGwDomainNameConfigTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::~Cmediagwdomainnameconfigentry()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::has_data() const
{
    return cmgwindex.is_set
	|| cmgwconfigdomainnameindex.is_set
	|| cmgwconfigdomainnameentity.is_set
	|| cmgwconfigdomainname.is_set
	|| cmgwconfigdomainnamerowstatus.is_set;
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmgwindex.yfilter)
	|| ydk::is_set(cmgwconfigdomainnameindex.yfilter)
	|| ydk::is_set(cmgwconfigdomainnameentity.yfilter)
	|| ydk::is_set(cmgwconfigdomainname.yfilter)
	|| ydk::is_set(cmgwconfigdomainnamerowstatus.yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwDomainNameConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwDomainNameConfigEntry" <<"[cmgwIndex='" <<cmgwindex <<"']" <<"[cmgwConfigDomainNameIndex='" <<cmgwconfigdomainnameindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.yfilter)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwconfigdomainnameindex.is_set || is_set(cmgwconfigdomainnameindex.yfilter)) leaf_name_data.push_back(cmgwconfigdomainnameindex.get_name_leafdata());
    if (cmgwconfigdomainnameentity.is_set || is_set(cmgwconfigdomainnameentity.yfilter)) leaf_name_data.push_back(cmgwconfigdomainnameentity.get_name_leafdata());
    if (cmgwconfigdomainname.is_set || is_set(cmgwconfigdomainname.yfilter)) leaf_name_data.push_back(cmgwconfigdomainname.get_name_leafdata());
    if (cmgwconfigdomainnamerowstatus.is_set || is_set(cmgwconfigdomainnamerowstatus.yfilter)) leaf_name_data.push_back(cmgwconfigdomainnamerowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
        cmgwindex.value_namespace = name_space;
        cmgwindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwConfigDomainNameIndex")
    {
        cmgwconfigdomainnameindex = value;
        cmgwconfigdomainnameindex.value_namespace = name_space;
        cmgwconfigdomainnameindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwConfigDomainNameEntity")
    {
        cmgwconfigdomainnameentity = value;
        cmgwconfigdomainnameentity.value_namespace = name_space;
        cmgwconfigdomainnameentity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwConfigDomainName")
    {
        cmgwconfigdomainname = value;
        cmgwconfigdomainname.value_namespace = name_space;
        cmgwconfigdomainname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwConfigDomainNameRowStatus")
    {
        cmgwconfigdomainnamerowstatus = value;
        cmgwconfigdomainnamerowstatus.value_namespace = name_space;
        cmgwconfigdomainnamerowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex.yfilter = yfilter;
    }
    if(value_path == "cmgwConfigDomainNameIndex")
    {
        cmgwconfigdomainnameindex.yfilter = yfilter;
    }
    if(value_path == "cmgwConfigDomainNameEntity")
    {
        cmgwconfigdomainnameentity.yfilter = yfilter;
    }
    if(value_path == "cmgwConfigDomainName")
    {
        cmgwconfigdomainname.yfilter = yfilter;
    }
    if(value_path == "cmgwConfigDomainNameRowStatus")
    {
        cmgwconfigdomainnamerowstatus.yfilter = yfilter;
    }
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cmgwConfigDomainNameIndex" || name == "cmgwConfigDomainNameEntity" || name == "cmgwConfigDomainName" || name == "cmgwConfigDomainNameRowStatus")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigtable()
{

    yang_name = "cMediaGwDnsIpConfigTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::~Cmediagwdnsipconfigtable()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::has_data() const
{
    for (std::size_t index=0; index<cmediagwdnsipconfigentry.size(); index++)
    {
        if(cmediagwdnsipconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwdnsipconfigentry.size(); index++)
    {
        if(cmediagwdnsipconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwDnsIpConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwDnsIpConfigEntry")
    {
        auto c = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry>();
        c->parent = this;
        cmediagwdnsipconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cmediagwdnsipconfigentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cMediaGwDnsIpConfigEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::Cmediagwdnsipconfigentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmgwdnsipindex{YType::int32, "cmgwDnsIpIndex"},
    cmgwdnsdomainname{YType::str, "cmgwDnsDomainName"},
    cmgwdnsiptype{YType::enumeration, "cmgwDnsIpType"},
    cmgwdnsip{YType::str, "cmgwDnsIp"},
    cmgwdnsiprowstatus{YType::enumeration, "cmgwDnsIpRowStatus"}
{

    yang_name = "cMediaGwDnsIpConfigEntry"; yang_parent_name = "cMediaGwDnsIpConfigTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::~Cmediagwdnsipconfigentry()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::has_data() const
{
    return cmgwindex.is_set
	|| cmgwdnsipindex.is_set
	|| cmgwdnsdomainname.is_set
	|| cmgwdnsiptype.is_set
	|| cmgwdnsip.is_set
	|| cmgwdnsiprowstatus.is_set;
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmgwindex.yfilter)
	|| ydk::is_set(cmgwdnsipindex.yfilter)
	|| ydk::is_set(cmgwdnsdomainname.yfilter)
	|| ydk::is_set(cmgwdnsiptype.yfilter)
	|| ydk::is_set(cmgwdnsip.yfilter)
	|| ydk::is_set(cmgwdnsiprowstatus.yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwDnsIpConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwDnsIpConfigEntry" <<"[cmgwIndex='" <<cmgwindex <<"']" <<"[cmgwDnsIpIndex='" <<cmgwdnsipindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.yfilter)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwdnsipindex.is_set || is_set(cmgwdnsipindex.yfilter)) leaf_name_data.push_back(cmgwdnsipindex.get_name_leafdata());
    if (cmgwdnsdomainname.is_set || is_set(cmgwdnsdomainname.yfilter)) leaf_name_data.push_back(cmgwdnsdomainname.get_name_leafdata());
    if (cmgwdnsiptype.is_set || is_set(cmgwdnsiptype.yfilter)) leaf_name_data.push_back(cmgwdnsiptype.get_name_leafdata());
    if (cmgwdnsip.is_set || is_set(cmgwdnsip.yfilter)) leaf_name_data.push_back(cmgwdnsip.get_name_leafdata());
    if (cmgwdnsiprowstatus.is_set || is_set(cmgwdnsiprowstatus.yfilter)) leaf_name_data.push_back(cmgwdnsiprowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
        cmgwindex.value_namespace = name_space;
        cmgwindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwDnsIpIndex")
    {
        cmgwdnsipindex = value;
        cmgwdnsipindex.value_namespace = name_space;
        cmgwdnsipindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwDnsDomainName")
    {
        cmgwdnsdomainname = value;
        cmgwdnsdomainname.value_namespace = name_space;
        cmgwdnsdomainname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwDnsIpType")
    {
        cmgwdnsiptype = value;
        cmgwdnsiptype.value_namespace = name_space;
        cmgwdnsiptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwDnsIp")
    {
        cmgwdnsip = value;
        cmgwdnsip.value_namespace = name_space;
        cmgwdnsip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwDnsIpRowStatus")
    {
        cmgwdnsiprowstatus = value;
        cmgwdnsiprowstatus.value_namespace = name_space;
        cmgwdnsiprowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex.yfilter = yfilter;
    }
    if(value_path == "cmgwDnsIpIndex")
    {
        cmgwdnsipindex.yfilter = yfilter;
    }
    if(value_path == "cmgwDnsDomainName")
    {
        cmgwdnsdomainname.yfilter = yfilter;
    }
    if(value_path == "cmgwDnsIpType")
    {
        cmgwdnsiptype.yfilter = yfilter;
    }
    if(value_path == "cmgwDnsIp")
    {
        cmgwdnsip.yfilter = yfilter;
    }
    if(value_path == "cmgwDnsIpRowStatus")
    {
        cmgwdnsiprowstatus.yfilter = yfilter;
    }
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cmgwDnsIpIndex" || name == "cmgwDnsDomainName" || name == "cmgwDnsIpType" || name == "cmgwDnsIp" || name == "cmgwDnsIpRowStatus")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmgwliftable::Cmgwliftable()
{

    yang_name = "cmgwLifTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmgwliftable::~Cmgwliftable()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmgwliftable::has_data() const
{
    for (std::size_t index=0; index<cmgwlifentry.size(); index++)
    {
        if(cmgwlifentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::Cmgwliftable::has_operation() const
{
    for (std::size_t index=0; index<cmgwlifentry.size(); index++)
    {
        if(cmgwlifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmgwliftable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmgwliftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmgwLifTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmgwliftable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmgwliftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmgwLifEntry")
    {
        auto c = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmgwliftable::Cmgwlifentry>();
        c->parent = this;
        cmgwlifentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmgwliftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cmgwlifentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmgwliftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::Cmgwliftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::Cmgwliftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwLifEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmgwliftable::Cmgwlifentry::Cmgwlifentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmgwlifnumber{YType::uint32, "cmgwLifNumber"},
    cmgwlifpvccount{YType::uint32, "cmgwLifPvcCount"},
    cmgwlifvoiceifcount{YType::uint32, "cmgwLifVoiceIfCount"}
{

    yang_name = "cmgwLifEntry"; yang_parent_name = "cmgwLifTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmgwliftable::Cmgwlifentry::~Cmgwlifentry()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmgwliftable::Cmgwlifentry::has_data() const
{
    return cmgwindex.is_set
	|| cmgwlifnumber.is_set
	|| cmgwlifpvccount.is_set
	|| cmgwlifvoiceifcount.is_set;
}

bool CISCOMEDIAGATEWAYMIB::Cmgwliftable::Cmgwlifentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmgwindex.yfilter)
	|| ydk::is_set(cmgwlifnumber.yfilter)
	|| ydk::is_set(cmgwlifpvccount.yfilter)
	|| ydk::is_set(cmgwlifvoiceifcount.yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmgwliftable::Cmgwlifentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cmgwLifTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmgwliftable::Cmgwlifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmgwLifEntry" <<"[cmgwIndex='" <<cmgwindex <<"']" <<"[cmgwLifNumber='" <<cmgwlifnumber <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmgwliftable::Cmgwlifentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.yfilter)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwlifnumber.is_set || is_set(cmgwlifnumber.yfilter)) leaf_name_data.push_back(cmgwlifnumber.get_name_leafdata());
    if (cmgwlifpvccount.is_set || is_set(cmgwlifpvccount.yfilter)) leaf_name_data.push_back(cmgwlifpvccount.get_name_leafdata());
    if (cmgwlifvoiceifcount.is_set || is_set(cmgwlifvoiceifcount.yfilter)) leaf_name_data.push_back(cmgwlifvoiceifcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmgwliftable::Cmgwlifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmgwliftable::Cmgwlifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmgwliftable::Cmgwlifentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
        cmgwindex.value_namespace = name_space;
        cmgwindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwLifNumber")
    {
        cmgwlifnumber = value;
        cmgwlifnumber.value_namespace = name_space;
        cmgwlifnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwLifPvcCount")
    {
        cmgwlifpvccount = value;
        cmgwlifpvccount.value_namespace = name_space;
        cmgwlifpvccount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwLifVoiceIfCount")
    {
        cmgwlifvoiceifcount = value;
        cmgwlifvoiceifcount.value_namespace = name_space;
        cmgwlifvoiceifcount.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOMEDIAGATEWAYMIB::Cmgwliftable::Cmgwlifentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex.yfilter = yfilter;
    }
    if(value_path == "cmgwLifNumber")
    {
        cmgwlifnumber.yfilter = yfilter;
    }
    if(value_path == "cmgwLifPvcCount")
    {
        cmgwlifpvccount.yfilter = yfilter;
    }
    if(value_path == "cmgwLifVoiceIfCount")
    {
        cmgwlifvoiceifcount.yfilter = yfilter;
    }
}

bool CISCOMEDIAGATEWAYMIB::Cmgwliftable::Cmgwlifentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cmgwLifNumber" || name == "cmgwLifPvcCount" || name == "cmgwLifVoiceIfCount")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigtable()
{

    yang_name = "cMediaGwCallControlConfigTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::~Cmediagwcallcontrolconfigtable()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::has_data() const
{
    for (std::size_t index=0; index<cmediagwcallcontrolconfigentry.size(); index++)
    {
        if(cmediagwcallcontrolconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwcallcontrolconfigentry.size(); index++)
    {
        if(cmediagwcallcontrolconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwCallControlConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwCallControlConfigEntry")
    {
        auto c = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry>();
        c->parent = this;
        cmediagwcallcontrolconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cmediagwcallcontrolconfigentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cMediaGwCallControlConfigEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::Cmediagwcallcontrolconfigentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmediagwcccfgcontroltos{YType::uint32, "cMediaGwCcCfgControlTos"},
    cmediagwcccfgbearertos{YType::uint32, "cMediaGwCcCfgBearerTos"},
    cmediagwcccfgntepayload{YType::uint32, "cMediaGwCcCfgNtePayload"},
    cmediagwcccfgnsepayload{YType::uint32, "cMediaGwCcCfgNsePayload"},
    cmediagwcccfgnseresptimer{YType::uint32, "cMediaGwCcCfgNseRespTimer"},
    cmediagwcccfgvbdjitterdelaymode{YType::enumeration, "cMediaGwCcCfgVbdJitterDelayMode"},
    cmediagwcccfgvbdjittermaxdelay{YType::uint32, "cMediaGwCcCfgVbdJitterMaxDelay"},
    cmediagwcccfgvbdjitternomdelay{YType::uint32, "cMediaGwCcCfgVbdJitterNomDelay"},
    cmediagwcccfgvbdjittermindelay{YType::uint32, "cMediaGwCcCfgVbdJitterMinDelay"},
    cmediagwcccfgdefaulttoneplanid{YType::uint32, "cMediaGwCcCfgDefaultTonePlanId"},
    cmediagwcccfgdescrinfoenabled{YType::boolean, "cMediaGwCcCfgDescrInfoEnabled"},
    cmediagwcccfgdsnameprefix{YType::str, "cMediaGwCcCfgDsNamePrefix"},
    cmediagwcccfgrtpnameprefix{YType::str, "cMediaGwCcCfgRtpNamePrefix"},
    cmediagwcccfgaal1svcnameprefix{YType::str, "cMediaGwCcCfgAal1SvcNamePrefix"},
    cmediagwcccfgaal2svcnameprefix{YType::str, "cMediaGwCcCfgAal2SvcNamePrefix"},
    cmediagwcccfgclusterenabled{YType::enumeration, "cMediaGwCcCfgClusterEnabled"},
    cmediagwcccfgdefbearertraffic{YType::enumeration, "cMediaGwCcCfgDefBearerTraffic"},
    cmediagwcccfgdefrtpnameprefix{YType::str, "cMediaGwCcCfgDefRtpNamePrefix"}
{

    yang_name = "cMediaGwCallControlConfigEntry"; yang_parent_name = "cMediaGwCallControlConfigTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::~Cmediagwcallcontrolconfigentry()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::has_data() const
{
    return cmgwindex.is_set
	|| cmediagwcccfgcontroltos.is_set
	|| cmediagwcccfgbearertos.is_set
	|| cmediagwcccfgntepayload.is_set
	|| cmediagwcccfgnsepayload.is_set
	|| cmediagwcccfgnseresptimer.is_set
	|| cmediagwcccfgvbdjitterdelaymode.is_set
	|| cmediagwcccfgvbdjittermaxdelay.is_set
	|| cmediagwcccfgvbdjitternomdelay.is_set
	|| cmediagwcccfgvbdjittermindelay.is_set
	|| cmediagwcccfgdefaulttoneplanid.is_set
	|| cmediagwcccfgdescrinfoenabled.is_set
	|| cmediagwcccfgdsnameprefix.is_set
	|| cmediagwcccfgrtpnameprefix.is_set
	|| cmediagwcccfgaal1svcnameprefix.is_set
	|| cmediagwcccfgaal2svcnameprefix.is_set
	|| cmediagwcccfgclusterenabled.is_set
	|| cmediagwcccfgdefbearertraffic.is_set
	|| cmediagwcccfgdefrtpnameprefix.is_set;
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmgwindex.yfilter)
	|| ydk::is_set(cmediagwcccfgcontroltos.yfilter)
	|| ydk::is_set(cmediagwcccfgbearertos.yfilter)
	|| ydk::is_set(cmediagwcccfgntepayload.yfilter)
	|| ydk::is_set(cmediagwcccfgnsepayload.yfilter)
	|| ydk::is_set(cmediagwcccfgnseresptimer.yfilter)
	|| ydk::is_set(cmediagwcccfgvbdjitterdelaymode.yfilter)
	|| ydk::is_set(cmediagwcccfgvbdjittermaxdelay.yfilter)
	|| ydk::is_set(cmediagwcccfgvbdjitternomdelay.yfilter)
	|| ydk::is_set(cmediagwcccfgvbdjittermindelay.yfilter)
	|| ydk::is_set(cmediagwcccfgdefaulttoneplanid.yfilter)
	|| ydk::is_set(cmediagwcccfgdescrinfoenabled.yfilter)
	|| ydk::is_set(cmediagwcccfgdsnameprefix.yfilter)
	|| ydk::is_set(cmediagwcccfgrtpnameprefix.yfilter)
	|| ydk::is_set(cmediagwcccfgaal1svcnameprefix.yfilter)
	|| ydk::is_set(cmediagwcccfgaal2svcnameprefix.yfilter)
	|| ydk::is_set(cmediagwcccfgclusterenabled.yfilter)
	|| ydk::is_set(cmediagwcccfgdefbearertraffic.yfilter)
	|| ydk::is_set(cmediagwcccfgdefrtpnameprefix.yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwCallControlConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwCallControlConfigEntry" <<"[cmgwIndex='" <<cmgwindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.yfilter)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmediagwcccfgcontroltos.is_set || is_set(cmediagwcccfgcontroltos.yfilter)) leaf_name_data.push_back(cmediagwcccfgcontroltos.get_name_leafdata());
    if (cmediagwcccfgbearertos.is_set || is_set(cmediagwcccfgbearertos.yfilter)) leaf_name_data.push_back(cmediagwcccfgbearertos.get_name_leafdata());
    if (cmediagwcccfgntepayload.is_set || is_set(cmediagwcccfgntepayload.yfilter)) leaf_name_data.push_back(cmediagwcccfgntepayload.get_name_leafdata());
    if (cmediagwcccfgnsepayload.is_set || is_set(cmediagwcccfgnsepayload.yfilter)) leaf_name_data.push_back(cmediagwcccfgnsepayload.get_name_leafdata());
    if (cmediagwcccfgnseresptimer.is_set || is_set(cmediagwcccfgnseresptimer.yfilter)) leaf_name_data.push_back(cmediagwcccfgnseresptimer.get_name_leafdata());
    if (cmediagwcccfgvbdjitterdelaymode.is_set || is_set(cmediagwcccfgvbdjitterdelaymode.yfilter)) leaf_name_data.push_back(cmediagwcccfgvbdjitterdelaymode.get_name_leafdata());
    if (cmediagwcccfgvbdjittermaxdelay.is_set || is_set(cmediagwcccfgvbdjittermaxdelay.yfilter)) leaf_name_data.push_back(cmediagwcccfgvbdjittermaxdelay.get_name_leafdata());
    if (cmediagwcccfgvbdjitternomdelay.is_set || is_set(cmediagwcccfgvbdjitternomdelay.yfilter)) leaf_name_data.push_back(cmediagwcccfgvbdjitternomdelay.get_name_leafdata());
    if (cmediagwcccfgvbdjittermindelay.is_set || is_set(cmediagwcccfgvbdjittermindelay.yfilter)) leaf_name_data.push_back(cmediagwcccfgvbdjittermindelay.get_name_leafdata());
    if (cmediagwcccfgdefaulttoneplanid.is_set || is_set(cmediagwcccfgdefaulttoneplanid.yfilter)) leaf_name_data.push_back(cmediagwcccfgdefaulttoneplanid.get_name_leafdata());
    if (cmediagwcccfgdescrinfoenabled.is_set || is_set(cmediagwcccfgdescrinfoenabled.yfilter)) leaf_name_data.push_back(cmediagwcccfgdescrinfoenabled.get_name_leafdata());
    if (cmediagwcccfgdsnameprefix.is_set || is_set(cmediagwcccfgdsnameprefix.yfilter)) leaf_name_data.push_back(cmediagwcccfgdsnameprefix.get_name_leafdata());
    if (cmediagwcccfgrtpnameprefix.is_set || is_set(cmediagwcccfgrtpnameprefix.yfilter)) leaf_name_data.push_back(cmediagwcccfgrtpnameprefix.get_name_leafdata());
    if (cmediagwcccfgaal1svcnameprefix.is_set || is_set(cmediagwcccfgaal1svcnameprefix.yfilter)) leaf_name_data.push_back(cmediagwcccfgaal1svcnameprefix.get_name_leafdata());
    if (cmediagwcccfgaal2svcnameprefix.is_set || is_set(cmediagwcccfgaal2svcnameprefix.yfilter)) leaf_name_data.push_back(cmediagwcccfgaal2svcnameprefix.get_name_leafdata());
    if (cmediagwcccfgclusterenabled.is_set || is_set(cmediagwcccfgclusterenabled.yfilter)) leaf_name_data.push_back(cmediagwcccfgclusterenabled.get_name_leafdata());
    if (cmediagwcccfgdefbearertraffic.is_set || is_set(cmediagwcccfgdefbearertraffic.yfilter)) leaf_name_data.push_back(cmediagwcccfgdefbearertraffic.get_name_leafdata());
    if (cmediagwcccfgdefrtpnameprefix.is_set || is_set(cmediagwcccfgdefrtpnameprefix.yfilter)) leaf_name_data.push_back(cmediagwcccfgdefrtpnameprefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
        cmgwindex.value_namespace = name_space;
        cmgwindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgControlTos")
    {
        cmediagwcccfgcontroltos = value;
        cmediagwcccfgcontroltos.value_namespace = name_space;
        cmediagwcccfgcontroltos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgBearerTos")
    {
        cmediagwcccfgbearertos = value;
        cmediagwcccfgbearertos.value_namespace = name_space;
        cmediagwcccfgbearertos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgNtePayload")
    {
        cmediagwcccfgntepayload = value;
        cmediagwcccfgntepayload.value_namespace = name_space;
        cmediagwcccfgntepayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgNsePayload")
    {
        cmediagwcccfgnsepayload = value;
        cmediagwcccfgnsepayload.value_namespace = name_space;
        cmediagwcccfgnsepayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgNseRespTimer")
    {
        cmediagwcccfgnseresptimer = value;
        cmediagwcccfgnseresptimer.value_namespace = name_space;
        cmediagwcccfgnseresptimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgVbdJitterDelayMode")
    {
        cmediagwcccfgvbdjitterdelaymode = value;
        cmediagwcccfgvbdjitterdelaymode.value_namespace = name_space;
        cmediagwcccfgvbdjitterdelaymode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgVbdJitterMaxDelay")
    {
        cmediagwcccfgvbdjittermaxdelay = value;
        cmediagwcccfgvbdjittermaxdelay.value_namespace = name_space;
        cmediagwcccfgvbdjittermaxdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgVbdJitterNomDelay")
    {
        cmediagwcccfgvbdjitternomdelay = value;
        cmediagwcccfgvbdjitternomdelay.value_namespace = name_space;
        cmediagwcccfgvbdjitternomdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgVbdJitterMinDelay")
    {
        cmediagwcccfgvbdjittermindelay = value;
        cmediagwcccfgvbdjittermindelay.value_namespace = name_space;
        cmediagwcccfgvbdjittermindelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgDefaultTonePlanId")
    {
        cmediagwcccfgdefaulttoneplanid = value;
        cmediagwcccfgdefaulttoneplanid.value_namespace = name_space;
        cmediagwcccfgdefaulttoneplanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgDescrInfoEnabled")
    {
        cmediagwcccfgdescrinfoenabled = value;
        cmediagwcccfgdescrinfoenabled.value_namespace = name_space;
        cmediagwcccfgdescrinfoenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgDsNamePrefix")
    {
        cmediagwcccfgdsnameprefix = value;
        cmediagwcccfgdsnameprefix.value_namespace = name_space;
        cmediagwcccfgdsnameprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgRtpNamePrefix")
    {
        cmediagwcccfgrtpnameprefix = value;
        cmediagwcccfgrtpnameprefix.value_namespace = name_space;
        cmediagwcccfgrtpnameprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgAal1SvcNamePrefix")
    {
        cmediagwcccfgaal1svcnameprefix = value;
        cmediagwcccfgaal1svcnameprefix.value_namespace = name_space;
        cmediagwcccfgaal1svcnameprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgAal2SvcNamePrefix")
    {
        cmediagwcccfgaal2svcnameprefix = value;
        cmediagwcccfgaal2svcnameprefix.value_namespace = name_space;
        cmediagwcccfgaal2svcnameprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgClusterEnabled")
    {
        cmediagwcccfgclusterenabled = value;
        cmediagwcccfgclusterenabled.value_namespace = name_space;
        cmediagwcccfgclusterenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgDefBearerTraffic")
    {
        cmediagwcccfgdefbearertraffic = value;
        cmediagwcccfgdefbearertraffic.value_namespace = name_space;
        cmediagwcccfgdefbearertraffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cMediaGwCcCfgDefRtpNamePrefix")
    {
        cmediagwcccfgdefrtpnameprefix = value;
        cmediagwcccfgdefrtpnameprefix.value_namespace = name_space;
        cmediagwcccfgdefrtpnameprefix.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgControlTos")
    {
        cmediagwcccfgcontroltos.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgBearerTos")
    {
        cmediagwcccfgbearertos.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgNtePayload")
    {
        cmediagwcccfgntepayload.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgNsePayload")
    {
        cmediagwcccfgnsepayload.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgNseRespTimer")
    {
        cmediagwcccfgnseresptimer.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgVbdJitterDelayMode")
    {
        cmediagwcccfgvbdjitterdelaymode.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgVbdJitterMaxDelay")
    {
        cmediagwcccfgvbdjittermaxdelay.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgVbdJitterNomDelay")
    {
        cmediagwcccfgvbdjitternomdelay.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgVbdJitterMinDelay")
    {
        cmediagwcccfgvbdjittermindelay.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgDefaultTonePlanId")
    {
        cmediagwcccfgdefaulttoneplanid.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgDescrInfoEnabled")
    {
        cmediagwcccfgdescrinfoenabled.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgDsNamePrefix")
    {
        cmediagwcccfgdsnameprefix.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgRtpNamePrefix")
    {
        cmediagwcccfgrtpnameprefix.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgAal1SvcNamePrefix")
    {
        cmediagwcccfgaal1svcnameprefix.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgAal2SvcNamePrefix")
    {
        cmediagwcccfgaal2svcnameprefix.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgClusterEnabled")
    {
        cmediagwcccfgclusterenabled.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgDefBearerTraffic")
    {
        cmediagwcccfgdefbearertraffic.yfilter = yfilter;
    }
    if(value_path == "cMediaGwCcCfgDefRtpNamePrefix")
    {
        cmediagwcccfgdefrtpnameprefix.yfilter = yfilter;
    }
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cMediaGwCcCfgControlTos" || name == "cMediaGwCcCfgBearerTos" || name == "cMediaGwCcCfgNtePayload" || name == "cMediaGwCcCfgNsePayload" || name == "cMediaGwCcCfgNseRespTimer" || name == "cMediaGwCcCfgVbdJitterDelayMode" || name == "cMediaGwCcCfgVbdJitterMaxDelay" || name == "cMediaGwCcCfgVbdJitterNomDelay" || name == "cMediaGwCcCfgVbdJitterMinDelay" || name == "cMediaGwCcCfgDefaultTonePlanId" || name == "cMediaGwCcCfgDescrInfoEnabled" || name == "cMediaGwCcCfgDsNamePrefix" || name == "cMediaGwCcCfgRtpNamePrefix" || name == "cMediaGwCcCfgAal1SvcNamePrefix" || name == "cMediaGwCcCfgAal2SvcNamePrefix" || name == "cMediaGwCcCfgClusterEnabled" || name == "cMediaGwCcCfgDefBearerTraffic" || name == "cMediaGwCcCfgDefRtpNamePrefix")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatstable()
{

    yang_name = "cMediaGwRscStatsTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::~Cmediagwrscstatstable()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::has_data() const
{
    for (std::size_t index=0; index<cmediagwrscstatsentry.size(); index++)
    {
        if(cmediagwrscstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwrscstatsentry.size(); index++)
    {
        if(cmediagwrscstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwRscStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwRscStatsEntry")
    {
        auto c = std::make_shared<CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry>();
        c->parent = this;
        cmediagwrscstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cmediagwrscstatsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cMediaGwRscStatsEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmediagwrscstatsentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmgwrscstatsindex{YType::enumeration, "cmgwRscStatsIndex"},
    cmgwrscmaximumutilization{YType::uint32, "cmgwRscMaximumUtilization"},
    cmgwrscminimumutilization{YType::uint32, "cmgwRscMinimumUtilization"},
    cmgwrscaverageutilization{YType::uint32, "cmgwRscAverageUtilization"},
    cmgwrscsincelastreset{YType::uint32, "cmgwRscSinceLastReset"}
{

    yang_name = "cMediaGwRscStatsEntry"; yang_parent_name = "cMediaGwRscStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::~Cmediagwrscstatsentry()
{
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::has_data() const
{
    return cmgwindex.is_set
	|| cmgwrscstatsindex.is_set
	|| cmgwrscmaximumutilization.is_set
	|| cmgwrscminimumutilization.is_set
	|| cmgwrscaverageutilization.is_set
	|| cmgwrscsincelastreset.is_set;
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmgwindex.yfilter)
	|| ydk::is_set(cmgwrscstatsindex.yfilter)
	|| ydk::is_set(cmgwrscmaximumutilization.yfilter)
	|| ydk::is_set(cmgwrscminimumutilization.yfilter)
	|| ydk::is_set(cmgwrscaverageutilization.yfilter)
	|| ydk::is_set(cmgwrscsincelastreset.yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwRscStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwRscStatsEntry" <<"[cmgwIndex='" <<cmgwindex <<"']" <<"[cmgwRscStatsIndex='" <<cmgwrscstatsindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.yfilter)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwrscstatsindex.is_set || is_set(cmgwrscstatsindex.yfilter)) leaf_name_data.push_back(cmgwrscstatsindex.get_name_leafdata());
    if (cmgwrscmaximumutilization.is_set || is_set(cmgwrscmaximumutilization.yfilter)) leaf_name_data.push_back(cmgwrscmaximumutilization.get_name_leafdata());
    if (cmgwrscminimumutilization.is_set || is_set(cmgwrscminimumutilization.yfilter)) leaf_name_data.push_back(cmgwrscminimumutilization.get_name_leafdata());
    if (cmgwrscaverageutilization.is_set || is_set(cmgwrscaverageutilization.yfilter)) leaf_name_data.push_back(cmgwrscaverageutilization.get_name_leafdata());
    if (cmgwrscsincelastreset.is_set || is_set(cmgwrscsincelastreset.yfilter)) leaf_name_data.push_back(cmgwrscsincelastreset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
        cmgwindex.value_namespace = name_space;
        cmgwindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwRscStatsIndex")
    {
        cmgwrscstatsindex = value;
        cmgwrscstatsindex.value_namespace = name_space;
        cmgwrscstatsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwRscMaximumUtilization")
    {
        cmgwrscmaximumutilization = value;
        cmgwrscmaximumutilization.value_namespace = name_space;
        cmgwrscmaximumutilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwRscMinimumUtilization")
    {
        cmgwrscminimumutilization = value;
        cmgwrscminimumutilization.value_namespace = name_space;
        cmgwrscminimumutilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwRscAverageUtilization")
    {
        cmgwrscaverageutilization = value;
        cmgwrscaverageutilization.value_namespace = name_space;
        cmgwrscaverageutilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmgwRscSinceLastReset")
    {
        cmgwrscsincelastreset = value;
        cmgwrscsincelastreset.value_namespace = name_space;
        cmgwrscsincelastreset.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex.yfilter = yfilter;
    }
    if(value_path == "cmgwRscStatsIndex")
    {
        cmgwrscstatsindex.yfilter = yfilter;
    }
    if(value_path == "cmgwRscMaximumUtilization")
    {
        cmgwrscmaximumutilization.yfilter = yfilter;
    }
    if(value_path == "cmgwRscMinimumUtilization")
    {
        cmgwrscminimumutilization.yfilter = yfilter;
    }
    if(value_path == "cmgwRscAverageUtilization")
    {
        cmgwrscaverageutilization.yfilter = yfilter;
    }
    if(value_path == "cmgwRscSinceLastReset")
    {
        cmgwrscsincelastreset.yfilter = yfilter;
    }
}

bool CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cmgwRscStatsIndex" || name == "cmgwRscMaximumUtilization" || name == "cmgwRscMinimumUtilization" || name == "cmgwRscAverageUtilization" || name == "cmgwRscSinceLastReset")
        return true;
    return false;
}

const Enum::YLeaf CGwServiceState::inService {1, "inService"};
const Enum::YLeaf CGwServiceState::forcedOutOfService {2, "forcedOutOfService"};
const Enum::YLeaf CGwServiceState::gracefulOutOfService {3, "gracefulOutOfService"};

const Enum::YLeaf CGwAdminState::inService {1, "inService"};
const Enum::YLeaf CGwAdminState::forcedOutOfService {2, "forcedOutOfService"};
const Enum::YLeaf CGwAdminState::gracefulOutOfService {3, "gracefulOutOfService"};

const Enum::YLeaf CCallControlJitterDelayMode::adaptive {1, "adaptive"};
const Enum::YLeaf CCallControlJitterDelayMode::fixed {2, "fixed"};

const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::Cmgwvtmappingmode::standard {1, "standard"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::Cmgwvtmappingmode::titan {2, "titan"};

const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::Cmgwsignalprotocol::other {1, "other"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::Cmgwsignalprotocol::mgcp {2, "mgcp"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::Cmgwsignalprotocol::h248 {3, "h248"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::Cmgwsignalprotocol::tgcp {4, "tgcp"};

const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::Cmgwconfigdomainnameentity::gateway {1, "gateway"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::Cmgwconfigdomainnameentity::dnsServer {2, "dnsServer"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::Cmgwconfigdomainnameentity::mgc {3, "mgc"};

const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::Cmediagwcccfgclusterenabled::disabled {1, "disabled"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::Cmediagwcccfgclusterenabled::enabled {2, "enabled"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::Cmediagwcccfgclusterenabled::conditionalEnabled {3, "conditionalEnabled"};

const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::Cmediagwcccfgdefbearertraffic::ipPvcAal5 {1, "ipPvcAal5"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::Cmediagwcccfgdefbearertraffic::atmPvcAal2 {2, "atmPvcAal2"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::Cmediagwcccfgdefbearertraffic::atmSvcAal2 {3, "atmSvcAal2"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::Cmediagwcccfgdefbearertraffic::atmSvcAal1 {4, "atmSvcAal1"};

const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::cpu {1, "cpu"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::staticmemory {2, "staticmemory"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::dynamicmemory {3, "dynamicmemory"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::sysmemory {4, "sysmemory"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::commbuffer {5, "commbuffer"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::msgq {6, "msgq"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::atmq {7, "atmq"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::svccongestion {8, "svccongestion"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::rsvpq {9, "rsvpq"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::dspq {10, "dspq"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::h248congestion {11, "h248congestion"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::callpersec {12, "callpersec"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::smallipcbuffer {13, "smallipcbuffer"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::mediumipcbuffer {14, "mediumipcbuffer"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::largeipcbuffer {15, "largeipcbuffer"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::hugeipcbuffer {16, "hugeipcbuffer"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmgwrscstatsindex::mblkipcbuffer {17, "mblkipcbuffer"};


}
}

