
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_TAP2_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_TAP2_MIB {

CISCOTAP2MIB::CISCOTAP2MIB()
    :
    ctap2mediationgroup(std::make_shared<CISCOTAP2MIB::CTap2MediationGroup>())
    , ctap2debuggroup(std::make_shared<CISCOTAP2MIB::CTap2DebugGroup>())
    , ctap2mediationtable(std::make_shared<CISCOTAP2MIB::CTap2MediationTable>())
    , ctap2streamtable(std::make_shared<CISCOTAP2MIB::CTap2StreamTable>())
    , ctap2debugtable(std::make_shared<CISCOTAP2MIB::CTap2DebugTable>())
    , ctap2debugusertable(std::make_shared<CISCOTAP2MIB::CTap2DebugUserTable>())
{
    ctap2mediationgroup->parent = this;
    ctap2debuggroup->parent = this;
    ctap2mediationtable->parent = this;
    ctap2streamtable->parent = this;
    ctap2debugtable->parent = this;
    ctap2debugusertable->parent = this;

    yang_name = "CISCO-TAP2-MIB"; yang_parent_name = "CISCO-TAP2-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOTAP2MIB::~CISCOTAP2MIB()
{
}

bool CISCOTAP2MIB::has_data() const
{
    if (is_presence_container) return true;
    return (ctap2mediationgroup !=  nullptr && ctap2mediationgroup->has_data())
	|| (ctap2debuggroup !=  nullptr && ctap2debuggroup->has_data())
	|| (ctap2mediationtable !=  nullptr && ctap2mediationtable->has_data())
	|| (ctap2streamtable !=  nullptr && ctap2streamtable->has_data())
	|| (ctap2debugtable !=  nullptr && ctap2debugtable->has_data())
	|| (ctap2debugusertable !=  nullptr && ctap2debugusertable->has_data());
}

bool CISCOTAP2MIB::has_operation() const
{
    return is_set(yfilter)
	|| (ctap2mediationgroup !=  nullptr && ctap2mediationgroup->has_operation())
	|| (ctap2debuggroup !=  nullptr && ctap2debuggroup->has_operation())
	|| (ctap2mediationtable !=  nullptr && ctap2mediationtable->has_operation())
	|| (ctap2streamtable !=  nullptr && ctap2streamtable->has_operation())
	|| (ctap2debugtable !=  nullptr && ctap2debugtable->has_operation())
	|| (ctap2debugusertable !=  nullptr && ctap2debugusertable->has_operation());
}

std::string CISCOTAP2MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOTAP2MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOTAP2MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cTap2MediationGroup")
    {
        if(ctap2mediationgroup == nullptr)
        {
            ctap2mediationgroup = std::make_shared<CISCOTAP2MIB::CTap2MediationGroup>();
        }
        return ctap2mediationgroup;
    }

    if(child_yang_name == "cTap2DebugGroup")
    {
        if(ctap2debuggroup == nullptr)
        {
            ctap2debuggroup = std::make_shared<CISCOTAP2MIB::CTap2DebugGroup>();
        }
        return ctap2debuggroup;
    }

    if(child_yang_name == "cTap2MediationTable")
    {
        if(ctap2mediationtable == nullptr)
        {
            ctap2mediationtable = std::make_shared<CISCOTAP2MIB::CTap2MediationTable>();
        }
        return ctap2mediationtable;
    }

    if(child_yang_name == "cTap2StreamTable")
    {
        if(ctap2streamtable == nullptr)
        {
            ctap2streamtable = std::make_shared<CISCOTAP2MIB::CTap2StreamTable>();
        }
        return ctap2streamtable;
    }

    if(child_yang_name == "cTap2DebugTable")
    {
        if(ctap2debugtable == nullptr)
        {
            ctap2debugtable = std::make_shared<CISCOTAP2MIB::CTap2DebugTable>();
        }
        return ctap2debugtable;
    }

    if(child_yang_name == "cTap2DebugUserTable")
    {
        if(ctap2debugusertable == nullptr)
        {
            ctap2debugusertable = std::make_shared<CISCOTAP2MIB::CTap2DebugUserTable>();
        }
        return ctap2debugusertable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOTAP2MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ctap2mediationgroup != nullptr)
    {
        _children["cTap2MediationGroup"] = ctap2mediationgroup;
    }

    if(ctap2debuggroup != nullptr)
    {
        _children["cTap2DebugGroup"] = ctap2debuggroup;
    }

    if(ctap2mediationtable != nullptr)
    {
        _children["cTap2MediationTable"] = ctap2mediationtable;
    }

    if(ctap2streamtable != nullptr)
    {
        _children["cTap2StreamTable"] = ctap2streamtable;
    }

    if(ctap2debugtable != nullptr)
    {
        _children["cTap2DebugTable"] = ctap2debugtable;
    }

    if(ctap2debugusertable != nullptr)
    {
        _children["cTap2DebugUserTable"] = ctap2debugusertable;
    }

    return _children;
}

void CISCOTAP2MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOTAP2MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOTAP2MIB::clone_ptr() const
{
    return std::make_shared<CISCOTAP2MIB>();
}

std::string CISCOTAP2MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOTAP2MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOTAP2MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOTAP2MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOTAP2MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cTap2MediationGroup" || name == "cTap2DebugGroup" || name == "cTap2MediationTable" || name == "cTap2StreamTable" || name == "cTap2DebugTable" || name == "cTap2DebugUserTable")
        return true;
    return false;
}

