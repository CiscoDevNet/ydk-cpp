
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
    cmediagwtable(std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwTable>())
    , cmgwsignalprotocoltable(std::make_shared<CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable>())
    , cmediagwipconfigtable(std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable>())
    , cmediagwdomainnameconfigtable(std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable>())
    , cmediagwdnsipconfigtable(std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable>())
    , cmgwliftable(std::make_shared<CISCOMEDIAGATEWAYMIB::CmgwLifTable>())
    , cmediagwcallcontrolconfigtable(std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable>())
    , cmediagwrscstatstable(std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwTable")
    {
        if(cmediagwtable == nullptr)
        {
            cmediagwtable = std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwTable>();
        }
        return cmediagwtable;
    }

    if(child_yang_name == "cmgwSignalProtocolTable")
    {
        if(cmgwsignalprotocoltable == nullptr)
        {
            cmgwsignalprotocoltable = std::make_shared<CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable>();
        }
        return cmgwsignalprotocoltable;
    }

    if(child_yang_name == "cMediaGwIpConfigTable")
    {
        if(cmediagwipconfigtable == nullptr)
        {
            cmediagwipconfigtable = std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable>();
        }
        return cmediagwipconfigtable;
    }

    if(child_yang_name == "cMediaGwDomainNameConfigTable")
    {
        if(cmediagwdomainnameconfigtable == nullptr)
        {
            cmediagwdomainnameconfigtable = std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable>();
        }
        return cmediagwdomainnameconfigtable;
    }

    if(child_yang_name == "cMediaGwDnsIpConfigTable")
    {
        if(cmediagwdnsipconfigtable == nullptr)
        {
            cmediagwdnsipconfigtable = std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable>();
        }
        return cmediagwdnsipconfigtable;
    }

    if(child_yang_name == "cmgwLifTable")
    {
        if(cmgwliftable == nullptr)
        {
            cmgwliftable = std::make_shared<CISCOMEDIAGATEWAYMIB::CmgwLifTable>();
        }
        return cmgwliftable;
    }

    if(child_yang_name == "cMediaGwCallControlConfigTable")
    {
        if(cmediagwcallcontrolconfigtable == nullptr)
        {
            cmediagwcallcontrolconfigtable = std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable>();
        }
        return cmediagwcallcontrolconfigtable;
    }

    if(child_yang_name == "cMediaGwRscStatsTable")
    {
        if(cmediagwrscstatstable == nullptr)
        {
            cmediagwrscstatstable = std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable>();
        }
        return cmediagwrscstatstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cmediagwtable != nullptr)
    {
        _children["cMediaGwTable"] = cmediagwtable;
    }

    if(cmgwsignalprotocoltable != nullptr)
    {
        _children["cmgwSignalProtocolTable"] = cmgwsignalprotocoltable;
    }

    if(cmediagwipconfigtable != nullptr)
    {
        _children["cMediaGwIpConfigTable"] = cmediagwipconfigtable;
    }

    if(cmediagwdomainnameconfigtable != nullptr)
    {
        _children["cMediaGwDomainNameConfigTable"] = cmediagwdomainnameconfigtable;
    }

    if(cmediagwdnsipconfigtable != nullptr)
    {
        _children["cMediaGwDnsIpConfigTable"] = cmediagwdnsipconfigtable;
    }

    if(cmgwliftable != nullptr)
    {
        _children["cmgwLifTable"] = cmgwliftable;
    }

    if(cmediagwcallcontrolconfigtable != nullptr)
    {
        _children["cMediaGwCallControlConfigTable"] = cmediagwcallcontrolconfigtable;
    }

    if(cmediagwrscstatstable != nullptr)
    {
        _children["cMediaGwRscStatsTable"] = cmediagwrscstatstable;
    }

    return _children;
}

void CISCOMEDIAGATEWAYMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::clone_ptr() const
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

CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwTable()
    :
    cmediagwentry(this, {"cmgwindex"})
{

    yang_name = "cMediaGwTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOMEDIAGATEWAYMIB::CMediaGwTable::~CMediaGwTable()
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmediagwentry.len(); index++)
    {
        if(cmediagwentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwTable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwentry.len(); index++)
    {
        if(cmediagwentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CMediaGwTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CMediaGwTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwEntry")
    {
        auto ent_ = std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry>();
        ent_->parent = this;
        cmediagwentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CMediaGwTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmediagwentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOMEDIAGATEWAYMIB::CMediaGwTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::CMediaGwTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cMediaGwEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::CMediaGwEntry()
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

CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::~CMediaGwEntry()
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::has_data() const
{
    if (is_presence_container) return true;
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

bool CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::has_operation() const
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

std::string CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwEntry";
    ADD_KEY_TOKEN(cmgwindex, "cmgwIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cmgwDomainName" || name == "cmgwPhysicalIndex" || name == "cmgwServiceState" || name == "cmgwAdminState" || name == "cmgwGraceTime" || name == "cmgwVtMappingMode" || name == "cmgwSrcFilterEnabled" || name == "cmgwLawInterceptEnabled" || name == "cmgwV23Enabled")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolTable()
    :
    cmgwsignalprotocolentry(this, {"cmgwindex", "cmgwsignalprotocolindex"})
{

    yang_name = "cmgwSignalProtocolTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::~CmgwSignalProtocolTable()
{
}

bool CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmgwsignalprotocolentry.len(); index++)
    {
        if(cmgwsignalprotocolentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::has_operation() const
{
    for (std::size_t index=0; index<cmgwsignalprotocolentry.len(); index++)
    {
        if(cmgwsignalprotocolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmgwSignalProtocolTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmgwSignalProtocolEntry")
    {
        auto ent_ = std::make_shared<CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry>();
        ent_->parent = this;
        cmgwsignalprotocolentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmgwsignalprotocolentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwSignalProtocolEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::CmgwSignalProtocolEntry()
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

CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::~CmgwSignalProtocolEntry()
{
}

bool CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::has_data() const
{
    if (is_presence_container) return true;
    return cmgwindex.is_set
	|| cmgwsignalprotocolindex.is_set
	|| cmgwsignalprotocol.is_set
	|| cmgwsignalprotocolversion.is_set
	|| cmgwsignalprotocolport.is_set
	|| cmgwsignalmgcprotocolport.is_set
	|| cmgwsignalprotocolpreference.is_set
	|| cmgwsignalprotocolconfigver.is_set;
}

bool CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::has_operation() const
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

std::string CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cmgwSignalProtocolTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmgwSignalProtocolEntry";
    ADD_KEY_TOKEN(cmgwindex, "cmgwIndex");
    ADD_KEY_TOKEN(cmgwsignalprotocolindex, "cmgwSignalProtocolIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cmgwSignalProtocolIndex" || name == "cmgwSignalProtocol" || name == "cmgwSignalProtocolVersion" || name == "cmgwSignalProtocolPort" || name == "cmgwSignalMgcProtocolPort" || name == "cmgwSignalProtocolPreference" || name == "cmgwSignalProtocolConfigVer")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigTable()
    :
    cmediagwipconfigentry(this, {"cmgwindex", "cmgwipconfigindex"})
{

    yang_name = "cMediaGwIpConfigTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::~CMediaGwIpConfigTable()
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmediagwipconfigentry.len(); index++)
    {
        if(cmediagwipconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwipconfigentry.len(); index++)
    {
        if(cmediagwipconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwIpConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwIpConfigEntry")
    {
        auto ent_ = std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry>();
        ent_->parent = this;
        cmediagwipconfigentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmediagwipconfigentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cMediaGwIpConfigEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry::CMediaGwIpConfigEntry()
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

CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry::~CMediaGwIpConfigEntry()
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry::has_data() const
{
    if (is_presence_container) return true;
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

bool CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry::has_operation() const
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

std::string CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwIpConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwIpConfigEntry";
    ADD_KEY_TOKEN(cmgwindex, "cmgwIndex");
    ADD_KEY_TOKEN(cmgwipconfigindex, "cmgwIpConfigIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cmgwIpConfigIndex" || name == "cmgwIpConfigIfIndex" || name == "cmgwIpConfigVpi" || name == "cmgwIpConfigVci" || name == "cmgwIpConfigAddrType" || name == "cmgwIpConfigAddress" || name == "cmgwIpConfigSubnetMask" || name == "cmgwIpConfigDefaultGwIp" || name == "cmgwIpConfigForRemoteMapping" || name == "cmgwIpConfigRowStatus")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigTable()
    :
    cmediagwdomainnameconfigentry(this, {"cmgwindex", "cmgwconfigdomainnameindex"})
{

    yang_name = "cMediaGwDomainNameConfigTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::~CMediaGwDomainNameConfigTable()
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmediagwdomainnameconfigentry.len(); index++)
    {
        if(cmediagwdomainnameconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwdomainnameconfigentry.len(); index++)
    {
        if(cmediagwdomainnameconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwDomainNameConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwDomainNameConfigEntry")
    {
        auto ent_ = std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry>();
        ent_->parent = this;
        cmediagwdomainnameconfigentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmediagwdomainnameconfigentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cMediaGwDomainNameConfigEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::CMediaGwDomainNameConfigEntry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmgwconfigdomainnameindex{YType::int32, "cmgwConfigDomainNameIndex"},
    cmgwconfigdomainnameentity{YType::enumeration, "cmgwConfigDomainNameEntity"},
    cmgwconfigdomainname{YType::str, "cmgwConfigDomainName"},
    cmgwconfigdomainnamerowstatus{YType::enumeration, "cmgwConfigDomainNameRowStatus"}
{

    yang_name = "cMediaGwDomainNameConfigEntry"; yang_parent_name = "cMediaGwDomainNameConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::~CMediaGwDomainNameConfigEntry()
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return cmgwindex.is_set
	|| cmgwconfigdomainnameindex.is_set
	|| cmgwconfigdomainnameentity.is_set
	|| cmgwconfigdomainname.is_set
	|| cmgwconfigdomainnamerowstatus.is_set;
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmgwindex.yfilter)
	|| ydk::is_set(cmgwconfigdomainnameindex.yfilter)
	|| ydk::is_set(cmgwconfigdomainnameentity.yfilter)
	|| ydk::is_set(cmgwconfigdomainname.yfilter)
	|| ydk::is_set(cmgwconfigdomainnamerowstatus.yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwDomainNameConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwDomainNameConfigEntry";
    ADD_KEY_TOKEN(cmgwindex, "cmgwIndex");
    ADD_KEY_TOKEN(cmgwconfigdomainnameindex, "cmgwConfigDomainNameIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.yfilter)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwconfigdomainnameindex.is_set || is_set(cmgwconfigdomainnameindex.yfilter)) leaf_name_data.push_back(cmgwconfigdomainnameindex.get_name_leafdata());
    if (cmgwconfigdomainnameentity.is_set || is_set(cmgwconfigdomainnameentity.yfilter)) leaf_name_data.push_back(cmgwconfigdomainnameentity.get_name_leafdata());
    if (cmgwconfigdomainname.is_set || is_set(cmgwconfigdomainname.yfilter)) leaf_name_data.push_back(cmgwconfigdomainname.get_name_leafdata());
    if (cmgwconfigdomainnamerowstatus.is_set || is_set(cmgwconfigdomainnamerowstatus.yfilter)) leaf_name_data.push_back(cmgwconfigdomainnamerowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cmgwConfigDomainNameIndex" || name == "cmgwConfigDomainNameEntity" || name == "cmgwConfigDomainName" || name == "cmgwConfigDomainNameRowStatus")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigTable()
    :
    cmediagwdnsipconfigentry(this, {"cmgwindex", "cmgwdnsipindex"})
{

    yang_name = "cMediaGwDnsIpConfigTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::~CMediaGwDnsIpConfigTable()
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmediagwdnsipconfigentry.len(); index++)
    {
        if(cmediagwdnsipconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwdnsipconfigentry.len(); index++)
    {
        if(cmediagwdnsipconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwDnsIpConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwDnsIpConfigEntry")
    {
        auto ent_ = std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry>();
        ent_->parent = this;
        cmediagwdnsipconfigentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmediagwdnsipconfigentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cMediaGwDnsIpConfigEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry::CMediaGwDnsIpConfigEntry()
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

CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry::~CMediaGwDnsIpConfigEntry()
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return cmgwindex.is_set
	|| cmgwdnsipindex.is_set
	|| cmgwdnsdomainname.is_set
	|| cmgwdnsiptype.is_set
	|| cmgwdnsip.is_set
	|| cmgwdnsiprowstatus.is_set;
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmgwindex.yfilter)
	|| ydk::is_set(cmgwdnsipindex.yfilter)
	|| ydk::is_set(cmgwdnsdomainname.yfilter)
	|| ydk::is_set(cmgwdnsiptype.yfilter)
	|| ydk::is_set(cmgwdnsip.yfilter)
	|| ydk::is_set(cmgwdnsiprowstatus.yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwDnsIpConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwDnsIpConfigEntry";
    ADD_KEY_TOKEN(cmgwindex, "cmgwIndex");
    ADD_KEY_TOKEN(cmgwdnsipindex, "cmgwDnsIpIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cmgwDnsIpIndex" || name == "cmgwDnsDomainName" || name == "cmgwDnsIpType" || name == "cmgwDnsIp" || name == "cmgwDnsIpRowStatus")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifTable()
    :
    cmgwlifentry(this, {"cmgwindex", "cmgwlifnumber"})
{

    yang_name = "cmgwLifTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOMEDIAGATEWAYMIB::CmgwLifTable::~CmgwLifTable()
{
}

bool CISCOMEDIAGATEWAYMIB::CmgwLifTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmgwlifentry.len(); index++)
    {
        if(cmgwlifentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::CmgwLifTable::has_operation() const
{
    for (std::size_t index=0; index<cmgwlifentry.len(); index++)
    {
        if(cmgwlifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::CmgwLifTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CmgwLifTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmgwLifTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CmgwLifTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CmgwLifTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmgwLifEntry")
    {
        auto ent_ = std::make_shared<CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry>();
        ent_->parent = this;
        cmgwlifentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CmgwLifTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmgwlifentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOMEDIAGATEWAYMIB::CmgwLifTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::CmgwLifTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::CmgwLifTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwLifEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry::CmgwLifEntry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmgwlifnumber{YType::uint32, "cmgwLifNumber"},
    cmgwlifpvccount{YType::uint32, "cmgwLifPvcCount"},
    cmgwlifvoiceifcount{YType::uint32, "cmgwLifVoiceIfCount"}
{

    yang_name = "cmgwLifEntry"; yang_parent_name = "cmgwLifTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry::~CmgwLifEntry()
{
}

bool CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry::has_data() const
{
    if (is_presence_container) return true;
    return cmgwindex.is_set
	|| cmgwlifnumber.is_set
	|| cmgwlifpvccount.is_set
	|| cmgwlifvoiceifcount.is_set;
}

bool CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmgwindex.yfilter)
	|| ydk::is_set(cmgwlifnumber.yfilter)
	|| ydk::is_set(cmgwlifpvccount.yfilter)
	|| ydk::is_set(cmgwlifvoiceifcount.yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cmgwLifTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmgwLifEntry";
    ADD_KEY_TOKEN(cmgwindex, "cmgwIndex");
    ADD_KEY_TOKEN(cmgwlifnumber, "cmgwLifNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.yfilter)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwlifnumber.is_set || is_set(cmgwlifnumber.yfilter)) leaf_name_data.push_back(cmgwlifnumber.get_name_leafdata());
    if (cmgwlifpvccount.is_set || is_set(cmgwlifpvccount.yfilter)) leaf_name_data.push_back(cmgwlifpvccount.get_name_leafdata());
    if (cmgwlifvoiceifcount.is_set || is_set(cmgwlifvoiceifcount.yfilter)) leaf_name_data.push_back(cmgwlifvoiceifcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cmgwLifNumber" || name == "cmgwLifPvcCount" || name == "cmgwLifVoiceIfCount")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigTable()
    :
    cmediagwcallcontrolconfigentry(this, {"cmgwindex"})
{

    yang_name = "cMediaGwCallControlConfigTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::~CMediaGwCallControlConfigTable()
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmediagwcallcontrolconfigentry.len(); index++)
    {
        if(cmediagwcallcontrolconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwcallcontrolconfigentry.len(); index++)
    {
        if(cmediagwcallcontrolconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwCallControlConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwCallControlConfigEntry")
    {
        auto ent_ = std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry>();
        ent_->parent = this;
        cmediagwcallcontrolconfigentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmediagwcallcontrolconfigentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cMediaGwCallControlConfigEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::CMediaGwCallControlConfigEntry()
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

CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::~CMediaGwCallControlConfigEntry()
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::has_data() const
{
    if (is_presence_container) return true;
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

bool CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::has_operation() const
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

std::string CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwCallControlConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwCallControlConfigEntry";
    ADD_KEY_TOKEN(cmgwindex, "cmgwIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmgwIndex" || name == "cMediaGwCcCfgControlTos" || name == "cMediaGwCcCfgBearerTos" || name == "cMediaGwCcCfgNtePayload" || name == "cMediaGwCcCfgNsePayload" || name == "cMediaGwCcCfgNseRespTimer" || name == "cMediaGwCcCfgVbdJitterDelayMode" || name == "cMediaGwCcCfgVbdJitterMaxDelay" || name == "cMediaGwCcCfgVbdJitterNomDelay" || name == "cMediaGwCcCfgVbdJitterMinDelay" || name == "cMediaGwCcCfgDefaultTonePlanId" || name == "cMediaGwCcCfgDescrInfoEnabled" || name == "cMediaGwCcCfgDsNamePrefix" || name == "cMediaGwCcCfgRtpNamePrefix" || name == "cMediaGwCcCfgAal1SvcNamePrefix" || name == "cMediaGwCcCfgAal2SvcNamePrefix" || name == "cMediaGwCcCfgClusterEnabled" || name == "cMediaGwCcCfgDefBearerTraffic" || name == "cMediaGwCcCfgDefRtpNamePrefix")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsTable()
    :
    cmediagwrscstatsentry(this, {"cmgwindex", "cmgwrscstatsindex"})
{

    yang_name = "cMediaGwRscStatsTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::~CMediaGwRscStatsTable()
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmediagwrscstatsentry.len(); index++)
    {
        if(cmediagwrscstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwrscstatsentry.len(); index++)
    {
        if(cmediagwrscstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwRscStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwRscStatsEntry")
    {
        auto ent_ = std::make_shared<CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry>();
        ent_->parent = this;
        cmediagwrscstatsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmediagwrscstatsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cMediaGwRscStatsEntry")
        return true;
    return false;
}

CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CMediaGwRscStatsEntry()
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

CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::~CMediaGwRscStatsEntry()
{
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return cmgwindex.is_set
	|| cmgwrscstatsindex.is_set
	|| cmgwrscmaximumutilization.is_set
	|| cmgwrscminimumutilization.is_set
	|| cmgwrscaverageutilization.is_set
	|| cmgwrscsincelastreset.is_set;
}

bool CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmgwindex.yfilter)
	|| ydk::is_set(cmgwrscstatsindex.yfilter)
	|| ydk::is_set(cmgwrscmaximumutilization.yfilter)
	|| ydk::is_set(cmgwrscminimumutilization.yfilter)
	|| ydk::is_set(cmgwrscaverageutilization.yfilter)
	|| ydk::is_set(cmgwrscsincelastreset.yfilter);
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwRscStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwRscStatsEntry";
    ADD_KEY_TOKEN(cmgwindex, "cmgwIndex");
    ADD_KEY_TOKEN(cmgwrscstatsindex, "cmgwRscStatsIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
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

const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::CmgwVtMappingMode::standard {1, "standard"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::CmgwVtMappingMode::titan {2, "titan"};

const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::CmgwSignalProtocol::other {1, "other"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::CmgwSignalProtocol::mgcp {2, "mgcp"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::CmgwSignalProtocol::h248 {3, "h248"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::CmgwSignalProtocol::tgcp {4, "tgcp"};

const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::CmgwConfigDomainNameEntity::gateway {1, "gateway"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::CmgwConfigDomainNameEntity::dnsServer {2, "dnsServer"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::CmgwConfigDomainNameEntity::mgc {3, "mgc"};

const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::CMediaGwCcCfgClusterEnabled::disabled {1, "disabled"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::CMediaGwCcCfgClusterEnabled::enabled {2, "enabled"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::CMediaGwCcCfgClusterEnabled::conditionalEnabled {3, "conditionalEnabled"};

const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::CMediaGwCcCfgDefBearerTraffic::ipPvcAal5 {1, "ipPvcAal5"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::CMediaGwCcCfgDefBearerTraffic::atmPvcAal2 {2, "atmPvcAal2"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::CMediaGwCcCfgDefBearerTraffic::atmSvcAal2 {3, "atmSvcAal2"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::CMediaGwCcCfgDefBearerTraffic::atmSvcAal1 {4, "atmSvcAal1"};

const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::cpu {1, "cpu"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::staticmemory {2, "staticmemory"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::dynamicmemory {3, "dynamicmemory"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::sysmemory {4, "sysmemory"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::commbuffer {5, "commbuffer"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::msgq {6, "msgq"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::atmq {7, "atmq"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::svccongestion {8, "svccongestion"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::rsvpq {9, "rsvpq"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::dspq {10, "dspq"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::h248congestion {11, "h248congestion"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::callpersec {12, "callpersec"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::smallipcbuffer {13, "smallipcbuffer"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::mediumipcbuffer {14, "mediumipcbuffer"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::largeipcbuffer {15, "largeipcbuffer"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::hugeipcbuffer {16, "hugeipcbuffer"};
const Enum::YLeaf CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex::mblkipcbuffer {17, "mblkipcbuffer"};


}
}