CISCOTAP2MIB::CTap2MediationGroup::CTap2MediationGroup()
    :
    ctap2mediationnewindex{YType::int32, "cTap2MediationNewIndex"},
    ctap2mediationcapabilities{YType::bits, "cTap2MediationCapabilities"}
{

    yang_name = "cTap2MediationGroup"; yang_parent_name = "CISCO-TAP2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOTAP2MIB::CTap2MediationGroup::~CTap2MediationGroup()
{
}

bool CISCOTAP2MIB::CTap2MediationGroup::has_data() const
{
    if (is_presence_container) return true;
    return ctap2mediationnewindex.is_set
	|| ctap2mediationcapabilities.is_set;
}

bool CISCOTAP2MIB::CTap2MediationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctap2mediationnewindex.yfilter)
	|| ydk::is_set(ctap2mediationcapabilities.yfilter);
}

std::string CISCOTAP2MIB::CTap2MediationGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOTAP2MIB::CTap2MediationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2MediationGroup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOTAP2MIB::CTap2MediationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctap2mediationnewindex.is_set || is_set(ctap2mediationnewindex.yfilter)) leaf_name_data.push_back(ctap2mediationnewindex.get_name_leafdata());
    if (ctap2mediationcapabilities.is_set || is_set(ctap2mediationcapabilities.yfilter)) leaf_name_data.push_back(ctap2mediationcapabilities.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOTAP2MIB::CTap2MediationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOTAP2MIB::CTap2MediationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOTAP2MIB::CTap2MediationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cTap2MediationNewIndex")
    {
        ctap2mediationnewindex = value;
        ctap2mediationnewindex.value_namespace = name_space;
        ctap2mediationnewindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2MediationCapabilities")
    {
        ctap2mediationcapabilities[value] = true;
    }
}

void CISCOTAP2MIB::CTap2MediationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cTap2MediationNewIndex")
    {
        ctap2mediationnewindex.yfilter = yfilter;
    }
    if(value_path == "cTap2MediationCapabilities")
    {
        ctap2mediationcapabilities.yfilter = yfilter;
    }
}

bool CISCOTAP2MIB::CTap2MediationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cTap2MediationNewIndex" || name == "cTap2MediationCapabilities")
        return true;
    return false;
}

CISCOTAP2MIB::CTap2DebugGroup::CTap2DebugGroup()
    :
    ctap2debugage{YType::int32, "cTap2DebugAge"},
    ctap2debugmaxentries{YType::int32, "cTap2DebugMaxEntries"}
{

    yang_name = "cTap2DebugGroup"; yang_parent_name = "CISCO-TAP2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOTAP2MIB::CTap2DebugGroup::~CTap2DebugGroup()
{
}

bool CISCOTAP2MIB::CTap2DebugGroup::has_data() const
{
    if (is_presence_container) return true;
    return ctap2debugage.is_set
	|| ctap2debugmaxentries.is_set;
}

bool CISCOTAP2MIB::CTap2DebugGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctap2debugage.yfilter)
	|| ydk::is_set(ctap2debugmaxentries.yfilter);
}

std::string CISCOTAP2MIB::CTap2DebugGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOTAP2MIB::CTap2DebugGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2DebugGroup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOTAP2MIB::CTap2DebugGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctap2debugage.is_set || is_set(ctap2debugage.yfilter)) leaf_name_data.push_back(ctap2debugage.get_name_leafdata());
    if (ctap2debugmaxentries.is_set || is_set(ctap2debugmaxentries.yfilter)) leaf_name_data.push_back(ctap2debugmaxentries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOTAP2MIB::CTap2DebugGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOTAP2MIB::CTap2DebugGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOTAP2MIB::CTap2DebugGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cTap2DebugAge")
    {
        ctap2debugage = value;
        ctap2debugage.value_namespace = name_space;
        ctap2debugage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2DebugMaxEntries")
    {
        ctap2debugmaxentries = value;
        ctap2debugmaxentries.value_namespace = name_space;
        ctap2debugmaxentries.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOTAP2MIB::CTap2DebugGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cTap2DebugAge")
    {
        ctap2debugage.yfilter = yfilter;
    }
    if(value_path == "cTap2DebugMaxEntries")
    {
        ctap2debugmaxentries.yfilter = yfilter;
    }
}

bool CISCOTAP2MIB::CTap2DebugGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cTap2DebugAge" || name == "cTap2DebugMaxEntries")
        return true;
    return false;
}

CISCOTAP2MIB::CTap2MediationTable::CTap2MediationTable()
    :
    ctap2mediationentry(this, {"ctap2mediationcontentid"})
{

    yang_name = "cTap2MediationTable"; yang_parent_name = "CISCO-TAP2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOTAP2MIB::CTap2MediationTable::~CTap2MediationTable()
{
}

bool CISCOTAP2MIB::CTap2MediationTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ctap2mediationentry.len(); index++)
    {
        if(ctap2mediationentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOTAP2MIB::CTap2MediationTable::has_operation() const
{
    for (std::size_t index=0; index<ctap2mediationentry.len(); index++)
    {
        if(ctap2mediationentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOTAP2MIB::CTap2MediationTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOTAP2MIB::CTap2MediationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2MediationTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOTAP2MIB::CTap2MediationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOTAP2MIB::CTap2MediationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cTap2MediationEntry")
    {
        auto ent_ = std::make_shared<CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry>();
        ent_->parent = this;
        ctap2mediationentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOTAP2MIB::CTap2MediationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ctap2mediationentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOTAP2MIB::CTap2MediationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOTAP2MIB::CTap2MediationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOTAP2MIB::CTap2MediationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cTap2MediationEntry")
        return true;
    return false;
}

CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::CTap2MediationEntry()
    :
    ctap2mediationcontentid{YType::int32, "cTap2MediationContentId"},
    ctap2mediationdestaddresstype{YType::enumeration, "cTap2MediationDestAddressType"},
    ctap2mediationdestaddress{YType::str, "cTap2MediationDestAddress"},
    ctap2mediationdestport{YType::uint16, "cTap2MediationDestPort"},
    ctap2mediationsrcinterface{YType::int32, "cTap2MediationSrcInterface"},
    ctap2mediationrtcpport{YType::uint16, "cTap2MediationRtcpPort"},
    ctap2mediationdscp{YType::int32, "cTap2MediationDscp"},
    ctap2mediationdatatype{YType::int32, "cTap2MediationDataType"},
    ctap2mediationretransmittype{YType::int32, "cTap2MediationRetransmitType"},
    ctap2mediationtimeout{YType::str, "cTap2MediationTimeout"},
    ctap2mediationtransport{YType::enumeration, "cTap2MediationTransport"},
    ctap2mediationnotificationenable{YType::boolean, "cTap2MediationNotificationEnable"},
    ctap2mediationstatus{YType::enumeration, "cTap2MediationStatus"},
    ctap2mediationradiuskey{YType::str, "cTap2MediationRadiusKey"}
{

    yang_name = "cTap2MediationEntry"; yang_parent_name = "cTap2MediationTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::~CTap2MediationEntry()
{
}

bool CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::has_data() const
{
    if (is_presence_container) return true;
    return ctap2mediationcontentid.is_set
	|| ctap2mediationdestaddresstype.is_set
	|| ctap2mediationdestaddress.is_set
	|| ctap2mediationdestport.is_set
	|| ctap2mediationsrcinterface.is_set
	|| ctap2mediationrtcpport.is_set
	|| ctap2mediationdscp.is_set
	|| ctap2mediationdatatype.is_set
	|| ctap2mediationretransmittype.is_set
	|| ctap2mediationtimeout.is_set
	|| ctap2mediationtransport.is_set
	|| ctap2mediationnotificationenable.is_set
	|| ctap2mediationstatus.is_set
	|| ctap2mediationradiuskey.is_set;
}

bool CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctap2mediationcontentid.yfilter)
	|| ydk::is_set(ctap2mediationdestaddresstype.yfilter)
	|| ydk::is_set(ctap2mediationdestaddress.yfilter)
	|| ydk::is_set(ctap2mediationdestport.yfilter)
	|| ydk::is_set(ctap2mediationsrcinterface.yfilter)
	|| ydk::is_set(ctap2mediationrtcpport.yfilter)
	|| ydk::is_set(ctap2mediationdscp.yfilter)
	|| ydk::is_set(ctap2mediationdatatype.yfilter)
	|| ydk::is_set(ctap2mediationretransmittype.yfilter)
	|| ydk::is_set(ctap2mediationtimeout.yfilter)
	|| ydk::is_set(ctap2mediationtransport.yfilter)
	|| ydk::is_set(ctap2mediationnotificationenable.yfilter)
	|| ydk::is_set(ctap2mediationstatus.yfilter)
	|| ydk::is_set(ctap2mediationradiuskey.yfilter);
}

std::string CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/cTap2MediationTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2MediationEntry";
    ADD_KEY_TOKEN(ctap2mediationcontentid, "cTap2MediationContentId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctap2mediationcontentid.is_set || is_set(ctap2mediationcontentid.yfilter)) leaf_name_data.push_back(ctap2mediationcontentid.get_name_leafdata());
    if (ctap2mediationdestaddresstype.is_set || is_set(ctap2mediationdestaddresstype.yfilter)) leaf_name_data.push_back(ctap2mediationdestaddresstype.get_name_leafdata());
    if (ctap2mediationdestaddress.is_set || is_set(ctap2mediationdestaddress.yfilter)) leaf_name_data.push_back(ctap2mediationdestaddress.get_name_leafdata());
    if (ctap2mediationdestport.is_set || is_set(ctap2mediationdestport.yfilter)) leaf_name_data.push_back(ctap2mediationdestport.get_name_leafdata());
    if (ctap2mediationsrcinterface.is_set || is_set(ctap2mediationsrcinterface.yfilter)) leaf_name_data.push_back(ctap2mediationsrcinterface.get_name_leafdata());
    if (ctap2mediationrtcpport.is_set || is_set(ctap2mediationrtcpport.yfilter)) leaf_name_data.push_back(ctap2mediationrtcpport.get_name_leafdata());
    if (ctap2mediationdscp.is_set || is_set(ctap2mediationdscp.yfilter)) leaf_name_data.push_back(ctap2mediationdscp.get_name_leafdata());
    if (ctap2mediationdatatype.is_set || is_set(ctap2mediationdatatype.yfilter)) leaf_name_data.push_back(ctap2mediationdatatype.get_name_leafdata());
    if (ctap2mediationretransmittype.is_set || is_set(ctap2mediationretransmittype.yfilter)) leaf_name_data.push_back(ctap2mediationretransmittype.get_name_leafdata());
    if (ctap2mediationtimeout.is_set || is_set(ctap2mediationtimeout.yfilter)) leaf_name_data.push_back(ctap2mediationtimeout.get_name_leafdata());
    if (ctap2mediationtransport.is_set || is_set(ctap2mediationtransport.yfilter)) leaf_name_data.push_back(ctap2mediationtransport.get_name_leafdata());
    if (ctap2mediationnotificationenable.is_set || is_set(ctap2mediationnotificationenable.yfilter)) leaf_name_data.push_back(ctap2mediationnotificationenable.get_name_leafdata());
    if (ctap2mediationstatus.is_set || is_set(ctap2mediationstatus.yfilter)) leaf_name_data.push_back(ctap2mediationstatus.get_name_leafdata());
    if (ctap2mediationradiuskey.is_set || is_set(ctap2mediationradiuskey.yfilter)) leaf_name_data.push_back(ctap2mediationradiuskey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cTap2MediationContentId")
    {
        ctap2mediationcontentid = value;
        ctap2mediationcontentid.value_namespace = name_space;
        ctap2mediationcontentid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2MediationDestAddressType")
    {
        ctap2mediationdestaddresstype = value;
        ctap2mediationdestaddresstype.value_namespace = name_space;
        ctap2mediationdestaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2MediationDestAddress")
    {
        ctap2mediationdestaddress = value;
        ctap2mediationdestaddress.value_namespace = name_space;
        ctap2mediationdestaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2MediationDestPort")
    {
        ctap2mediationdestport = value;
        ctap2mediationdestport.value_namespace = name_space;
        ctap2mediationdestport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2MediationSrcInterface")
    {
        ctap2mediationsrcinterface = value;
        ctap2mediationsrcinterface.value_namespace = name_space;
        ctap2mediationsrcinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2MediationRtcpPort")
    {
        ctap2mediationrtcpport = value;
        ctap2mediationrtcpport.value_namespace = name_space;
        ctap2mediationrtcpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2MediationDscp")
    {
        ctap2mediationdscp = value;
        ctap2mediationdscp.value_namespace = name_space;
        ctap2mediationdscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2MediationDataType")
    {
        ctap2mediationdatatype = value;
        ctap2mediationdatatype.value_namespace = name_space;
        ctap2mediationdatatype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2MediationRetransmitType")
    {
        ctap2mediationretransmittype = value;
        ctap2mediationretransmittype.value_namespace = name_space;
        ctap2mediationretransmittype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2MediationTimeout")
    {
        ctap2mediationtimeout = value;
        ctap2mediationtimeout.value_namespace = name_space;
        ctap2mediationtimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2MediationTransport")
    {
        ctap2mediationtransport = value;
        ctap2mediationtransport.value_namespace = name_space;
        ctap2mediationtransport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2MediationNotificationEnable")
    {
        ctap2mediationnotificationenable = value;
        ctap2mediationnotificationenable.value_namespace = name_space;
        ctap2mediationnotificationenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2MediationStatus")
    {
        ctap2mediationstatus = value;
        ctap2mediationstatus.value_namespace = name_space;
        ctap2mediationstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2MediationRadiusKey")
    {
        ctap2mediationradiuskey = value;
        ctap2mediationradiuskey.value_namespace = name_space;
        ctap2mediationradiuskey.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cTap2MediationContentId")
    {
        ctap2mediationcontentid.yfilter = yfilter;
    }
    if(value_path == "cTap2MediationDestAddressType")
    {
        ctap2mediationdestaddresstype.yfilter = yfilter;
    }
    if(value_path == "cTap2MediationDestAddress")
    {
        ctap2mediationdestaddress.yfilter = yfilter;
    }
    if(value_path == "cTap2MediationDestPort")
    {
        ctap2mediationdestport.yfilter = yfilter;
    }
    if(value_path == "cTap2MediationSrcInterface")
    {
        ctap2mediationsrcinterface.yfilter = yfilter;
    }
    if(value_path == "cTap2MediationRtcpPort")
    {
        ctap2mediationrtcpport.yfilter = yfilter;
    }
    if(value_path == "cTap2MediationDscp")
    {
        ctap2mediationdscp.yfilter = yfilter;
    }
    if(value_path == "cTap2MediationDataType")
    {
        ctap2mediationdatatype.yfilter = yfilter;
    }
    if(value_path == "cTap2MediationRetransmitType")
    {
        ctap2mediationretransmittype.yfilter = yfilter;
    }
    if(value_path == "cTap2MediationTimeout")
    {
        ctap2mediationtimeout.yfilter = yfilter;
    }
    if(value_path == "cTap2MediationTransport")
    {
        ctap2mediationtransport.yfilter = yfilter;
    }
    if(value_path == "cTap2MediationNotificationEnable")
    {
        ctap2mediationnotificationenable.yfilter = yfilter;
    }
    if(value_path == "cTap2MediationStatus")
    {
        ctap2mediationstatus.yfilter = yfilter;
    }
    if(value_path == "cTap2MediationRadiusKey")
    {
        ctap2mediationradiuskey.yfilter = yfilter;
    }
}

bool CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cTap2MediationContentId" || name == "cTap2MediationDestAddressType" || name == "cTap2MediationDestAddress" || name == "cTap2MediationDestPort" || name == "cTap2MediationSrcInterface" || name == "cTap2MediationRtcpPort" || name == "cTap2MediationDscp" || name == "cTap2MediationDataType" || name == "cTap2MediationRetransmitType" || name == "cTap2MediationTimeout" || name == "cTap2MediationTransport" || name == "cTap2MediationNotificationEnable" || name == "cTap2MediationStatus" || name == "cTap2MediationRadiusKey")
        return true;
    return false;
}

CISCOTAP2MIB::CTap2StreamTable::CTap2StreamTable()
    :
    ctap2streamentry(this, {"ctap2mediationcontentid", "ctap2streamindex"})
{

    yang_name = "cTap2StreamTable"; yang_parent_name = "CISCO-TAP2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOTAP2MIB::CTap2StreamTable::~CTap2StreamTable()
{
}

bool CISCOTAP2MIB::CTap2StreamTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ctap2streamentry.len(); index++)
    {
        if(ctap2streamentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOTAP2MIB::CTap2StreamTable::has_operation() const
{
    for (std::size_t index=0; index<ctap2streamentry.len(); index++)
    {
        if(ctap2streamentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOTAP2MIB::CTap2StreamTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOTAP2MIB::CTap2StreamTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2StreamTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOTAP2MIB::CTap2StreamTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOTAP2MIB::CTap2StreamTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cTap2StreamEntry")
    {
        auto ent_ = std::make_shared<CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry>();
        ent_->parent = this;
        ctap2streamentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOTAP2MIB::CTap2StreamTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ctap2streamentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOTAP2MIB::CTap2StreamTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOTAP2MIB::CTap2StreamTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOTAP2MIB::CTap2StreamTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cTap2StreamEntry")
        return true;
    return false;
}

CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::CTap2StreamEntry()
    :
    ctap2mediationcontentid{YType::str, "cTap2MediationContentId"},
    ctap2streamindex{YType::int32, "cTap2StreamIndex"},
    ctap2streamtype{YType::enumeration, "cTap2StreamType"},
    ctap2streaminterceptenable{YType::boolean, "cTap2StreamInterceptEnable"},
    ctap2streaminterceptedpackets{YType::uint32, "cTap2StreamInterceptedPackets"},
    ctap2streaminterceptdrops{YType::uint32, "cTap2StreamInterceptDrops"},
    ctap2streamstatus{YType::enumeration, "cTap2StreamStatus"},
    ctap2streaminterceptedhcpackets{YType::uint64, "cTap2StreamInterceptedHCPackets"},
    ctap2streamintercepthcdrops{YType::uint64, "cTap2StreamInterceptHCDrops"}
{

    yang_name = "cTap2StreamEntry"; yang_parent_name = "cTap2StreamTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::~CTap2StreamEntry()
{
}

bool CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::has_data() const
{
    if (is_presence_container) return true;
    return ctap2mediationcontentid.is_set
	|| ctap2streamindex.is_set
	|| ctap2streamtype.is_set
	|| ctap2streaminterceptenable.is_set
	|| ctap2streaminterceptedpackets.is_set
	|| ctap2streaminterceptdrops.is_set
	|| ctap2streamstatus.is_set
	|| ctap2streaminterceptedhcpackets.is_set
	|| ctap2streamintercepthcdrops.is_set;
}

bool CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctap2mediationcontentid.yfilter)
	|| ydk::is_set(ctap2streamindex.yfilter)
	|| ydk::is_set(ctap2streamtype.yfilter)
	|| ydk::is_set(ctap2streaminterceptenable.yfilter)
	|| ydk::is_set(ctap2streaminterceptedpackets.yfilter)
	|| ydk::is_set(ctap2streaminterceptdrops.yfilter)
	|| ydk::is_set(ctap2streamstatus.yfilter)
	|| ydk::is_set(ctap2streaminterceptedhcpackets.yfilter)
	|| ydk::is_set(ctap2streamintercepthcdrops.yfilter);
}

std::string CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/cTap2StreamTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2StreamEntry";
    ADD_KEY_TOKEN(ctap2mediationcontentid, "cTap2MediationContentId");
    ADD_KEY_TOKEN(ctap2streamindex, "cTap2StreamIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctap2mediationcontentid.is_set || is_set(ctap2mediationcontentid.yfilter)) leaf_name_data.push_back(ctap2mediationcontentid.get_name_leafdata());
    if (ctap2streamindex.is_set || is_set(ctap2streamindex.yfilter)) leaf_name_data.push_back(ctap2streamindex.get_name_leafdata());
    if (ctap2streamtype.is_set || is_set(ctap2streamtype.yfilter)) leaf_name_data.push_back(ctap2streamtype.get_name_leafdata());
    if (ctap2streaminterceptenable.is_set || is_set(ctap2streaminterceptenable.yfilter)) leaf_name_data.push_back(ctap2streaminterceptenable.get_name_leafdata());
    if (ctap2streaminterceptedpackets.is_set || is_set(ctap2streaminterceptedpackets.yfilter)) leaf_name_data.push_back(ctap2streaminterceptedpackets.get_name_leafdata());
    if (ctap2streaminterceptdrops.is_set || is_set(ctap2streaminterceptdrops.yfilter)) leaf_name_data.push_back(ctap2streaminterceptdrops.get_name_leafdata());
    if (ctap2streamstatus.is_set || is_set(ctap2streamstatus.yfilter)) leaf_name_data.push_back(ctap2streamstatus.get_name_leafdata());
    if (ctap2streaminterceptedhcpackets.is_set || is_set(ctap2streaminterceptedhcpackets.yfilter)) leaf_name_data.push_back(ctap2streaminterceptedhcpackets.get_name_leafdata());
    if (ctap2streamintercepthcdrops.is_set || is_set(ctap2streamintercepthcdrops.yfilter)) leaf_name_data.push_back(ctap2streamintercepthcdrops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cTap2MediationContentId")
    {
        ctap2mediationcontentid = value;
        ctap2mediationcontentid.value_namespace = name_space;
        ctap2mediationcontentid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2StreamIndex")
    {
        ctap2streamindex = value;
        ctap2streamindex.value_namespace = name_space;
        ctap2streamindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2StreamType")
    {
        ctap2streamtype = value;
        ctap2streamtype.value_namespace = name_space;
        ctap2streamtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2StreamInterceptEnable")
    {
        ctap2streaminterceptenable = value;
        ctap2streaminterceptenable.value_namespace = name_space;
        ctap2streaminterceptenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2StreamInterceptedPackets")
    {
        ctap2streaminterceptedpackets = value;
        ctap2streaminterceptedpackets.value_namespace = name_space;
        ctap2streaminterceptedpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2StreamInterceptDrops")
    {
        ctap2streaminterceptdrops = value;
        ctap2streaminterceptdrops.value_namespace = name_space;
        ctap2streaminterceptdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2StreamStatus")
    {
        ctap2streamstatus = value;
        ctap2streamstatus.value_namespace = name_space;
        ctap2streamstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2StreamInterceptedHCPackets")
    {
        ctap2streaminterceptedhcpackets = value;
        ctap2streaminterceptedhcpackets.value_namespace = name_space;
        ctap2streaminterceptedhcpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2StreamInterceptHCDrops")
    {
        ctap2streamintercepthcdrops = value;
        ctap2streamintercepthcdrops.value_namespace = name_space;
        ctap2streamintercepthcdrops.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cTap2MediationContentId")
    {
        ctap2mediationcontentid.yfilter = yfilter;
    }
    if(value_path == "cTap2StreamIndex")
    {
        ctap2streamindex.yfilter = yfilter;
    }
    if(value_path == "cTap2StreamType")
    {
        ctap2streamtype.yfilter = yfilter;
    }
    if(value_path == "cTap2StreamInterceptEnable")
    {
        ctap2streaminterceptenable.yfilter = yfilter;
    }
    if(value_path == "cTap2StreamInterceptedPackets")
    {
        ctap2streaminterceptedpackets.yfilter = yfilter;
    }
    if(value_path == "cTap2StreamInterceptDrops")
    {
        ctap2streaminterceptdrops.yfilter = yfilter;
    }
    if(value_path == "cTap2StreamStatus")
    {
        ctap2streamstatus.yfilter = yfilter;
    }
    if(value_path == "cTap2StreamInterceptedHCPackets")
    {
        ctap2streaminterceptedhcpackets.yfilter = yfilter;
    }
    if(value_path == "cTap2StreamInterceptHCDrops")
    {
        ctap2streamintercepthcdrops.yfilter = yfilter;
    }
}

bool CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cTap2MediationContentId" || name == "cTap2StreamIndex" || name == "cTap2StreamType" || name == "cTap2StreamInterceptEnable" || name == "cTap2StreamInterceptedPackets" || name == "cTap2StreamInterceptDrops" || name == "cTap2StreamStatus" || name == "cTap2StreamInterceptedHCPackets" || name == "cTap2StreamInterceptHCDrops")
        return true;
    return false;
}

CISCOTAP2MIB::CTap2DebugTable::CTap2DebugTable()
    :
    ctap2debugentry(this, {"ctap2debugindex"})
{

    yang_name = "cTap2DebugTable"; yang_parent_name = "CISCO-TAP2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOTAP2MIB::CTap2DebugTable::~CTap2DebugTable()
{
}

bool CISCOTAP2MIB::CTap2DebugTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ctap2debugentry.len(); index++)
    {
        if(ctap2debugentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOTAP2MIB::CTap2DebugTable::has_operation() const
{
    for (std::size_t index=0; index<ctap2debugentry.len(); index++)
    {
        if(ctap2debugentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOTAP2MIB::CTap2DebugTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOTAP2MIB::CTap2DebugTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2DebugTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOTAP2MIB::CTap2DebugTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOTAP2MIB::CTap2DebugTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cTap2DebugEntry")
    {
        auto ent_ = std::make_shared<CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry>();
        ent_->parent = this;
        ctap2debugentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOTAP2MIB::CTap2DebugTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ctap2debugentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOTAP2MIB::CTap2DebugTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOTAP2MIB::CTap2DebugTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOTAP2MIB::CTap2DebugTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cTap2DebugEntry")
        return true;
    return false;
}

CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry::CTap2DebugEntry()
    :
    ctap2debugindex{YType::int32, "cTap2DebugIndex"},
    ctap2debugmediationid{YType::uint32, "cTap2DebugMediationId"},
    ctap2debugstreamid{YType::uint32, "cTap2DebugStreamId"},
    ctap2debugmessage{YType::str, "cTap2DebugMessage"},
    ctap2debugstatus{YType::enumeration, "cTap2DebugStatus"}
{

    yang_name = "cTap2DebugEntry"; yang_parent_name = "cTap2DebugTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry::~CTap2DebugEntry()
{
}

bool CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry::has_data() const
{
    if (is_presence_container) return true;
    return ctap2debugindex.is_set
	|| ctap2debugmediationid.is_set
	|| ctap2debugstreamid.is_set
	|| ctap2debugmessage.is_set
	|| ctap2debugstatus.is_set;
}

bool CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctap2debugindex.yfilter)
	|| ydk::is_set(ctap2debugmediationid.yfilter)
	|| ydk::is_set(ctap2debugstreamid.yfilter)
	|| ydk::is_set(ctap2debugmessage.yfilter)
	|| ydk::is_set(ctap2debugstatus.yfilter);
}

std::string CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/cTap2DebugTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2DebugEntry";
    ADD_KEY_TOKEN(ctap2debugindex, "cTap2DebugIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctap2debugindex.is_set || is_set(ctap2debugindex.yfilter)) leaf_name_data.push_back(ctap2debugindex.get_name_leafdata());
    if (ctap2debugmediationid.is_set || is_set(ctap2debugmediationid.yfilter)) leaf_name_data.push_back(ctap2debugmediationid.get_name_leafdata());
    if (ctap2debugstreamid.is_set || is_set(ctap2debugstreamid.yfilter)) leaf_name_data.push_back(ctap2debugstreamid.get_name_leafdata());
    if (ctap2debugmessage.is_set || is_set(ctap2debugmessage.yfilter)) leaf_name_data.push_back(ctap2debugmessage.get_name_leafdata());
    if (ctap2debugstatus.is_set || is_set(ctap2debugstatus.yfilter)) leaf_name_data.push_back(ctap2debugstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cTap2DebugIndex")
    {
        ctap2debugindex = value;
        ctap2debugindex.value_namespace = name_space;
        ctap2debugindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2DebugMediationId")
    {
        ctap2debugmediationid = value;
        ctap2debugmediationid.value_namespace = name_space;
        ctap2debugmediationid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2DebugStreamId")
    {
        ctap2debugstreamid = value;
        ctap2debugstreamid.value_namespace = name_space;
        ctap2debugstreamid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2DebugMessage")
    {
        ctap2debugmessage = value;
        ctap2debugmessage.value_namespace = name_space;
        ctap2debugmessage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2DebugStatus")
    {
        ctap2debugstatus = value;
        ctap2debugstatus.value_namespace = name_space;
        ctap2debugstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cTap2DebugIndex")
    {
        ctap2debugindex.yfilter = yfilter;
    }
    if(value_path == "cTap2DebugMediationId")
    {
        ctap2debugmediationid.yfilter = yfilter;
    }
    if(value_path == "cTap2DebugStreamId")
    {
        ctap2debugstreamid.yfilter = yfilter;
    }
    if(value_path == "cTap2DebugMessage")
    {
        ctap2debugmessage.yfilter = yfilter;
    }
    if(value_path == "cTap2DebugStatus")
    {
        ctap2debugstatus.yfilter = yfilter;
    }
}

bool CISCOTAP2MIB::CTap2DebugTable::CTap2DebugEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cTap2DebugIndex" || name == "cTap2DebugMediationId" || name == "cTap2DebugStreamId" || name == "cTap2DebugMessage" || name == "cTap2DebugStatus")
        return true;
    return false;
}

CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserTable()
    :
    ctap2debuguserentry(this, {"ctap2mediationcontentid", "ctap2debugusername"})
{

    yang_name = "cTap2DebugUserTable"; yang_parent_name = "CISCO-TAP2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOTAP2MIB::CTap2DebugUserTable::~CTap2DebugUserTable()
{
}

bool CISCOTAP2MIB::CTap2DebugUserTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ctap2debuguserentry.len(); index++)
    {
        if(ctap2debuguserentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOTAP2MIB::CTap2DebugUserTable::has_operation() const
{
    for (std::size_t index=0; index<ctap2debuguserentry.len(); index++)
    {
        if(ctap2debuguserentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOTAP2MIB::CTap2DebugUserTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOTAP2MIB::CTap2DebugUserTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2DebugUserTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOTAP2MIB::CTap2DebugUserTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOTAP2MIB::CTap2DebugUserTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cTap2DebugUserEntry")
    {
        auto ent_ = std::make_shared<CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry>();
        ent_->parent = this;
        ctap2debuguserentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOTAP2MIB::CTap2DebugUserTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ctap2debuguserentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOTAP2MIB::CTap2DebugUserTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOTAP2MIB::CTap2DebugUserTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOTAP2MIB::CTap2DebugUserTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cTap2DebugUserEntry")
        return true;
    return false;
}

CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry::CTap2DebugUserEntry()
    :
    ctap2mediationcontentid{YType::str, "cTap2MediationContentId"},
    ctap2debugusername{YType::str, "cTap2DebugUserName"},
    ctap2debugusertimeout{YType::str, "cTap2DebugUserTimeout"},
    ctap2debuguserstoragetype{YType::enumeration, "cTap2DebugUserStorageType"},
    ctap2debuguserstatus{YType::enumeration, "cTap2DebugUserStatus"}
{

    yang_name = "cTap2DebugUserEntry"; yang_parent_name = "cTap2DebugUserTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry::~CTap2DebugUserEntry()
{
}

bool CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry::has_data() const
{
    if (is_presence_container) return true;
    return ctap2mediationcontentid.is_set
	|| ctap2debugusername.is_set
	|| ctap2debugusertimeout.is_set
	|| ctap2debuguserstoragetype.is_set
	|| ctap2debuguserstatus.is_set;
}

bool CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctap2mediationcontentid.yfilter)
	|| ydk::is_set(ctap2debugusername.yfilter)
	|| ydk::is_set(ctap2debugusertimeout.yfilter)
	|| ydk::is_set(ctap2debuguserstoragetype.yfilter)
	|| ydk::is_set(ctap2debuguserstatus.yfilter);
}

std::string CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/cTap2DebugUserTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2DebugUserEntry";
    ADD_KEY_TOKEN(ctap2mediationcontentid, "cTap2MediationContentId");
    ADD_KEY_TOKEN(ctap2debugusername, "cTap2DebugUserName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctap2mediationcontentid.is_set || is_set(ctap2mediationcontentid.yfilter)) leaf_name_data.push_back(ctap2mediationcontentid.get_name_leafdata());
    if (ctap2debugusername.is_set || is_set(ctap2debugusername.yfilter)) leaf_name_data.push_back(ctap2debugusername.get_name_leafdata());
    if (ctap2debugusertimeout.is_set || is_set(ctap2debugusertimeout.yfilter)) leaf_name_data.push_back(ctap2debugusertimeout.get_name_leafdata());
    if (ctap2debuguserstoragetype.is_set || is_set(ctap2debuguserstoragetype.yfilter)) leaf_name_data.push_back(ctap2debuguserstoragetype.get_name_leafdata());
    if (ctap2debuguserstatus.is_set || is_set(ctap2debuguserstatus.yfilter)) leaf_name_data.push_back(ctap2debuguserstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cTap2MediationContentId")
    {
        ctap2mediationcontentid = value;
        ctap2mediationcontentid.value_namespace = name_space;
        ctap2mediationcontentid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2DebugUserName")
    {
        ctap2debugusername = value;
        ctap2debugusername.value_namespace = name_space;
        ctap2debugusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2DebugUserTimeout")
    {
        ctap2debugusertimeout = value;
        ctap2debugusertimeout.value_namespace = name_space;
        ctap2debugusertimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2DebugUserStorageType")
    {
        ctap2debuguserstoragetype = value;
        ctap2debuguserstoragetype.value_namespace = name_space;
        ctap2debuguserstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cTap2DebugUserStatus")
    {
        ctap2debuguserstatus = value;
        ctap2debuguserstatus.value_namespace = name_space;
        ctap2debuguserstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cTap2MediationContentId")
    {
        ctap2mediationcontentid.yfilter = yfilter;
    }
    if(value_path == "cTap2DebugUserName")
    {
        ctap2debugusername.yfilter = yfilter;
    }
    if(value_path == "cTap2DebugUserTimeout")
    {
        ctap2debugusertimeout.yfilter = yfilter;
    }
    if(value_path == "cTap2DebugUserStorageType")
    {
        ctap2debuguserstoragetype.yfilter = yfilter;
    }
    if(value_path == "cTap2DebugUserStatus")
    {
        ctap2debuguserstatus.yfilter = yfilter;
    }
}

bool CISCOTAP2MIB::CTap2DebugUserTable::CTap2DebugUserEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cTap2MediationContentId" || name == "cTap2DebugUserName" || name == "cTap2DebugUserTimeout" || name == "cTap2DebugUserStorageType" || name == "cTap2DebugUserStatus")
        return true;
    return false;
}

const Enum::YLeaf CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::CTap2MediationTransport::udp {1, "udp"};
const Enum::YLeaf CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::CTap2MediationTransport::rtpNack {2, "rtpNack"};
const Enum::YLeaf CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::CTap2MediationTransport::tcp {3, "tcp"};
const Enum::YLeaf CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::CTap2MediationTransport::sctp {4, "sctp"};
const Enum::YLeaf CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::CTap2MediationTransport::rtp {5, "rtp"};
const Enum::YLeaf CISCOTAP2MIB::CTap2MediationTable::CTap2MediationEntry::CTap2MediationTransport::radius {6, "radius"};

const Enum::YLeaf CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::CTap2StreamType::ip {1, "ip"};
const Enum::YLeaf CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::CTap2StreamType::mac {2, "mac"};
const Enum::YLeaf CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::CTap2StreamType::userConnection {3, "userConnection"};
const Enum::YLeaf CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::CTap2StreamType::msPdsn {4, "msPdsn"};
const Enum::YLeaf CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::CTap2StreamType::mobility {5, "mobility"};
const Enum::YLeaf CISCOTAP2MIB::CTap2StreamTable::CTap2StreamEntry::CTap2StreamType::voip {6, "voip"};


}
}

