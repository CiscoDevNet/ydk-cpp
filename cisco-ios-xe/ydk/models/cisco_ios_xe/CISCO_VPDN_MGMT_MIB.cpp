
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VPDN_MGMT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_VPDN_MGMT_MIB {

CISCOVPDNMGMTMIB::CISCOVPDNMGMTMIB()
    :
    ciscovpdnmgmtmibnotifs(std::make_shared<CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs>())
	,cvpdnbundlechildtable(std::make_shared<CISCOVPDNMGMTMIB::Cvpdnbundlechildtable>())
	,cvpdnbundletable(std::make_shared<CISCOVPDNMGMTMIB::Cvpdnbundletable>())
	,cvpdnmultilinkinfo(std::make_shared<CISCOVPDNMGMTMIB::Cvpdnmultilinkinfo>())
	,cvpdnsessionattrtable(std::make_shared<CISCOVPDNMGMTMIB::Cvpdnsessionattrtable>())
	,cvpdnsysteminfo(std::make_shared<CISCOVPDNMGMTMIB::Cvpdnsysteminfo>())
	,cvpdnsystemtable(std::make_shared<CISCOVPDNMGMTMIB::Cvpdnsystemtable>())
	,cvpdntemplatetable(std::make_shared<CISCOVPDNMGMTMIB::Cvpdntemplatetable>())
	,cvpdntunnelattrtable(std::make_shared<CISCOVPDNMGMTMIB::Cvpdntunnelattrtable>())
	,cvpdntunnelsessiontable(std::make_shared<CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable>())
	,cvpdntunneltable(std::make_shared<CISCOVPDNMGMTMIB::Cvpdntunneltable>())
	,cvpdnusertofailhistinfotable(std::make_shared<CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable>())
{
    ciscovpdnmgmtmibnotifs->parent = this;
    cvpdnbundlechildtable->parent = this;
    cvpdnbundletable->parent = this;
    cvpdnmultilinkinfo->parent = this;
    cvpdnsessionattrtable->parent = this;
    cvpdnsysteminfo->parent = this;
    cvpdnsystemtable->parent = this;
    cvpdntemplatetable->parent = this;
    cvpdntunnelattrtable->parent = this;
    cvpdntunnelsessiontable->parent = this;
    cvpdntunneltable->parent = this;
    cvpdnusertofailhistinfotable->parent = this;

    yang_name = "CISCO-VPDN-MGMT-MIB"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::~CISCOVPDNMGMTMIB()
{
}

bool CISCOVPDNMGMTMIB::has_data() const
{
    return (ciscovpdnmgmtmibnotifs !=  nullptr && ciscovpdnmgmtmibnotifs->has_data())
	|| (cvpdnbundlechildtable !=  nullptr && cvpdnbundlechildtable->has_data())
	|| (cvpdnbundletable !=  nullptr && cvpdnbundletable->has_data())
	|| (cvpdnmultilinkinfo !=  nullptr && cvpdnmultilinkinfo->has_data())
	|| (cvpdnsessionattrtable !=  nullptr && cvpdnsessionattrtable->has_data())
	|| (cvpdnsysteminfo !=  nullptr && cvpdnsysteminfo->has_data())
	|| (cvpdnsystemtable !=  nullptr && cvpdnsystemtable->has_data())
	|| (cvpdntemplatetable !=  nullptr && cvpdntemplatetable->has_data())
	|| (cvpdntunnelattrtable !=  nullptr && cvpdntunnelattrtable->has_data())
	|| (cvpdntunnelsessiontable !=  nullptr && cvpdntunnelsessiontable->has_data())
	|| (cvpdntunneltable !=  nullptr && cvpdntunneltable->has_data())
	|| (cvpdnusertofailhistinfotable !=  nullptr && cvpdnusertofailhistinfotable->has_data());
}

bool CISCOVPDNMGMTMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciscovpdnmgmtmibnotifs !=  nullptr && ciscovpdnmgmtmibnotifs->has_operation())
	|| (cvpdnbundlechildtable !=  nullptr && cvpdnbundlechildtable->has_operation())
	|| (cvpdnbundletable !=  nullptr && cvpdnbundletable->has_operation())
	|| (cvpdnmultilinkinfo !=  nullptr && cvpdnmultilinkinfo->has_operation())
	|| (cvpdnsessionattrtable !=  nullptr && cvpdnsessionattrtable->has_operation())
	|| (cvpdnsysteminfo !=  nullptr && cvpdnsysteminfo->has_operation())
	|| (cvpdnsystemtable !=  nullptr && cvpdnsystemtable->has_operation())
	|| (cvpdntemplatetable !=  nullptr && cvpdntemplatetable->has_operation())
	|| (cvpdntunnelattrtable !=  nullptr && cvpdntunnelattrtable->has_operation())
	|| (cvpdntunnelsessiontable !=  nullptr && cvpdntunnelsessiontable->has_operation())
	|| (cvpdntunneltable !=  nullptr && cvpdntunneltable->has_operation())
	|| (cvpdnusertofailhistinfotable !=  nullptr && cvpdnusertofailhistinfotable->has_operation());
}

std::string CISCOVPDNMGMTMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoVpdnMgmtMIBNotifs")
    {
        if(ciscovpdnmgmtmibnotifs == nullptr)
        {
            ciscovpdnmgmtmibnotifs = std::make_shared<CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs>();
        }
        return ciscovpdnmgmtmibnotifs;
    }

    if(child_yang_name == "cvpdnBundleChildTable")
    {
        if(cvpdnbundlechildtable == nullptr)
        {
            cvpdnbundlechildtable = std::make_shared<CISCOVPDNMGMTMIB::Cvpdnbundlechildtable>();
        }
        return cvpdnbundlechildtable;
    }

    if(child_yang_name == "cvpdnBundleTable")
    {
        if(cvpdnbundletable == nullptr)
        {
            cvpdnbundletable = std::make_shared<CISCOVPDNMGMTMIB::Cvpdnbundletable>();
        }
        return cvpdnbundletable;
    }

    if(child_yang_name == "cvpdnMultilinkInfo")
    {
        if(cvpdnmultilinkinfo == nullptr)
        {
            cvpdnmultilinkinfo = std::make_shared<CISCOVPDNMGMTMIB::Cvpdnmultilinkinfo>();
        }
        return cvpdnmultilinkinfo;
    }

    if(child_yang_name == "cvpdnSessionAttrTable")
    {
        if(cvpdnsessionattrtable == nullptr)
        {
            cvpdnsessionattrtable = std::make_shared<CISCOVPDNMGMTMIB::Cvpdnsessionattrtable>();
        }
        return cvpdnsessionattrtable;
    }

    if(child_yang_name == "cvpdnSystemInfo")
    {
        if(cvpdnsysteminfo == nullptr)
        {
            cvpdnsysteminfo = std::make_shared<CISCOVPDNMGMTMIB::Cvpdnsysteminfo>();
        }
        return cvpdnsysteminfo;
    }

    if(child_yang_name == "cvpdnSystemTable")
    {
        if(cvpdnsystemtable == nullptr)
        {
            cvpdnsystemtable = std::make_shared<CISCOVPDNMGMTMIB::Cvpdnsystemtable>();
        }
        return cvpdnsystemtable;
    }

    if(child_yang_name == "cvpdnTemplateTable")
    {
        if(cvpdntemplatetable == nullptr)
        {
            cvpdntemplatetable = std::make_shared<CISCOVPDNMGMTMIB::Cvpdntemplatetable>();
        }
        return cvpdntemplatetable;
    }

    if(child_yang_name == "cvpdnTunnelAttrTable")
    {
        if(cvpdntunnelattrtable == nullptr)
        {
            cvpdntunnelattrtable = std::make_shared<CISCOVPDNMGMTMIB::Cvpdntunnelattrtable>();
        }
        return cvpdntunnelattrtable;
    }

    if(child_yang_name == "cvpdnTunnelSessionTable")
    {
        if(cvpdntunnelsessiontable == nullptr)
        {
            cvpdntunnelsessiontable = std::make_shared<CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable>();
        }
        return cvpdntunnelsessiontable;
    }

    if(child_yang_name == "cvpdnTunnelTable")
    {
        if(cvpdntunneltable == nullptr)
        {
            cvpdntunneltable = std::make_shared<CISCOVPDNMGMTMIB::Cvpdntunneltable>();
        }
        return cvpdntunneltable;
    }

    if(child_yang_name == "cvpdnUserToFailHistInfoTable")
    {
        if(cvpdnusertofailhistinfotable == nullptr)
        {
            cvpdnusertofailhistinfotable = std::make_shared<CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable>();
        }
        return cvpdnusertofailhistinfotable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciscovpdnmgmtmibnotifs != nullptr)
    {
        children["ciscoVpdnMgmtMIBNotifs"] = ciscovpdnmgmtmibnotifs;
    }

    if(cvpdnbundlechildtable != nullptr)
    {
        children["cvpdnBundleChildTable"] = cvpdnbundlechildtable;
    }

    if(cvpdnbundletable != nullptr)
    {
        children["cvpdnBundleTable"] = cvpdnbundletable;
    }

    if(cvpdnmultilinkinfo != nullptr)
    {
        children["cvpdnMultilinkInfo"] = cvpdnmultilinkinfo;
    }

    if(cvpdnsessionattrtable != nullptr)
    {
        children["cvpdnSessionAttrTable"] = cvpdnsessionattrtable;
    }

    if(cvpdnsysteminfo != nullptr)
    {
        children["cvpdnSystemInfo"] = cvpdnsysteminfo;
    }

    if(cvpdnsystemtable != nullptr)
    {
        children["cvpdnSystemTable"] = cvpdnsystemtable;
    }

    if(cvpdntemplatetable != nullptr)
    {
        children["cvpdnTemplateTable"] = cvpdntemplatetable;
    }

    if(cvpdntunnelattrtable != nullptr)
    {
        children["cvpdnTunnelAttrTable"] = cvpdntunnelattrtable;
    }

    if(cvpdntunnelsessiontable != nullptr)
    {
        children["cvpdnTunnelSessionTable"] = cvpdntunnelsessiontable;
    }

    if(cvpdntunneltable != nullptr)
    {
        children["cvpdnTunnelTable"] = cvpdntunneltable;
    }

    if(cvpdnusertofailhistinfotable != nullptr)
    {
        children["cvpdnUserToFailHistInfoTable"] = cvpdnusertofailhistinfotable;
    }

    return children;
}

void CISCOVPDNMGMTMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::clone_ptr() const
{
    return std::make_shared<CISCOVPDNMGMTMIB>();
}

std::string CISCOVPDNMGMTMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOVPDNMGMTMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOVPDNMGMTMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOVPDNMGMTMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOVPDNMGMTMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoVpdnMgmtMIBNotifs" || name == "cvpdnBundleChildTable" || name == "cvpdnBundleTable" || name == "cvpdnMultilinkInfo" || name == "cvpdnSessionAttrTable" || name == "cvpdnSystemInfo" || name == "cvpdnSystemTable" || name == "cvpdnTemplateTable" || name == "cvpdnTunnelAttrTable" || name == "cvpdnTunnelSessionTable" || name == "cvpdnTunnelTable" || name == "cvpdnUserToFailHistInfoTable")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::Ciscovpdnmgmtmibnotifs()
    :
    cvpdnnotifsessionevent{YType::enumeration, "cvpdnNotifSessionEvent"},
    cvpdnnotifsessionid{YType::int32, "cvpdnNotifSessionID"}
{

    yang_name = "ciscoVpdnMgmtMIBNotifs"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::~Ciscovpdnmgmtmibnotifs()
{
}

bool CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::has_data() const
{
    return cvpdnnotifsessionevent.is_set
	|| cvpdnnotifsessionid.is_set;
}

bool CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnnotifsessionevent.yfilter)
	|| ydk::is_set(cvpdnnotifsessionid.yfilter);
}

std::string CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoVpdnMgmtMIBNotifs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnnotifsessionevent.is_set || is_set(cvpdnnotifsessionevent.yfilter)) leaf_name_data.push_back(cvpdnnotifsessionevent.get_name_leafdata());
    if (cvpdnnotifsessionid.is_set || is_set(cvpdnnotifsessionid.yfilter)) leaf_name_data.push_back(cvpdnnotifsessionid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnNotifSessionEvent")
    {
        cvpdnnotifsessionevent = value;
        cvpdnnotifsessionevent.value_namespace = name_space;
        cvpdnnotifsessionevent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnNotifSessionID")
    {
        cvpdnnotifsessionid = value;
        cvpdnnotifsessionid.value_namespace = name_space;
        cvpdnnotifsessionid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnNotifSessionEvent")
    {
        cvpdnnotifsessionevent.yfilter = yfilter;
    }
    if(value_path == "cvpdnNotifSessionID")
    {
        cvpdnnotifsessionid.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnNotifSessionEvent" || name == "cvpdnNotifSessionID")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::Cvpdnbundlechildtable()
{

    yang_name = "cvpdnBundleChildTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::~Cvpdnbundlechildtable()
{
}

bool CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::has_data() const
{
    for (std::size_t index=0; index<cvpdnbundlechildentry.size(); index++)
    {
        if(cvpdnbundlechildentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnbundlechildentry.size(); index++)
    {
        if(cvpdnbundlechildentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnBundleChildTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnBundleChildEntry")
    {
        for(auto const & c : cvpdnbundlechildentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::Cvpdnbundlechildentry>();
        c->parent = this;
        cvpdnbundlechildentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdnbundlechildentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnBundleChildEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::Cvpdnbundlechildentry::Cvpdnbundlechildentry()
    :
    cvpdnbundlename{YType::str, "cvpdnBundleName"},
    cvpdnbundlechildtunneltype{YType::enumeration, "cvpdnBundleChildTunnelType"},
    cvpdnbundlechildtunnelid{YType::uint32, "cvpdnBundleChildTunnelId"},
    cvpdnbundlechildsessionid{YType::uint32, "cvpdnBundleChildSessionId"}
{

    yang_name = "cvpdnBundleChildEntry"; yang_parent_name = "cvpdnBundleChildTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::Cvpdnbundlechildentry::~Cvpdnbundlechildentry()
{
}

bool CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::Cvpdnbundlechildentry::has_data() const
{
    return cvpdnbundlename.is_set
	|| cvpdnbundlechildtunneltype.is_set
	|| cvpdnbundlechildtunnelid.is_set
	|| cvpdnbundlechildsessionid.is_set;
}

bool CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::Cvpdnbundlechildentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnbundlename.yfilter)
	|| ydk::is_set(cvpdnbundlechildtunneltype.yfilter)
	|| ydk::is_set(cvpdnbundlechildtunnelid.yfilter)
	|| ydk::is_set(cvpdnbundlechildsessionid.yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::Cvpdnbundlechildentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnBundleChildTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::Cvpdnbundlechildentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnBundleChildEntry" <<"[cvpdnBundleName='" <<cvpdnbundlename <<"']" <<"[cvpdnBundleChildTunnelType='" <<cvpdnbundlechildtunneltype <<"']" <<"[cvpdnBundleChildTunnelId='" <<cvpdnbundlechildtunnelid <<"']" <<"[cvpdnBundleChildSessionId='" <<cvpdnbundlechildsessionid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::Cvpdnbundlechildentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnbundlename.is_set || is_set(cvpdnbundlename.yfilter)) leaf_name_data.push_back(cvpdnbundlename.get_name_leafdata());
    if (cvpdnbundlechildtunneltype.is_set || is_set(cvpdnbundlechildtunneltype.yfilter)) leaf_name_data.push_back(cvpdnbundlechildtunneltype.get_name_leafdata());
    if (cvpdnbundlechildtunnelid.is_set || is_set(cvpdnbundlechildtunnelid.yfilter)) leaf_name_data.push_back(cvpdnbundlechildtunnelid.get_name_leafdata());
    if (cvpdnbundlechildsessionid.is_set || is_set(cvpdnbundlechildsessionid.yfilter)) leaf_name_data.push_back(cvpdnbundlechildsessionid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::Cvpdnbundlechildentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::Cvpdnbundlechildentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::Cvpdnbundlechildentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnBundleName")
    {
        cvpdnbundlename = value;
        cvpdnbundlename.value_namespace = name_space;
        cvpdnbundlename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleChildTunnelType")
    {
        cvpdnbundlechildtunneltype = value;
        cvpdnbundlechildtunneltype.value_namespace = name_space;
        cvpdnbundlechildtunneltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleChildTunnelId")
    {
        cvpdnbundlechildtunnelid = value;
        cvpdnbundlechildtunnelid.value_namespace = name_space;
        cvpdnbundlechildtunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleChildSessionId")
    {
        cvpdnbundlechildsessionid = value;
        cvpdnbundlechildsessionid.value_namespace = name_space;
        cvpdnbundlechildsessionid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::Cvpdnbundlechildentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnBundleName")
    {
        cvpdnbundlename.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleChildTunnelType")
    {
        cvpdnbundlechildtunneltype.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleChildTunnelId")
    {
        cvpdnbundlechildtunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleChildSessionId")
    {
        cvpdnbundlechildsessionid.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::Cvpdnbundlechildtable::Cvpdnbundlechildentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnBundleName" || name == "cvpdnBundleChildTunnelType" || name == "cvpdnBundleChildTunnelId" || name == "cvpdnBundleChildSessionId")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundletable()
{

    yang_name = "cvpdnBundleTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdnbundletable::~Cvpdnbundletable()
{
}

bool CISCOVPDNMGMTMIB::Cvpdnbundletable::has_data() const
{
    for (std::size_t index=0; index<cvpdnbundleentry.size(); index++)
    {
        if(cvpdnbundleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::Cvpdnbundletable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnbundleentry.size(); index++)
    {
        if(cvpdnbundleentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdnbundletable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdnbundletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnBundleTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdnbundletable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdnbundletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnBundleEntry")
    {
        for(auto const & c : cvpdnbundleentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry>();
        c->parent = this;
        cvpdnbundleentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdnbundletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdnbundleentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVPDNMGMTMIB::Cvpdnbundletable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::Cvpdnbundletable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::Cvpdnbundletable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnBundleEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::Cvpdnbundleentry()
    :
    cvpdnbundlename{YType::str, "cvpdnBundleName"},
    cvpdnbundleendpoint{YType::str, "cvpdnBundleEndpoint"},
    cvpdnbundleendpointclass{YType::enumeration, "cvpdnBundleEndpointClass"},
    cvpdnbundleendpointtype{YType::enumeration, "cvpdnBundleEndpointType"},
    cvpdnbundlelinkcount{YType::uint32, "cvpdnBundleLinkCount"},
    cvpdnbundlepeeripaddr{YType::str, "cvpdnBundlePeerIpAddr"},
    cvpdnbundlepeeripaddrtype{YType::enumeration, "cvpdnBundlePeerIpAddrType"}
{

    yang_name = "cvpdnBundleEntry"; yang_parent_name = "cvpdnBundleTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::~Cvpdnbundleentry()
{
}

bool CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::has_data() const
{
    return cvpdnbundlename.is_set
	|| cvpdnbundleendpoint.is_set
	|| cvpdnbundleendpointclass.is_set
	|| cvpdnbundleendpointtype.is_set
	|| cvpdnbundlelinkcount.is_set
	|| cvpdnbundlepeeripaddr.is_set
	|| cvpdnbundlepeeripaddrtype.is_set;
}

bool CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnbundlename.yfilter)
	|| ydk::is_set(cvpdnbundleendpoint.yfilter)
	|| ydk::is_set(cvpdnbundleendpointclass.yfilter)
	|| ydk::is_set(cvpdnbundleendpointtype.yfilter)
	|| ydk::is_set(cvpdnbundlelinkcount.yfilter)
	|| ydk::is_set(cvpdnbundlepeeripaddr.yfilter)
	|| ydk::is_set(cvpdnbundlepeeripaddrtype.yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnBundleTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnBundleEntry" <<"[cvpdnBundleName='" <<cvpdnbundlename <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnbundlename.is_set || is_set(cvpdnbundlename.yfilter)) leaf_name_data.push_back(cvpdnbundlename.get_name_leafdata());
    if (cvpdnbundleendpoint.is_set || is_set(cvpdnbundleendpoint.yfilter)) leaf_name_data.push_back(cvpdnbundleendpoint.get_name_leafdata());
    if (cvpdnbundleendpointclass.is_set || is_set(cvpdnbundleendpointclass.yfilter)) leaf_name_data.push_back(cvpdnbundleendpointclass.get_name_leafdata());
    if (cvpdnbundleendpointtype.is_set || is_set(cvpdnbundleendpointtype.yfilter)) leaf_name_data.push_back(cvpdnbundleendpointtype.get_name_leafdata());
    if (cvpdnbundlelinkcount.is_set || is_set(cvpdnbundlelinkcount.yfilter)) leaf_name_data.push_back(cvpdnbundlelinkcount.get_name_leafdata());
    if (cvpdnbundlepeeripaddr.is_set || is_set(cvpdnbundlepeeripaddr.yfilter)) leaf_name_data.push_back(cvpdnbundlepeeripaddr.get_name_leafdata());
    if (cvpdnbundlepeeripaddrtype.is_set || is_set(cvpdnbundlepeeripaddrtype.yfilter)) leaf_name_data.push_back(cvpdnbundlepeeripaddrtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnBundleName")
    {
        cvpdnbundlename = value;
        cvpdnbundlename.value_namespace = name_space;
        cvpdnbundlename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleEndpoint")
    {
        cvpdnbundleendpoint = value;
        cvpdnbundleendpoint.value_namespace = name_space;
        cvpdnbundleendpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleEndpointClass")
    {
        cvpdnbundleendpointclass = value;
        cvpdnbundleendpointclass.value_namespace = name_space;
        cvpdnbundleendpointclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleEndpointType")
    {
        cvpdnbundleendpointtype = value;
        cvpdnbundleendpointtype.value_namespace = name_space;
        cvpdnbundleendpointtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundleLinkCount")
    {
        cvpdnbundlelinkcount = value;
        cvpdnbundlelinkcount.value_namespace = name_space;
        cvpdnbundlelinkcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundlePeerIpAddr")
    {
        cvpdnbundlepeeripaddr = value;
        cvpdnbundlepeeripaddr.value_namespace = name_space;
        cvpdnbundlepeeripaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundlePeerIpAddrType")
    {
        cvpdnbundlepeeripaddrtype = value;
        cvpdnbundlepeeripaddrtype.value_namespace = name_space;
        cvpdnbundlepeeripaddrtype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnBundleName")
    {
        cvpdnbundlename.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleEndpoint")
    {
        cvpdnbundleendpoint.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleEndpointClass")
    {
        cvpdnbundleendpointclass.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleEndpointType")
    {
        cvpdnbundleendpointtype.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundleLinkCount")
    {
        cvpdnbundlelinkcount.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundlePeerIpAddr")
    {
        cvpdnbundlepeeripaddr.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundlePeerIpAddrType")
    {
        cvpdnbundlepeeripaddrtype.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnBundleName" || name == "cvpdnBundleEndpoint" || name == "cvpdnBundleEndpointClass" || name == "cvpdnBundleEndpointType" || name == "cvpdnBundleLinkCount" || name == "cvpdnBundlePeerIpAddr" || name == "cvpdnBundlePeerIpAddrType")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdnmultilinkinfo::Cvpdnmultilinkinfo()
    :
    cvpdnbundlelastchanged{YType::uint32, "cvpdnBundleLastChanged"},
    cvpdnbundleswithmorethantwolinks{YType::uint32, "cvpdnBundlesWithMoreThanTwoLinks"},
    cvpdnbundleswithonelink{YType::uint32, "cvpdnBundlesWithOneLink"},
    cvpdnbundleswithtwolinks{YType::uint32, "cvpdnBundlesWithTwoLinks"}
{

    yang_name = "cvpdnMultilinkInfo"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdnmultilinkinfo::~Cvpdnmultilinkinfo()
{
}

bool CISCOVPDNMGMTMIB::Cvpdnmultilinkinfo::has_data() const
{
    return cvpdnbundlelastchanged.is_set
	|| cvpdnbundleswithmorethantwolinks.is_set
	|| cvpdnbundleswithonelink.is_set
	|| cvpdnbundleswithtwolinks.is_set;
}

bool CISCOVPDNMGMTMIB::Cvpdnmultilinkinfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnbundlelastchanged.yfilter)
	|| ydk::is_set(cvpdnbundleswithmorethantwolinks.yfilter)
	|| ydk::is_set(cvpdnbundleswithonelink.yfilter)
	|| ydk::is_set(cvpdnbundleswithtwolinks.yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdnmultilinkinfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdnmultilinkinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnMultilinkInfo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdnmultilinkinfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnbundlelastchanged.is_set || is_set(cvpdnbundlelastchanged.yfilter)) leaf_name_data.push_back(cvpdnbundlelastchanged.get_name_leafdata());
    if (cvpdnbundleswithmorethantwolinks.is_set || is_set(cvpdnbundleswithmorethantwolinks.yfilter)) leaf_name_data.push_back(cvpdnbundleswithmorethantwolinks.get_name_leafdata());
    if (cvpdnbundleswithonelink.is_set || is_set(cvpdnbundleswithonelink.yfilter)) leaf_name_data.push_back(cvpdnbundleswithonelink.get_name_leafdata());
    if (cvpdnbundleswithtwolinks.is_set || is_set(cvpdnbundleswithtwolinks.yfilter)) leaf_name_data.push_back(cvpdnbundleswithtwolinks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdnmultilinkinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdnmultilinkinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVPDNMGMTMIB::Cvpdnmultilinkinfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnBundleLastChanged")
    {
        cvpdnbundlelastchanged = value;
        cvpdnbundlelastchanged.value_namespace = name_space;
        cvpdnbundlelastchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundlesWithMoreThanTwoLinks")
    {
        cvpdnbundleswithmorethantwolinks = value;
        cvpdnbundleswithmorethantwolinks.value_namespace = name_space;
        cvpdnbundleswithmorethantwolinks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundlesWithOneLink")
    {
        cvpdnbundleswithonelink = value;
        cvpdnbundleswithonelink.value_namespace = name_space;
        cvpdnbundleswithonelink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnBundlesWithTwoLinks")
    {
        cvpdnbundleswithtwolinks = value;
        cvpdnbundleswithtwolinks.value_namespace = name_space;
        cvpdnbundleswithtwolinks.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::Cvpdnmultilinkinfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnBundleLastChanged")
    {
        cvpdnbundlelastchanged.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundlesWithMoreThanTwoLinks")
    {
        cvpdnbundleswithmorethantwolinks.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundlesWithOneLink")
    {
        cvpdnbundleswithonelink.yfilter = yfilter;
    }
    if(value_path == "cvpdnBundlesWithTwoLinks")
    {
        cvpdnbundleswithtwolinks.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::Cvpdnmultilinkinfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnBundleLastChanged" || name == "cvpdnBundlesWithMoreThanTwoLinks" || name == "cvpdnBundlesWithOneLink" || name == "cvpdnBundlesWithTwoLinks")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrtable()
{

    yang_name = "cvpdnSessionAttrTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::~Cvpdnsessionattrtable()
{
}

bool CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::has_data() const
{
    for (std::size_t index=0; index<cvpdnsessionattrentry.size(); index++)
    {
        if(cvpdnsessionattrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnsessionattrentry.size(); index++)
    {
        if(cvpdnsessionattrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSessionAttrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnSessionAttrEntry")
    {
        for(auto const & c : cvpdnsessionattrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry>();
        c->parent = this;
        cvpdnsessionattrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdnsessionattrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnSessionAttrEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrentry()
    :
    cvpdnsystemtunneltype{YType::enumeration, "cvpdnSystemTunnelType"},
    cvpdntunnelattrtunnelid{YType::str, "cvpdnTunnelAttrTunnelId"},
    cvpdnsessionattrsessionid{YType::int32, "cvpdnSessionAttrSessionId"},
    cvpdnsessionattrbytesin{YType::uint32, "cvpdnSessionAttrBytesIn"},
    cvpdnsessionattrbytesout{YType::uint32, "cvpdnSessionAttrBytesOut"},
    cvpdnsessionattrcallduration{YType::uint32, "cvpdnSessionAttrCallDuration"},
    cvpdnsessionattrdevicecallerid{YType::str, "cvpdnSessionAttrDeviceCallerId"},
    cvpdnsessionattrdevicephyid{YType::int32, "cvpdnSessionAttrDevicePhyId"},
    cvpdnsessionattrdevicetype{YType::enumeration, "cvpdnSessionAttrDeviceType"},
    cvpdnsessionattrds1channelindex{YType::uint32, "cvpdnSessionAttrDS1ChannelIndex"},
    cvpdnsessionattrds1portindex{YType::uint32, "cvpdnSessionAttrDS1PortIndex"},
    cvpdnsessionattrds1slotindex{YType::uint32, "cvpdnSessionAttrDS1SlotIndex"},
    cvpdnsessionattrmodemcallstartindex{YType::uint32, "cvpdnSessionAttrModemCallStartIndex"},
    cvpdnsessionattrmodemcallstarttime{YType::uint32, "cvpdnSessionAttrModemCallStartTime"},
    cvpdnsessionattrmodemportindex{YType::uint32, "cvpdnSessionAttrModemPortIndex"},
    cvpdnsessionattrmodemslotindex{YType::uint32, "cvpdnSessionAttrModemSlotIndex"},
    cvpdnsessionattrmultilink{YType::boolean, "cvpdnSessionAttrMultilink"},
    cvpdnsessionattrmultilinkbundle{YType::str, "cvpdnSessionAttrMultilinkBundle"},
    cvpdnsessionattrmultilinkifindex{YType::int32, "cvpdnSessionAttrMultilinkIfIndex"},
    cvpdnsessionattrpacketsin{YType::uint32, "cvpdnSessionAttrPacketsIn"},
    cvpdnsessionattrpacketsout{YType::uint32, "cvpdnSessionAttrPacketsOut"},
    cvpdnsessionattrrecvpktsdropped{YType::uint32, "cvpdnSessionAttrRecvPktsDropped"},
    cvpdnsessionattrsentpktsdropped{YType::uint32, "cvpdnSessionAttrSentPktsDropped"},
    cvpdnsessionattrstate{YType::enumeration, "cvpdnSessionAttrState"},
    cvpdnsessionattrusername{YType::str, "cvpdnSessionAttrUserName"},
    cvpdnsessionattrvirtualcircuitid{YType::uint32, "cvpdnSessionAttrVirtualCircuitID"}
{

    yang_name = "cvpdnSessionAttrEntry"; yang_parent_name = "cvpdnSessionAttrTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::~Cvpdnsessionattrentry()
{
}

bool CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::has_data() const
{
    return cvpdnsystemtunneltype.is_set
	|| cvpdntunnelattrtunnelid.is_set
	|| cvpdnsessionattrsessionid.is_set
	|| cvpdnsessionattrbytesin.is_set
	|| cvpdnsessionattrbytesout.is_set
	|| cvpdnsessionattrcallduration.is_set
	|| cvpdnsessionattrdevicecallerid.is_set
	|| cvpdnsessionattrdevicephyid.is_set
	|| cvpdnsessionattrdevicetype.is_set
	|| cvpdnsessionattrds1channelindex.is_set
	|| cvpdnsessionattrds1portindex.is_set
	|| cvpdnsessionattrds1slotindex.is_set
	|| cvpdnsessionattrmodemcallstartindex.is_set
	|| cvpdnsessionattrmodemcallstarttime.is_set
	|| cvpdnsessionattrmodemportindex.is_set
	|| cvpdnsessionattrmodemslotindex.is_set
	|| cvpdnsessionattrmultilink.is_set
	|| cvpdnsessionattrmultilinkbundle.is_set
	|| cvpdnsessionattrmultilinkifindex.is_set
	|| cvpdnsessionattrpacketsin.is_set
	|| cvpdnsessionattrpacketsout.is_set
	|| cvpdnsessionattrrecvpktsdropped.is_set
	|| cvpdnsessionattrsentpktsdropped.is_set
	|| cvpdnsessionattrstate.is_set
	|| cvpdnsessionattrusername.is_set
	|| cvpdnsessionattrvirtualcircuitid.is_set;
}

bool CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnsystemtunneltype.yfilter)
	|| ydk::is_set(cvpdntunnelattrtunnelid.yfilter)
	|| ydk::is_set(cvpdnsessionattrsessionid.yfilter)
	|| ydk::is_set(cvpdnsessionattrbytesin.yfilter)
	|| ydk::is_set(cvpdnsessionattrbytesout.yfilter)
	|| ydk::is_set(cvpdnsessionattrcallduration.yfilter)
	|| ydk::is_set(cvpdnsessionattrdevicecallerid.yfilter)
	|| ydk::is_set(cvpdnsessionattrdevicephyid.yfilter)
	|| ydk::is_set(cvpdnsessionattrdevicetype.yfilter)
	|| ydk::is_set(cvpdnsessionattrds1channelindex.yfilter)
	|| ydk::is_set(cvpdnsessionattrds1portindex.yfilter)
	|| ydk::is_set(cvpdnsessionattrds1slotindex.yfilter)
	|| ydk::is_set(cvpdnsessionattrmodemcallstartindex.yfilter)
	|| ydk::is_set(cvpdnsessionattrmodemcallstarttime.yfilter)
	|| ydk::is_set(cvpdnsessionattrmodemportindex.yfilter)
	|| ydk::is_set(cvpdnsessionattrmodemslotindex.yfilter)
	|| ydk::is_set(cvpdnsessionattrmultilink.yfilter)
	|| ydk::is_set(cvpdnsessionattrmultilinkbundle.yfilter)
	|| ydk::is_set(cvpdnsessionattrmultilinkifindex.yfilter)
	|| ydk::is_set(cvpdnsessionattrpacketsin.yfilter)
	|| ydk::is_set(cvpdnsessionattrpacketsout.yfilter)
	|| ydk::is_set(cvpdnsessionattrrecvpktsdropped.yfilter)
	|| ydk::is_set(cvpdnsessionattrsentpktsdropped.yfilter)
	|| ydk::is_set(cvpdnsessionattrstate.yfilter)
	|| ydk::is_set(cvpdnsessionattrusername.yfilter)
	|| ydk::is_set(cvpdnsessionattrvirtualcircuitid.yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnSessionAttrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSessionAttrEntry" <<"[cvpdnSystemTunnelType='" <<cvpdnsystemtunneltype <<"']" <<"[cvpdnTunnelAttrTunnelId='" <<cvpdntunnelattrtunnelid <<"']" <<"[cvpdnSessionAttrSessionId='" <<cvpdnsessionattrsessionid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnsystemtunneltype.is_set || is_set(cvpdnsystemtunneltype.yfilter)) leaf_name_data.push_back(cvpdnsystemtunneltype.get_name_leafdata());
    if (cvpdntunnelattrtunnelid.is_set || is_set(cvpdntunnelattrtunnelid.yfilter)) leaf_name_data.push_back(cvpdntunnelattrtunnelid.get_name_leafdata());
    if (cvpdnsessionattrsessionid.is_set || is_set(cvpdnsessionattrsessionid.yfilter)) leaf_name_data.push_back(cvpdnsessionattrsessionid.get_name_leafdata());
    if (cvpdnsessionattrbytesin.is_set || is_set(cvpdnsessionattrbytesin.yfilter)) leaf_name_data.push_back(cvpdnsessionattrbytesin.get_name_leafdata());
    if (cvpdnsessionattrbytesout.is_set || is_set(cvpdnsessionattrbytesout.yfilter)) leaf_name_data.push_back(cvpdnsessionattrbytesout.get_name_leafdata());
    if (cvpdnsessionattrcallduration.is_set || is_set(cvpdnsessionattrcallduration.yfilter)) leaf_name_data.push_back(cvpdnsessionattrcallduration.get_name_leafdata());
    if (cvpdnsessionattrdevicecallerid.is_set || is_set(cvpdnsessionattrdevicecallerid.yfilter)) leaf_name_data.push_back(cvpdnsessionattrdevicecallerid.get_name_leafdata());
    if (cvpdnsessionattrdevicephyid.is_set || is_set(cvpdnsessionattrdevicephyid.yfilter)) leaf_name_data.push_back(cvpdnsessionattrdevicephyid.get_name_leafdata());
    if (cvpdnsessionattrdevicetype.is_set || is_set(cvpdnsessionattrdevicetype.yfilter)) leaf_name_data.push_back(cvpdnsessionattrdevicetype.get_name_leafdata());
    if (cvpdnsessionattrds1channelindex.is_set || is_set(cvpdnsessionattrds1channelindex.yfilter)) leaf_name_data.push_back(cvpdnsessionattrds1channelindex.get_name_leafdata());
    if (cvpdnsessionattrds1portindex.is_set || is_set(cvpdnsessionattrds1portindex.yfilter)) leaf_name_data.push_back(cvpdnsessionattrds1portindex.get_name_leafdata());
    if (cvpdnsessionattrds1slotindex.is_set || is_set(cvpdnsessionattrds1slotindex.yfilter)) leaf_name_data.push_back(cvpdnsessionattrds1slotindex.get_name_leafdata());
    if (cvpdnsessionattrmodemcallstartindex.is_set || is_set(cvpdnsessionattrmodemcallstartindex.yfilter)) leaf_name_data.push_back(cvpdnsessionattrmodemcallstartindex.get_name_leafdata());
    if (cvpdnsessionattrmodemcallstarttime.is_set || is_set(cvpdnsessionattrmodemcallstarttime.yfilter)) leaf_name_data.push_back(cvpdnsessionattrmodemcallstarttime.get_name_leafdata());
    if (cvpdnsessionattrmodemportindex.is_set || is_set(cvpdnsessionattrmodemportindex.yfilter)) leaf_name_data.push_back(cvpdnsessionattrmodemportindex.get_name_leafdata());
    if (cvpdnsessionattrmodemslotindex.is_set || is_set(cvpdnsessionattrmodemslotindex.yfilter)) leaf_name_data.push_back(cvpdnsessionattrmodemslotindex.get_name_leafdata());
    if (cvpdnsessionattrmultilink.is_set || is_set(cvpdnsessionattrmultilink.yfilter)) leaf_name_data.push_back(cvpdnsessionattrmultilink.get_name_leafdata());
    if (cvpdnsessionattrmultilinkbundle.is_set || is_set(cvpdnsessionattrmultilinkbundle.yfilter)) leaf_name_data.push_back(cvpdnsessionattrmultilinkbundle.get_name_leafdata());
    if (cvpdnsessionattrmultilinkifindex.is_set || is_set(cvpdnsessionattrmultilinkifindex.yfilter)) leaf_name_data.push_back(cvpdnsessionattrmultilinkifindex.get_name_leafdata());
    if (cvpdnsessionattrpacketsin.is_set || is_set(cvpdnsessionattrpacketsin.yfilter)) leaf_name_data.push_back(cvpdnsessionattrpacketsin.get_name_leafdata());
    if (cvpdnsessionattrpacketsout.is_set || is_set(cvpdnsessionattrpacketsout.yfilter)) leaf_name_data.push_back(cvpdnsessionattrpacketsout.get_name_leafdata());
    if (cvpdnsessionattrrecvpktsdropped.is_set || is_set(cvpdnsessionattrrecvpktsdropped.yfilter)) leaf_name_data.push_back(cvpdnsessionattrrecvpktsdropped.get_name_leafdata());
    if (cvpdnsessionattrsentpktsdropped.is_set || is_set(cvpdnsessionattrsentpktsdropped.yfilter)) leaf_name_data.push_back(cvpdnsessionattrsentpktsdropped.get_name_leafdata());
    if (cvpdnsessionattrstate.is_set || is_set(cvpdnsessionattrstate.yfilter)) leaf_name_data.push_back(cvpdnsessionattrstate.get_name_leafdata());
    if (cvpdnsessionattrusername.is_set || is_set(cvpdnsessionattrusername.yfilter)) leaf_name_data.push_back(cvpdnsessionattrusername.get_name_leafdata());
    if (cvpdnsessionattrvirtualcircuitid.is_set || is_set(cvpdnsessionattrvirtualcircuitid.yfilter)) leaf_name_data.push_back(cvpdnsessionattrvirtualcircuitid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype = value;
        cvpdnsystemtunneltype.value_namespace = name_space;
        cvpdnsystemtunneltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrTunnelId")
    {
        cvpdntunnelattrtunnelid = value;
        cvpdntunnelattrtunnelid.value_namespace = name_space;
        cvpdntunnelattrtunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrSessionId")
    {
        cvpdnsessionattrsessionid = value;
        cvpdnsessionattrsessionid.value_namespace = name_space;
        cvpdnsessionattrsessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrBytesIn")
    {
        cvpdnsessionattrbytesin = value;
        cvpdnsessionattrbytesin.value_namespace = name_space;
        cvpdnsessionattrbytesin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrBytesOut")
    {
        cvpdnsessionattrbytesout = value;
        cvpdnsessionattrbytesout.value_namespace = name_space;
        cvpdnsessionattrbytesout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrCallDuration")
    {
        cvpdnsessionattrcallduration = value;
        cvpdnsessionattrcallduration.value_namespace = name_space;
        cvpdnsessionattrcallduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrDeviceCallerId")
    {
        cvpdnsessionattrdevicecallerid = value;
        cvpdnsessionattrdevicecallerid.value_namespace = name_space;
        cvpdnsessionattrdevicecallerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrDevicePhyId")
    {
        cvpdnsessionattrdevicephyid = value;
        cvpdnsessionattrdevicephyid.value_namespace = name_space;
        cvpdnsessionattrdevicephyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrDeviceType")
    {
        cvpdnsessionattrdevicetype = value;
        cvpdnsessionattrdevicetype.value_namespace = name_space;
        cvpdnsessionattrdevicetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrDS1ChannelIndex")
    {
        cvpdnsessionattrds1channelindex = value;
        cvpdnsessionattrds1channelindex.value_namespace = name_space;
        cvpdnsessionattrds1channelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrDS1PortIndex")
    {
        cvpdnsessionattrds1portindex = value;
        cvpdnsessionattrds1portindex.value_namespace = name_space;
        cvpdnsessionattrds1portindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrDS1SlotIndex")
    {
        cvpdnsessionattrds1slotindex = value;
        cvpdnsessionattrds1slotindex.value_namespace = name_space;
        cvpdnsessionattrds1slotindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrModemCallStartIndex")
    {
        cvpdnsessionattrmodemcallstartindex = value;
        cvpdnsessionattrmodemcallstartindex.value_namespace = name_space;
        cvpdnsessionattrmodemcallstartindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrModemCallStartTime")
    {
        cvpdnsessionattrmodemcallstarttime = value;
        cvpdnsessionattrmodemcallstarttime.value_namespace = name_space;
        cvpdnsessionattrmodemcallstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrModemPortIndex")
    {
        cvpdnsessionattrmodemportindex = value;
        cvpdnsessionattrmodemportindex.value_namespace = name_space;
        cvpdnsessionattrmodemportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrModemSlotIndex")
    {
        cvpdnsessionattrmodemslotindex = value;
        cvpdnsessionattrmodemslotindex.value_namespace = name_space;
        cvpdnsessionattrmodemslotindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrMultilink")
    {
        cvpdnsessionattrmultilink = value;
        cvpdnsessionattrmultilink.value_namespace = name_space;
        cvpdnsessionattrmultilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrMultilinkBundle")
    {
        cvpdnsessionattrmultilinkbundle = value;
        cvpdnsessionattrmultilinkbundle.value_namespace = name_space;
        cvpdnsessionattrmultilinkbundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrMultilinkIfIndex")
    {
        cvpdnsessionattrmultilinkifindex = value;
        cvpdnsessionattrmultilinkifindex.value_namespace = name_space;
        cvpdnsessionattrmultilinkifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrPacketsIn")
    {
        cvpdnsessionattrpacketsin = value;
        cvpdnsessionattrpacketsin.value_namespace = name_space;
        cvpdnsessionattrpacketsin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrPacketsOut")
    {
        cvpdnsessionattrpacketsout = value;
        cvpdnsessionattrpacketsout.value_namespace = name_space;
        cvpdnsessionattrpacketsout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrRecvPktsDropped")
    {
        cvpdnsessionattrrecvpktsdropped = value;
        cvpdnsessionattrrecvpktsdropped.value_namespace = name_space;
        cvpdnsessionattrrecvpktsdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrSentPktsDropped")
    {
        cvpdnsessionattrsentpktsdropped = value;
        cvpdnsessionattrsentpktsdropped.value_namespace = name_space;
        cvpdnsessionattrsentpktsdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrState")
    {
        cvpdnsessionattrstate = value;
        cvpdnsessionattrstate.value_namespace = name_space;
        cvpdnsessionattrstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrUserName")
    {
        cvpdnsessionattrusername = value;
        cvpdnsessionattrusername.value_namespace = name_space;
        cvpdnsessionattrusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionAttrVirtualCircuitID")
    {
        cvpdnsessionattrvirtualcircuitid = value;
        cvpdnsessionattrvirtualcircuitid.value_namespace = name_space;
        cvpdnsessionattrvirtualcircuitid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrTunnelId")
    {
        cvpdntunnelattrtunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrSessionId")
    {
        cvpdnsessionattrsessionid.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrBytesIn")
    {
        cvpdnsessionattrbytesin.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrBytesOut")
    {
        cvpdnsessionattrbytesout.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrCallDuration")
    {
        cvpdnsessionattrcallduration.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrDeviceCallerId")
    {
        cvpdnsessionattrdevicecallerid.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrDevicePhyId")
    {
        cvpdnsessionattrdevicephyid.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrDeviceType")
    {
        cvpdnsessionattrdevicetype.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrDS1ChannelIndex")
    {
        cvpdnsessionattrds1channelindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrDS1PortIndex")
    {
        cvpdnsessionattrds1portindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrDS1SlotIndex")
    {
        cvpdnsessionattrds1slotindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrModemCallStartIndex")
    {
        cvpdnsessionattrmodemcallstartindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrModemCallStartTime")
    {
        cvpdnsessionattrmodemcallstarttime.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrModemPortIndex")
    {
        cvpdnsessionattrmodemportindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrModemSlotIndex")
    {
        cvpdnsessionattrmodemslotindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrMultilink")
    {
        cvpdnsessionattrmultilink.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrMultilinkBundle")
    {
        cvpdnsessionattrmultilinkbundle.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrMultilinkIfIndex")
    {
        cvpdnsessionattrmultilinkifindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrPacketsIn")
    {
        cvpdnsessionattrpacketsin.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrPacketsOut")
    {
        cvpdnsessionattrpacketsout.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrRecvPktsDropped")
    {
        cvpdnsessionattrrecvpktsdropped.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrSentPktsDropped")
    {
        cvpdnsessionattrsentpktsdropped.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrState")
    {
        cvpdnsessionattrstate.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrUserName")
    {
        cvpdnsessionattrusername.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionAttrVirtualCircuitID")
    {
        cvpdnsessionattrvirtualcircuitid.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnSystemTunnelType" || name == "cvpdnTunnelAttrTunnelId" || name == "cvpdnSessionAttrSessionId" || name == "cvpdnSessionAttrBytesIn" || name == "cvpdnSessionAttrBytesOut" || name == "cvpdnSessionAttrCallDuration" || name == "cvpdnSessionAttrDeviceCallerId" || name == "cvpdnSessionAttrDevicePhyId" || name == "cvpdnSessionAttrDeviceType" || name == "cvpdnSessionAttrDS1ChannelIndex" || name == "cvpdnSessionAttrDS1PortIndex" || name == "cvpdnSessionAttrDS1SlotIndex" || name == "cvpdnSessionAttrModemCallStartIndex" || name == "cvpdnSessionAttrModemCallStartTime" || name == "cvpdnSessionAttrModemPortIndex" || name == "cvpdnSessionAttrModemSlotIndex" || name == "cvpdnSessionAttrMultilink" || name == "cvpdnSessionAttrMultilinkBundle" || name == "cvpdnSessionAttrMultilinkIfIndex" || name == "cvpdnSessionAttrPacketsIn" || name == "cvpdnSessionAttrPacketsOut" || name == "cvpdnSessionAttrRecvPktsDropped" || name == "cvpdnSessionAttrSentPktsDropped" || name == "cvpdnSessionAttrState" || name == "cvpdnSessionAttrUserName" || name == "cvpdnSessionAttrVirtualCircuitID")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdnsysteminfo::Cvpdnsysteminfo()
    :
    cvpdndenieduserstotal{YType::uint32, "cvpdnDeniedUsersTotal"},
    cvpdnsessiontotal{YType::uint32, "cvpdnSessionTotal"},
    cvpdnsystemclearsessions{YType::enumeration, "cvpdnSystemClearSessions"},
    cvpdnsystemnotifsessionenabled{YType::boolean, "cvpdnSystemNotifSessionEnabled"},
    cvpdntunneltotal{YType::uint32, "cvpdnTunnelTotal"}
{

    yang_name = "cvpdnSystemInfo"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdnsysteminfo::~Cvpdnsysteminfo()
{
}

bool CISCOVPDNMGMTMIB::Cvpdnsysteminfo::has_data() const
{
    return cvpdndenieduserstotal.is_set
	|| cvpdnsessiontotal.is_set
	|| cvpdnsystemclearsessions.is_set
	|| cvpdnsystemnotifsessionenabled.is_set
	|| cvpdntunneltotal.is_set;
}

bool CISCOVPDNMGMTMIB::Cvpdnsysteminfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdndenieduserstotal.yfilter)
	|| ydk::is_set(cvpdnsessiontotal.yfilter)
	|| ydk::is_set(cvpdnsystemclearsessions.yfilter)
	|| ydk::is_set(cvpdnsystemnotifsessionenabled.yfilter)
	|| ydk::is_set(cvpdntunneltotal.yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdnsysteminfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdnsysteminfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSystemInfo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdnsysteminfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdndenieduserstotal.is_set || is_set(cvpdndenieduserstotal.yfilter)) leaf_name_data.push_back(cvpdndenieduserstotal.get_name_leafdata());
    if (cvpdnsessiontotal.is_set || is_set(cvpdnsessiontotal.yfilter)) leaf_name_data.push_back(cvpdnsessiontotal.get_name_leafdata());
    if (cvpdnsystemclearsessions.is_set || is_set(cvpdnsystemclearsessions.yfilter)) leaf_name_data.push_back(cvpdnsystemclearsessions.get_name_leafdata());
    if (cvpdnsystemnotifsessionenabled.is_set || is_set(cvpdnsystemnotifsessionenabled.yfilter)) leaf_name_data.push_back(cvpdnsystemnotifsessionenabled.get_name_leafdata());
    if (cvpdntunneltotal.is_set || is_set(cvpdntunneltotal.yfilter)) leaf_name_data.push_back(cvpdntunneltotal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdnsysteminfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdnsysteminfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVPDNMGMTMIB::Cvpdnsysteminfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnDeniedUsersTotal")
    {
        cvpdndenieduserstotal = value;
        cvpdndenieduserstotal.value_namespace = name_space;
        cvpdndenieduserstotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSessionTotal")
    {
        cvpdnsessiontotal = value;
        cvpdnsessiontotal.value_namespace = name_space;
        cvpdnsessiontotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemClearSessions")
    {
        cvpdnsystemclearsessions = value;
        cvpdnsystemclearsessions.value_namespace = name_space;
        cvpdnsystemclearsessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemNotifSessionEnabled")
    {
        cvpdnsystemnotifsessionenabled = value;
        cvpdnsystemnotifsessionenabled.value_namespace = name_space;
        cvpdnsystemnotifsessionenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelTotal")
    {
        cvpdntunneltotal = value;
        cvpdntunneltotal.value_namespace = name_space;
        cvpdntunneltotal.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::Cvpdnsysteminfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnDeniedUsersTotal")
    {
        cvpdndenieduserstotal.yfilter = yfilter;
    }
    if(value_path == "cvpdnSessionTotal")
    {
        cvpdnsessiontotal.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemClearSessions")
    {
        cvpdnsystemclearsessions.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemNotifSessionEnabled")
    {
        cvpdnsystemnotifsessionenabled.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelTotal")
    {
        cvpdntunneltotal.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::Cvpdnsysteminfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnDeniedUsersTotal" || name == "cvpdnSessionTotal" || name == "cvpdnSystemClearSessions" || name == "cvpdnSystemNotifSessionEnabled" || name == "cvpdnTunnelTotal")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdnsystemtable::Cvpdnsystemtable()
{

    yang_name = "cvpdnSystemTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdnsystemtable::~Cvpdnsystemtable()
{
}

bool CISCOVPDNMGMTMIB::Cvpdnsystemtable::has_data() const
{
    for (std::size_t index=0; index<cvpdnsystementry.size(); index++)
    {
        if(cvpdnsystementry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::Cvpdnsystemtable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnsystementry.size(); index++)
    {
        if(cvpdnsystementry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdnsystemtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdnsystemtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSystemTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdnsystemtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdnsystemtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnSystemEntry")
    {
        for(auto const & c : cvpdnsystementry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOVPDNMGMTMIB::Cvpdnsystemtable::Cvpdnsystementry>();
        c->parent = this;
        cvpdnsystementry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdnsystemtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdnsystementry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVPDNMGMTMIB::Cvpdnsystemtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::Cvpdnsystemtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::Cvpdnsystemtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnSystemEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdnsystemtable::Cvpdnsystementry::Cvpdnsystementry()
    :
    cvpdnsystemtunneltype{YType::enumeration, "cvpdnSystemTunnelType"},
    cvpdnsystemdenieduserstotal{YType::uint32, "cvpdnSystemDeniedUsersTotal"},
    cvpdnsystemfailedconnreq{YType::uint32, "cvpdnSystemFailedConnReq"},
    cvpdnsysteminitialconnreq{YType::uint32, "cvpdnSystemInitialConnReq"},
    cvpdnsystemsessiontotal{YType::uint32, "cvpdnSystemSessionTotal"},
    cvpdnsystemsuccessconnreq{YType::uint32, "cvpdnSystemSuccessConnReq"},
    cvpdnsystemtunneltotal{YType::uint32, "cvpdnSystemTunnelTotal"}
{

    yang_name = "cvpdnSystemEntry"; yang_parent_name = "cvpdnSystemTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdnsystemtable::Cvpdnsystementry::~Cvpdnsystementry()
{
}

bool CISCOVPDNMGMTMIB::Cvpdnsystemtable::Cvpdnsystementry::has_data() const
{
    return cvpdnsystemtunneltype.is_set
	|| cvpdnsystemdenieduserstotal.is_set
	|| cvpdnsystemfailedconnreq.is_set
	|| cvpdnsysteminitialconnreq.is_set
	|| cvpdnsystemsessiontotal.is_set
	|| cvpdnsystemsuccessconnreq.is_set
	|| cvpdnsystemtunneltotal.is_set;
}

bool CISCOVPDNMGMTMIB::Cvpdnsystemtable::Cvpdnsystementry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnsystemtunneltype.yfilter)
	|| ydk::is_set(cvpdnsystemdenieduserstotal.yfilter)
	|| ydk::is_set(cvpdnsystemfailedconnreq.yfilter)
	|| ydk::is_set(cvpdnsysteminitialconnreq.yfilter)
	|| ydk::is_set(cvpdnsystemsessiontotal.yfilter)
	|| ydk::is_set(cvpdnsystemsuccessconnreq.yfilter)
	|| ydk::is_set(cvpdnsystemtunneltotal.yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdnsystemtable::Cvpdnsystementry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnSystemTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdnsystemtable::Cvpdnsystementry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSystemEntry" <<"[cvpdnSystemTunnelType='" <<cvpdnsystemtunneltype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdnsystemtable::Cvpdnsystementry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnsystemtunneltype.is_set || is_set(cvpdnsystemtunneltype.yfilter)) leaf_name_data.push_back(cvpdnsystemtunneltype.get_name_leafdata());
    if (cvpdnsystemdenieduserstotal.is_set || is_set(cvpdnsystemdenieduserstotal.yfilter)) leaf_name_data.push_back(cvpdnsystemdenieduserstotal.get_name_leafdata());
    if (cvpdnsystemfailedconnreq.is_set || is_set(cvpdnsystemfailedconnreq.yfilter)) leaf_name_data.push_back(cvpdnsystemfailedconnreq.get_name_leafdata());
    if (cvpdnsysteminitialconnreq.is_set || is_set(cvpdnsysteminitialconnreq.yfilter)) leaf_name_data.push_back(cvpdnsysteminitialconnreq.get_name_leafdata());
    if (cvpdnsystemsessiontotal.is_set || is_set(cvpdnsystemsessiontotal.yfilter)) leaf_name_data.push_back(cvpdnsystemsessiontotal.get_name_leafdata());
    if (cvpdnsystemsuccessconnreq.is_set || is_set(cvpdnsystemsuccessconnreq.yfilter)) leaf_name_data.push_back(cvpdnsystemsuccessconnreq.get_name_leafdata());
    if (cvpdnsystemtunneltotal.is_set || is_set(cvpdnsystemtunneltotal.yfilter)) leaf_name_data.push_back(cvpdnsystemtunneltotal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdnsystemtable::Cvpdnsystementry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdnsystemtable::Cvpdnsystementry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVPDNMGMTMIB::Cvpdnsystemtable::Cvpdnsystementry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype = value;
        cvpdnsystemtunneltype.value_namespace = name_space;
        cvpdnsystemtunneltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemDeniedUsersTotal")
    {
        cvpdnsystemdenieduserstotal = value;
        cvpdnsystemdenieduserstotal.value_namespace = name_space;
        cvpdnsystemdenieduserstotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemFailedConnReq")
    {
        cvpdnsystemfailedconnreq = value;
        cvpdnsystemfailedconnreq.value_namespace = name_space;
        cvpdnsystemfailedconnreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemInitialConnReq")
    {
        cvpdnsysteminitialconnreq = value;
        cvpdnsysteminitialconnreq.value_namespace = name_space;
        cvpdnsysteminitialconnreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemSessionTotal")
    {
        cvpdnsystemsessiontotal = value;
        cvpdnsystemsessiontotal.value_namespace = name_space;
        cvpdnsystemsessiontotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemSuccessConnReq")
    {
        cvpdnsystemsuccessconnreq = value;
        cvpdnsystemsuccessconnreq.value_namespace = name_space;
        cvpdnsystemsuccessconnreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnSystemTunnelTotal")
    {
        cvpdnsystemtunneltotal = value;
        cvpdnsystemtunneltotal.value_namespace = name_space;
        cvpdnsystemtunneltotal.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::Cvpdnsystemtable::Cvpdnsystementry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemDeniedUsersTotal")
    {
        cvpdnsystemdenieduserstotal.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemFailedConnReq")
    {
        cvpdnsystemfailedconnreq.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemInitialConnReq")
    {
        cvpdnsysteminitialconnreq.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemSessionTotal")
    {
        cvpdnsystemsessiontotal.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemSuccessConnReq")
    {
        cvpdnsystemsuccessconnreq.yfilter = yfilter;
    }
    if(value_path == "cvpdnSystemTunnelTotal")
    {
        cvpdnsystemtunneltotal.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::Cvpdnsystemtable::Cvpdnsystementry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnSystemTunnelType" || name == "cvpdnSystemDeniedUsersTotal" || name == "cvpdnSystemFailedConnReq" || name == "cvpdnSystemInitialConnReq" || name == "cvpdnSystemSessionTotal" || name == "cvpdnSystemSuccessConnReq" || name == "cvpdnSystemTunnelTotal")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdntemplatetable::Cvpdntemplatetable()
{

    yang_name = "cvpdnTemplateTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdntemplatetable::~Cvpdntemplatetable()
{
}

bool CISCOVPDNMGMTMIB::Cvpdntemplatetable::has_data() const
{
    for (std::size_t index=0; index<cvpdntemplateentry.size(); index++)
    {
        if(cvpdntemplateentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::Cvpdntemplatetable::has_operation() const
{
    for (std::size_t index=0; index<cvpdntemplateentry.size(); index++)
    {
        if(cvpdntemplateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdntemplatetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdntemplatetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTemplateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdntemplatetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdntemplatetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnTemplateEntry")
    {
        for(auto const & c : cvpdntemplateentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOVPDNMGMTMIB::Cvpdntemplatetable::Cvpdntemplateentry>();
        c->parent = this;
        cvpdntemplateentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdntemplatetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdntemplateentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVPDNMGMTMIB::Cvpdntemplatetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::Cvpdntemplatetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::Cvpdntemplatetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTemplateEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdntemplatetable::Cvpdntemplateentry::Cvpdntemplateentry()
    :
    cvpdntemplatename{YType::str, "cvpdnTemplateName"},
    cvpdntemplateactivesessions{YType::uint32, "cvpdnTemplateActiveSessions"}
{

    yang_name = "cvpdnTemplateEntry"; yang_parent_name = "cvpdnTemplateTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdntemplatetable::Cvpdntemplateentry::~Cvpdntemplateentry()
{
}

bool CISCOVPDNMGMTMIB::Cvpdntemplatetable::Cvpdntemplateentry::has_data() const
{
    return cvpdntemplatename.is_set
	|| cvpdntemplateactivesessions.is_set;
}

bool CISCOVPDNMGMTMIB::Cvpdntemplatetable::Cvpdntemplateentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdntemplatename.yfilter)
	|| ydk::is_set(cvpdntemplateactivesessions.yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdntemplatetable::Cvpdntemplateentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnTemplateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdntemplatetable::Cvpdntemplateentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTemplateEntry" <<"[cvpdnTemplateName='" <<cvpdntemplatename <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdntemplatetable::Cvpdntemplateentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdntemplatename.is_set || is_set(cvpdntemplatename.yfilter)) leaf_name_data.push_back(cvpdntemplatename.get_name_leafdata());
    if (cvpdntemplateactivesessions.is_set || is_set(cvpdntemplateactivesessions.yfilter)) leaf_name_data.push_back(cvpdntemplateactivesessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdntemplatetable::Cvpdntemplateentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdntemplatetable::Cvpdntemplateentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVPDNMGMTMIB::Cvpdntemplatetable::Cvpdntemplateentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnTemplateName")
    {
        cvpdntemplatename = value;
        cvpdntemplatename.value_namespace = name_space;
        cvpdntemplatename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTemplateActiveSessions")
    {
        cvpdntemplateactivesessions = value;
        cvpdntemplateactivesessions.value_namespace = name_space;
        cvpdntemplateactivesessions.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::Cvpdntemplatetable::Cvpdntemplateentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnTemplateName")
    {
        cvpdntemplatename.yfilter = yfilter;
    }
    if(value_path == "cvpdnTemplateActiveSessions")
    {
        cvpdntemplateactivesessions.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::Cvpdntemplatetable::Cvpdntemplateentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTemplateName" || name == "cvpdnTemplateActiveSessions")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrtable()
{

    yang_name = "cvpdnTunnelAttrTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::~Cvpdntunnelattrtable()
{
}

bool CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::has_data() const
{
    for (std::size_t index=0; index<cvpdntunnelattrentry.size(); index++)
    {
        if(cvpdntunnelattrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::has_operation() const
{
    for (std::size_t index=0; index<cvpdntunnelattrentry.size(); index++)
    {
        if(cvpdntunnelattrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelAttrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnTunnelAttrEntry")
    {
        for(auto const & c : cvpdntunnelattrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry>();
        c->parent = this;
        cvpdntunnelattrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdntunnelattrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTunnelAttrEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrentry()
    :
    cvpdnsystemtunneltype{YType::enumeration, "cvpdnSystemTunnelType"},
    cvpdntunnelattrtunnelid{YType::int32, "cvpdnTunnelAttrTunnelId"},
    cvpdntunnelattractivesessions{YType::uint32, "cvpdnTunnelAttrActiveSessions"},
    cvpdntunnelattrdeniedusers{YType::uint32, "cvpdnTunnelAttrDeniedUsers"},
    cvpdntunnelattrlocalinetaddress{YType::str, "cvpdnTunnelAttrLocalInetAddress"},
    cvpdntunnelattrlocalinetaddresstype{YType::enumeration, "cvpdnTunnelAttrLocalInetAddressType"},
    cvpdntunnelattrlocalinitconnection{YType::boolean, "cvpdnTunnelAttrLocalInitConnection"},
    cvpdntunnelattrlocalipaddress{YType::str, "cvpdnTunnelAttrLocalIpAddress"},
    cvpdntunnelattrlocalname{YType::str, "cvpdnTunnelAttrLocalName"},
    cvpdntunnelattrnetworkservicetype{YType::enumeration, "cvpdnTunnelAttrNetworkServiceType"},
    cvpdntunnelattrorigcause{YType::enumeration, "cvpdnTunnelAttrOrigCause"},
    cvpdntunnelattrremoteendpointname{YType::str, "cvpdnTunnelAttrRemoteEndpointName"},
    cvpdntunnelattrremoteinetaddress{YType::str, "cvpdnTunnelAttrRemoteInetAddress"},
    cvpdntunnelattrremoteinetaddresstype{YType::enumeration, "cvpdnTunnelAttrRemoteInetAddressType"},
    cvpdntunnelattrremoteipaddress{YType::str, "cvpdnTunnelAttrRemoteIpAddress"},
    cvpdntunnelattrremotename{YType::str, "cvpdnTunnelAttrRemoteName"},
    cvpdntunnelattrremotetunnelid{YType::int32, "cvpdnTunnelAttrRemoteTunnelId"},
    cvpdntunnelattrsoftshut{YType::boolean, "cvpdnTunnelAttrSoftshut"},
    cvpdntunnelattrsourceinetaddress{YType::str, "cvpdnTunnelAttrSourceInetAddress"},
    cvpdntunnelattrsourceinetaddresstype{YType::enumeration, "cvpdnTunnelAttrSourceInetAddressType"},
    cvpdntunnelattrsourceipaddress{YType::str, "cvpdnTunnelAttrSourceIpAddress"},
    cvpdntunnelattrstate{YType::enumeration, "cvpdnTunnelAttrState"}
{

    yang_name = "cvpdnTunnelAttrEntry"; yang_parent_name = "cvpdnTunnelAttrTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::~Cvpdntunnelattrentry()
{
}

bool CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::has_data() const
{
    return cvpdnsystemtunneltype.is_set
	|| cvpdntunnelattrtunnelid.is_set
	|| cvpdntunnelattractivesessions.is_set
	|| cvpdntunnelattrdeniedusers.is_set
	|| cvpdntunnelattrlocalinetaddress.is_set
	|| cvpdntunnelattrlocalinetaddresstype.is_set
	|| cvpdntunnelattrlocalinitconnection.is_set
	|| cvpdntunnelattrlocalipaddress.is_set
	|| cvpdntunnelattrlocalname.is_set
	|| cvpdntunnelattrnetworkservicetype.is_set
	|| cvpdntunnelattrorigcause.is_set
	|| cvpdntunnelattrremoteendpointname.is_set
	|| cvpdntunnelattrremoteinetaddress.is_set
	|| cvpdntunnelattrremoteinetaddresstype.is_set
	|| cvpdntunnelattrremoteipaddress.is_set
	|| cvpdntunnelattrremotename.is_set
	|| cvpdntunnelattrremotetunnelid.is_set
	|| cvpdntunnelattrsoftshut.is_set
	|| cvpdntunnelattrsourceinetaddress.is_set
	|| cvpdntunnelattrsourceinetaddresstype.is_set
	|| cvpdntunnelattrsourceipaddress.is_set
	|| cvpdntunnelattrstate.is_set;
}

bool CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnsystemtunneltype.yfilter)
	|| ydk::is_set(cvpdntunnelattrtunnelid.yfilter)
	|| ydk::is_set(cvpdntunnelattractivesessions.yfilter)
	|| ydk::is_set(cvpdntunnelattrdeniedusers.yfilter)
	|| ydk::is_set(cvpdntunnelattrlocalinetaddress.yfilter)
	|| ydk::is_set(cvpdntunnelattrlocalinetaddresstype.yfilter)
	|| ydk::is_set(cvpdntunnelattrlocalinitconnection.yfilter)
	|| ydk::is_set(cvpdntunnelattrlocalipaddress.yfilter)
	|| ydk::is_set(cvpdntunnelattrlocalname.yfilter)
	|| ydk::is_set(cvpdntunnelattrnetworkservicetype.yfilter)
	|| ydk::is_set(cvpdntunnelattrorigcause.yfilter)
	|| ydk::is_set(cvpdntunnelattrremoteendpointname.yfilter)
	|| ydk::is_set(cvpdntunnelattrremoteinetaddress.yfilter)
	|| ydk::is_set(cvpdntunnelattrremoteinetaddresstype.yfilter)
	|| ydk::is_set(cvpdntunnelattrremoteipaddress.yfilter)
	|| ydk::is_set(cvpdntunnelattrremotename.yfilter)
	|| ydk::is_set(cvpdntunnelattrremotetunnelid.yfilter)
	|| ydk::is_set(cvpdntunnelattrsoftshut.yfilter)
	|| ydk::is_set(cvpdntunnelattrsourceinetaddress.yfilter)
	|| ydk::is_set(cvpdntunnelattrsourceinetaddresstype.yfilter)
	|| ydk::is_set(cvpdntunnelattrsourceipaddress.yfilter)
	|| ydk::is_set(cvpdntunnelattrstate.yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnTunnelAttrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelAttrEntry" <<"[cvpdnSystemTunnelType='" <<cvpdnsystemtunneltype <<"']" <<"[cvpdnTunnelAttrTunnelId='" <<cvpdntunnelattrtunnelid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnsystemtunneltype.is_set || is_set(cvpdnsystemtunneltype.yfilter)) leaf_name_data.push_back(cvpdnsystemtunneltype.get_name_leafdata());
    if (cvpdntunnelattrtunnelid.is_set || is_set(cvpdntunnelattrtunnelid.yfilter)) leaf_name_data.push_back(cvpdntunnelattrtunnelid.get_name_leafdata());
    if (cvpdntunnelattractivesessions.is_set || is_set(cvpdntunnelattractivesessions.yfilter)) leaf_name_data.push_back(cvpdntunnelattractivesessions.get_name_leafdata());
    if (cvpdntunnelattrdeniedusers.is_set || is_set(cvpdntunnelattrdeniedusers.yfilter)) leaf_name_data.push_back(cvpdntunnelattrdeniedusers.get_name_leafdata());
    if (cvpdntunnelattrlocalinetaddress.is_set || is_set(cvpdntunnelattrlocalinetaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelattrlocalinetaddress.get_name_leafdata());
    if (cvpdntunnelattrlocalinetaddresstype.is_set || is_set(cvpdntunnelattrlocalinetaddresstype.yfilter)) leaf_name_data.push_back(cvpdntunnelattrlocalinetaddresstype.get_name_leafdata());
    if (cvpdntunnelattrlocalinitconnection.is_set || is_set(cvpdntunnelattrlocalinitconnection.yfilter)) leaf_name_data.push_back(cvpdntunnelattrlocalinitconnection.get_name_leafdata());
    if (cvpdntunnelattrlocalipaddress.is_set || is_set(cvpdntunnelattrlocalipaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelattrlocalipaddress.get_name_leafdata());
    if (cvpdntunnelattrlocalname.is_set || is_set(cvpdntunnelattrlocalname.yfilter)) leaf_name_data.push_back(cvpdntunnelattrlocalname.get_name_leafdata());
    if (cvpdntunnelattrnetworkservicetype.is_set || is_set(cvpdntunnelattrnetworkservicetype.yfilter)) leaf_name_data.push_back(cvpdntunnelattrnetworkservicetype.get_name_leafdata());
    if (cvpdntunnelattrorigcause.is_set || is_set(cvpdntunnelattrorigcause.yfilter)) leaf_name_data.push_back(cvpdntunnelattrorigcause.get_name_leafdata());
    if (cvpdntunnelattrremoteendpointname.is_set || is_set(cvpdntunnelattrremoteendpointname.yfilter)) leaf_name_data.push_back(cvpdntunnelattrremoteendpointname.get_name_leafdata());
    if (cvpdntunnelattrremoteinetaddress.is_set || is_set(cvpdntunnelattrremoteinetaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelattrremoteinetaddress.get_name_leafdata());
    if (cvpdntunnelattrremoteinetaddresstype.is_set || is_set(cvpdntunnelattrremoteinetaddresstype.yfilter)) leaf_name_data.push_back(cvpdntunnelattrremoteinetaddresstype.get_name_leafdata());
    if (cvpdntunnelattrremoteipaddress.is_set || is_set(cvpdntunnelattrremoteipaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelattrremoteipaddress.get_name_leafdata());
    if (cvpdntunnelattrremotename.is_set || is_set(cvpdntunnelattrremotename.yfilter)) leaf_name_data.push_back(cvpdntunnelattrremotename.get_name_leafdata());
    if (cvpdntunnelattrremotetunnelid.is_set || is_set(cvpdntunnelattrremotetunnelid.yfilter)) leaf_name_data.push_back(cvpdntunnelattrremotetunnelid.get_name_leafdata());
    if (cvpdntunnelattrsoftshut.is_set || is_set(cvpdntunnelattrsoftshut.yfilter)) leaf_name_data.push_back(cvpdntunnelattrsoftshut.get_name_leafdata());
    if (cvpdntunnelattrsourceinetaddress.is_set || is_set(cvpdntunnelattrsourceinetaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelattrsourceinetaddress.get_name_leafdata());
    if (cvpdntunnelattrsourceinetaddresstype.is_set || is_set(cvpdntunnelattrsourceinetaddresstype.yfilter)) leaf_name_data.push_back(cvpdntunnelattrsourceinetaddresstype.get_name_leafdata());
    if (cvpdntunnelattrsourceipaddress.is_set || is_set(cvpdntunnelattrsourceipaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelattrsourceipaddress.get_name_leafdata());
    if (cvpdntunnelattrstate.is_set || is_set(cvpdntunnelattrstate.yfilter)) leaf_name_data.push_back(cvpdntunnelattrstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype = value;
        cvpdnsystemtunneltype.value_namespace = name_space;
        cvpdnsystemtunneltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrTunnelId")
    {
        cvpdntunnelattrtunnelid = value;
        cvpdntunnelattrtunnelid.value_namespace = name_space;
        cvpdntunnelattrtunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrActiveSessions")
    {
        cvpdntunnelattractivesessions = value;
        cvpdntunnelattractivesessions.value_namespace = name_space;
        cvpdntunnelattractivesessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrDeniedUsers")
    {
        cvpdntunnelattrdeniedusers = value;
        cvpdntunnelattrdeniedusers.value_namespace = name_space;
        cvpdntunnelattrdeniedusers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrLocalInetAddress")
    {
        cvpdntunnelattrlocalinetaddress = value;
        cvpdntunnelattrlocalinetaddress.value_namespace = name_space;
        cvpdntunnelattrlocalinetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrLocalInetAddressType")
    {
        cvpdntunnelattrlocalinetaddresstype = value;
        cvpdntunnelattrlocalinetaddresstype.value_namespace = name_space;
        cvpdntunnelattrlocalinetaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrLocalInitConnection")
    {
        cvpdntunnelattrlocalinitconnection = value;
        cvpdntunnelattrlocalinitconnection.value_namespace = name_space;
        cvpdntunnelattrlocalinitconnection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrLocalIpAddress")
    {
        cvpdntunnelattrlocalipaddress = value;
        cvpdntunnelattrlocalipaddress.value_namespace = name_space;
        cvpdntunnelattrlocalipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrLocalName")
    {
        cvpdntunnelattrlocalname = value;
        cvpdntunnelattrlocalname.value_namespace = name_space;
        cvpdntunnelattrlocalname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrNetworkServiceType")
    {
        cvpdntunnelattrnetworkservicetype = value;
        cvpdntunnelattrnetworkservicetype.value_namespace = name_space;
        cvpdntunnelattrnetworkservicetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrOrigCause")
    {
        cvpdntunnelattrorigcause = value;
        cvpdntunnelattrorigcause.value_namespace = name_space;
        cvpdntunnelattrorigcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrRemoteEndpointName")
    {
        cvpdntunnelattrremoteendpointname = value;
        cvpdntunnelattrremoteendpointname.value_namespace = name_space;
        cvpdntunnelattrremoteendpointname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrRemoteInetAddress")
    {
        cvpdntunnelattrremoteinetaddress = value;
        cvpdntunnelattrremoteinetaddress.value_namespace = name_space;
        cvpdntunnelattrremoteinetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrRemoteInetAddressType")
    {
        cvpdntunnelattrremoteinetaddresstype = value;
        cvpdntunnelattrremoteinetaddresstype.value_namespace = name_space;
        cvpdntunnelattrremoteinetaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrRemoteIpAddress")
    {
        cvpdntunnelattrremoteipaddress = value;
        cvpdntunnelattrremoteipaddress.value_namespace = name_space;
        cvpdntunnelattrremoteipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrRemoteName")
    {
        cvpdntunnelattrremotename = value;
        cvpdntunnelattrremotename.value_namespace = name_space;
        cvpdntunnelattrremotename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrRemoteTunnelId")
    {
        cvpdntunnelattrremotetunnelid = value;
        cvpdntunnelattrremotetunnelid.value_namespace = name_space;
        cvpdntunnelattrremotetunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrSoftshut")
    {
        cvpdntunnelattrsoftshut = value;
        cvpdntunnelattrsoftshut.value_namespace = name_space;
        cvpdntunnelattrsoftshut.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrSourceInetAddress")
    {
        cvpdntunnelattrsourceinetaddress = value;
        cvpdntunnelattrsourceinetaddress.value_namespace = name_space;
        cvpdntunnelattrsourceinetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrSourceInetAddressType")
    {
        cvpdntunnelattrsourceinetaddresstype = value;
        cvpdntunnelattrsourceinetaddresstype.value_namespace = name_space;
        cvpdntunnelattrsourceinetaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrSourceIpAddress")
    {
        cvpdntunnelattrsourceipaddress = value;
        cvpdntunnelattrsourceipaddress.value_namespace = name_space;
        cvpdntunnelattrsourceipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelAttrState")
    {
        cvpdntunnelattrstate = value;
        cvpdntunnelattrstate.value_namespace = name_space;
        cvpdntunnelattrstate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrTunnelId")
    {
        cvpdntunnelattrtunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrActiveSessions")
    {
        cvpdntunnelattractivesessions.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrDeniedUsers")
    {
        cvpdntunnelattrdeniedusers.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrLocalInetAddress")
    {
        cvpdntunnelattrlocalinetaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrLocalInetAddressType")
    {
        cvpdntunnelattrlocalinetaddresstype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrLocalInitConnection")
    {
        cvpdntunnelattrlocalinitconnection.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrLocalIpAddress")
    {
        cvpdntunnelattrlocalipaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrLocalName")
    {
        cvpdntunnelattrlocalname.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrNetworkServiceType")
    {
        cvpdntunnelattrnetworkservicetype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrOrigCause")
    {
        cvpdntunnelattrorigcause.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrRemoteEndpointName")
    {
        cvpdntunnelattrremoteendpointname.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrRemoteInetAddress")
    {
        cvpdntunnelattrremoteinetaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrRemoteInetAddressType")
    {
        cvpdntunnelattrremoteinetaddresstype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrRemoteIpAddress")
    {
        cvpdntunnelattrremoteipaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrRemoteName")
    {
        cvpdntunnelattrremotename.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrRemoteTunnelId")
    {
        cvpdntunnelattrremotetunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrSoftshut")
    {
        cvpdntunnelattrsoftshut.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrSourceInetAddress")
    {
        cvpdntunnelattrsourceinetaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrSourceInetAddressType")
    {
        cvpdntunnelattrsourceinetaddresstype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrSourceIpAddress")
    {
        cvpdntunnelattrsourceipaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelAttrState")
    {
        cvpdntunnelattrstate.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnSystemTunnelType" || name == "cvpdnTunnelAttrTunnelId" || name == "cvpdnTunnelAttrActiveSessions" || name == "cvpdnTunnelAttrDeniedUsers" || name == "cvpdnTunnelAttrLocalInetAddress" || name == "cvpdnTunnelAttrLocalInetAddressType" || name == "cvpdnTunnelAttrLocalInitConnection" || name == "cvpdnTunnelAttrLocalIpAddress" || name == "cvpdnTunnelAttrLocalName" || name == "cvpdnTunnelAttrNetworkServiceType" || name == "cvpdnTunnelAttrOrigCause" || name == "cvpdnTunnelAttrRemoteEndpointName" || name == "cvpdnTunnelAttrRemoteInetAddress" || name == "cvpdnTunnelAttrRemoteInetAddressType" || name == "cvpdnTunnelAttrRemoteIpAddress" || name == "cvpdnTunnelAttrRemoteName" || name == "cvpdnTunnelAttrRemoteTunnelId" || name == "cvpdnTunnelAttrSoftshut" || name == "cvpdnTunnelAttrSourceInetAddress" || name == "cvpdnTunnelAttrSourceInetAddressType" || name == "cvpdnTunnelAttrSourceIpAddress" || name == "cvpdnTunnelAttrState")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessiontable()
{

    yang_name = "cvpdnTunnelSessionTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::~Cvpdntunnelsessiontable()
{
}

bool CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::has_data() const
{
    for (std::size_t index=0; index<cvpdntunnelsessionentry.size(); index++)
    {
        if(cvpdntunnelsessionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::has_operation() const
{
    for (std::size_t index=0; index<cvpdntunnelsessionentry.size(); index++)
    {
        if(cvpdntunnelsessionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelSessionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnTunnelSessionEntry")
    {
        for(auto const & c : cvpdntunnelsessionentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry>();
        c->parent = this;
        cvpdntunnelsessionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdntunnelsessionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTunnelSessionEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessionentry()
    :
    cvpdntunneltunnelid{YType::str, "cvpdnTunnelTunnelId"},
    cvpdntunnelsessionid{YType::uint32, "cvpdnTunnelSessionId"},
    cvpdntunnelsessionbytesin{YType::uint32, "cvpdnTunnelSessionBytesIn"},
    cvpdntunnelsessionbytesout{YType::uint32, "cvpdnTunnelSessionBytesOut"},
    cvpdntunnelsessioncallduration{YType::uint32, "cvpdnTunnelSessionCallDuration"},
    cvpdntunnelsessiondevicecallerid{YType::str, "cvpdnTunnelSessionDeviceCallerId"},
    cvpdntunnelsessiondevicephyid{YType::int32, "cvpdnTunnelSessionDevicePhyId"},
    cvpdntunnelsessiondevicetype{YType::enumeration, "cvpdnTunnelSessionDeviceType"},
    cvpdntunnelsessionds1channelindex{YType::uint32, "cvpdnTunnelSessionDS1ChannelIndex"},
    cvpdntunnelsessionds1portindex{YType::uint32, "cvpdnTunnelSessionDS1PortIndex"},
    cvpdntunnelsessionds1slotindex{YType::uint32, "cvpdnTunnelSessionDS1SlotIndex"},
    cvpdntunnelsessionmodemcallstartindex{YType::uint32, "cvpdnTunnelSessionModemCallStartIndex"},
    cvpdntunnelsessionmodemcallstarttime{YType::uint32, "cvpdnTunnelSessionModemCallStartTime"},
    cvpdntunnelsessionmodemportindex{YType::uint32, "cvpdnTunnelSessionModemPortIndex"},
    cvpdntunnelsessionmodemslotindex{YType::uint32, "cvpdnTunnelSessionModemSlotIndex"},
    cvpdntunnelsessionmultilink{YType::boolean, "cvpdnTunnelSessionMultilink"},
    cvpdntunnelsessionpacketsin{YType::uint32, "cvpdnTunnelSessionPacketsIn"},
    cvpdntunnelsessionpacketsout{YType::uint32, "cvpdnTunnelSessionPacketsOut"},
    cvpdntunnelsessionstate{YType::enumeration, "cvpdnTunnelSessionState"},
    cvpdntunnelsessionusername{YType::str, "cvpdnTunnelSessionUserName"}
{

    yang_name = "cvpdnTunnelSessionEntry"; yang_parent_name = "cvpdnTunnelSessionTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::~Cvpdntunnelsessionentry()
{
}

bool CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::has_data() const
{
    return cvpdntunneltunnelid.is_set
	|| cvpdntunnelsessionid.is_set
	|| cvpdntunnelsessionbytesin.is_set
	|| cvpdntunnelsessionbytesout.is_set
	|| cvpdntunnelsessioncallduration.is_set
	|| cvpdntunnelsessiondevicecallerid.is_set
	|| cvpdntunnelsessiondevicephyid.is_set
	|| cvpdntunnelsessiondevicetype.is_set
	|| cvpdntunnelsessionds1channelindex.is_set
	|| cvpdntunnelsessionds1portindex.is_set
	|| cvpdntunnelsessionds1slotindex.is_set
	|| cvpdntunnelsessionmodemcallstartindex.is_set
	|| cvpdntunnelsessionmodemcallstarttime.is_set
	|| cvpdntunnelsessionmodemportindex.is_set
	|| cvpdntunnelsessionmodemslotindex.is_set
	|| cvpdntunnelsessionmultilink.is_set
	|| cvpdntunnelsessionpacketsin.is_set
	|| cvpdntunnelsessionpacketsout.is_set
	|| cvpdntunnelsessionstate.is_set
	|| cvpdntunnelsessionusername.is_set;
}

bool CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdntunneltunnelid.yfilter)
	|| ydk::is_set(cvpdntunnelsessionid.yfilter)
	|| ydk::is_set(cvpdntunnelsessionbytesin.yfilter)
	|| ydk::is_set(cvpdntunnelsessionbytesout.yfilter)
	|| ydk::is_set(cvpdntunnelsessioncallduration.yfilter)
	|| ydk::is_set(cvpdntunnelsessiondevicecallerid.yfilter)
	|| ydk::is_set(cvpdntunnelsessiondevicephyid.yfilter)
	|| ydk::is_set(cvpdntunnelsessiondevicetype.yfilter)
	|| ydk::is_set(cvpdntunnelsessionds1channelindex.yfilter)
	|| ydk::is_set(cvpdntunnelsessionds1portindex.yfilter)
	|| ydk::is_set(cvpdntunnelsessionds1slotindex.yfilter)
	|| ydk::is_set(cvpdntunnelsessionmodemcallstartindex.yfilter)
	|| ydk::is_set(cvpdntunnelsessionmodemcallstarttime.yfilter)
	|| ydk::is_set(cvpdntunnelsessionmodemportindex.yfilter)
	|| ydk::is_set(cvpdntunnelsessionmodemslotindex.yfilter)
	|| ydk::is_set(cvpdntunnelsessionmultilink.yfilter)
	|| ydk::is_set(cvpdntunnelsessionpacketsin.yfilter)
	|| ydk::is_set(cvpdntunnelsessionpacketsout.yfilter)
	|| ydk::is_set(cvpdntunnelsessionstate.yfilter)
	|| ydk::is_set(cvpdntunnelsessionusername.yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnTunnelSessionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelSessionEntry" <<"[cvpdnTunnelTunnelId='" <<cvpdntunneltunnelid <<"']" <<"[cvpdnTunnelSessionId='" <<cvpdntunnelsessionid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdntunneltunnelid.is_set || is_set(cvpdntunneltunnelid.yfilter)) leaf_name_data.push_back(cvpdntunneltunnelid.get_name_leafdata());
    if (cvpdntunnelsessionid.is_set || is_set(cvpdntunnelsessionid.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionid.get_name_leafdata());
    if (cvpdntunnelsessionbytesin.is_set || is_set(cvpdntunnelsessionbytesin.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionbytesin.get_name_leafdata());
    if (cvpdntunnelsessionbytesout.is_set || is_set(cvpdntunnelsessionbytesout.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionbytesout.get_name_leafdata());
    if (cvpdntunnelsessioncallduration.is_set || is_set(cvpdntunnelsessioncallduration.yfilter)) leaf_name_data.push_back(cvpdntunnelsessioncallduration.get_name_leafdata());
    if (cvpdntunnelsessiondevicecallerid.is_set || is_set(cvpdntunnelsessiondevicecallerid.yfilter)) leaf_name_data.push_back(cvpdntunnelsessiondevicecallerid.get_name_leafdata());
    if (cvpdntunnelsessiondevicephyid.is_set || is_set(cvpdntunnelsessiondevicephyid.yfilter)) leaf_name_data.push_back(cvpdntunnelsessiondevicephyid.get_name_leafdata());
    if (cvpdntunnelsessiondevicetype.is_set || is_set(cvpdntunnelsessiondevicetype.yfilter)) leaf_name_data.push_back(cvpdntunnelsessiondevicetype.get_name_leafdata());
    if (cvpdntunnelsessionds1channelindex.is_set || is_set(cvpdntunnelsessionds1channelindex.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionds1channelindex.get_name_leafdata());
    if (cvpdntunnelsessionds1portindex.is_set || is_set(cvpdntunnelsessionds1portindex.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionds1portindex.get_name_leafdata());
    if (cvpdntunnelsessionds1slotindex.is_set || is_set(cvpdntunnelsessionds1slotindex.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionds1slotindex.get_name_leafdata());
    if (cvpdntunnelsessionmodemcallstartindex.is_set || is_set(cvpdntunnelsessionmodemcallstartindex.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionmodemcallstartindex.get_name_leafdata());
    if (cvpdntunnelsessionmodemcallstarttime.is_set || is_set(cvpdntunnelsessionmodemcallstarttime.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionmodemcallstarttime.get_name_leafdata());
    if (cvpdntunnelsessionmodemportindex.is_set || is_set(cvpdntunnelsessionmodemportindex.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionmodemportindex.get_name_leafdata());
    if (cvpdntunnelsessionmodemslotindex.is_set || is_set(cvpdntunnelsessionmodemslotindex.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionmodemslotindex.get_name_leafdata());
    if (cvpdntunnelsessionmultilink.is_set || is_set(cvpdntunnelsessionmultilink.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionmultilink.get_name_leafdata());
    if (cvpdntunnelsessionpacketsin.is_set || is_set(cvpdntunnelsessionpacketsin.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionpacketsin.get_name_leafdata());
    if (cvpdntunnelsessionpacketsout.is_set || is_set(cvpdntunnelsessionpacketsout.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionpacketsout.get_name_leafdata());
    if (cvpdntunnelsessionstate.is_set || is_set(cvpdntunnelsessionstate.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionstate.get_name_leafdata());
    if (cvpdntunnelsessionusername.is_set || is_set(cvpdntunnelsessionusername.yfilter)) leaf_name_data.push_back(cvpdntunnelsessionusername.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnTunnelTunnelId")
    {
        cvpdntunneltunnelid = value;
        cvpdntunneltunnelid.value_namespace = name_space;
        cvpdntunneltunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionId")
    {
        cvpdntunnelsessionid = value;
        cvpdntunnelsessionid.value_namespace = name_space;
        cvpdntunnelsessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionBytesIn")
    {
        cvpdntunnelsessionbytesin = value;
        cvpdntunnelsessionbytesin.value_namespace = name_space;
        cvpdntunnelsessionbytesin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionBytesOut")
    {
        cvpdntunnelsessionbytesout = value;
        cvpdntunnelsessionbytesout.value_namespace = name_space;
        cvpdntunnelsessionbytesout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionCallDuration")
    {
        cvpdntunnelsessioncallduration = value;
        cvpdntunnelsessioncallduration.value_namespace = name_space;
        cvpdntunnelsessioncallduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionDeviceCallerId")
    {
        cvpdntunnelsessiondevicecallerid = value;
        cvpdntunnelsessiondevicecallerid.value_namespace = name_space;
        cvpdntunnelsessiondevicecallerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionDevicePhyId")
    {
        cvpdntunnelsessiondevicephyid = value;
        cvpdntunnelsessiondevicephyid.value_namespace = name_space;
        cvpdntunnelsessiondevicephyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionDeviceType")
    {
        cvpdntunnelsessiondevicetype = value;
        cvpdntunnelsessiondevicetype.value_namespace = name_space;
        cvpdntunnelsessiondevicetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionDS1ChannelIndex")
    {
        cvpdntunnelsessionds1channelindex = value;
        cvpdntunnelsessionds1channelindex.value_namespace = name_space;
        cvpdntunnelsessionds1channelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionDS1PortIndex")
    {
        cvpdntunnelsessionds1portindex = value;
        cvpdntunnelsessionds1portindex.value_namespace = name_space;
        cvpdntunnelsessionds1portindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionDS1SlotIndex")
    {
        cvpdntunnelsessionds1slotindex = value;
        cvpdntunnelsessionds1slotindex.value_namespace = name_space;
        cvpdntunnelsessionds1slotindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionModemCallStartIndex")
    {
        cvpdntunnelsessionmodemcallstartindex = value;
        cvpdntunnelsessionmodemcallstartindex.value_namespace = name_space;
        cvpdntunnelsessionmodemcallstartindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionModemCallStartTime")
    {
        cvpdntunnelsessionmodemcallstarttime = value;
        cvpdntunnelsessionmodemcallstarttime.value_namespace = name_space;
        cvpdntunnelsessionmodemcallstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionModemPortIndex")
    {
        cvpdntunnelsessionmodemportindex = value;
        cvpdntunnelsessionmodemportindex.value_namespace = name_space;
        cvpdntunnelsessionmodemportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionModemSlotIndex")
    {
        cvpdntunnelsessionmodemslotindex = value;
        cvpdntunnelsessionmodemslotindex.value_namespace = name_space;
        cvpdntunnelsessionmodemslotindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionMultilink")
    {
        cvpdntunnelsessionmultilink = value;
        cvpdntunnelsessionmultilink.value_namespace = name_space;
        cvpdntunnelsessionmultilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionPacketsIn")
    {
        cvpdntunnelsessionpacketsin = value;
        cvpdntunnelsessionpacketsin.value_namespace = name_space;
        cvpdntunnelsessionpacketsin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionPacketsOut")
    {
        cvpdntunnelsessionpacketsout = value;
        cvpdntunnelsessionpacketsout.value_namespace = name_space;
        cvpdntunnelsessionpacketsout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionState")
    {
        cvpdntunnelsessionstate = value;
        cvpdntunnelsessionstate.value_namespace = name_space;
        cvpdntunnelsessionstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSessionUserName")
    {
        cvpdntunnelsessionusername = value;
        cvpdntunnelsessionusername.value_namespace = name_space;
        cvpdntunnelsessionusername.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnTunnelTunnelId")
    {
        cvpdntunneltunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionId")
    {
        cvpdntunnelsessionid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionBytesIn")
    {
        cvpdntunnelsessionbytesin.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionBytesOut")
    {
        cvpdntunnelsessionbytesout.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionCallDuration")
    {
        cvpdntunnelsessioncallduration.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionDeviceCallerId")
    {
        cvpdntunnelsessiondevicecallerid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionDevicePhyId")
    {
        cvpdntunnelsessiondevicephyid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionDeviceType")
    {
        cvpdntunnelsessiondevicetype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionDS1ChannelIndex")
    {
        cvpdntunnelsessionds1channelindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionDS1PortIndex")
    {
        cvpdntunnelsessionds1portindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionDS1SlotIndex")
    {
        cvpdntunnelsessionds1slotindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionModemCallStartIndex")
    {
        cvpdntunnelsessionmodemcallstartindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionModemCallStartTime")
    {
        cvpdntunnelsessionmodemcallstarttime.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionModemPortIndex")
    {
        cvpdntunnelsessionmodemportindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionModemSlotIndex")
    {
        cvpdntunnelsessionmodemslotindex.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionMultilink")
    {
        cvpdntunnelsessionmultilink.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionPacketsIn")
    {
        cvpdntunnelsessionpacketsin.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionPacketsOut")
    {
        cvpdntunnelsessionpacketsout.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionState")
    {
        cvpdntunnelsessionstate.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSessionUserName")
    {
        cvpdntunnelsessionusername.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTunnelTunnelId" || name == "cvpdnTunnelSessionId" || name == "cvpdnTunnelSessionBytesIn" || name == "cvpdnTunnelSessionBytesOut" || name == "cvpdnTunnelSessionCallDuration" || name == "cvpdnTunnelSessionDeviceCallerId" || name == "cvpdnTunnelSessionDevicePhyId" || name == "cvpdnTunnelSessionDeviceType" || name == "cvpdnTunnelSessionDS1ChannelIndex" || name == "cvpdnTunnelSessionDS1PortIndex" || name == "cvpdnTunnelSessionDS1SlotIndex" || name == "cvpdnTunnelSessionModemCallStartIndex" || name == "cvpdnTunnelSessionModemCallStartTime" || name == "cvpdnTunnelSessionModemPortIndex" || name == "cvpdnTunnelSessionModemSlotIndex" || name == "cvpdnTunnelSessionMultilink" || name == "cvpdnTunnelSessionPacketsIn" || name == "cvpdnTunnelSessionPacketsOut" || name == "cvpdnTunnelSessionState" || name == "cvpdnTunnelSessionUserName")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunneltable()
{

    yang_name = "cvpdnTunnelTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdntunneltable::~Cvpdntunneltable()
{
}

bool CISCOVPDNMGMTMIB::Cvpdntunneltable::has_data() const
{
    for (std::size_t index=0; index<cvpdntunnelentry.size(); index++)
    {
        if(cvpdntunnelentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::Cvpdntunneltable::has_operation() const
{
    for (std::size_t index=0; index<cvpdntunnelentry.size(); index++)
    {
        if(cvpdntunnelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdntunneltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdntunneltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdntunneltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdntunneltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnTunnelEntry")
    {
        for(auto const & c : cvpdntunnelentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry>();
        c->parent = this;
        cvpdntunnelentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdntunneltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdntunnelentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVPDNMGMTMIB::Cvpdntunneltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::Cvpdntunneltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::Cvpdntunneltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTunnelEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::Cvpdntunnelentry()
    :
    cvpdntunneltunnelid{YType::uint32, "cvpdnTunnelTunnelId"},
    cvpdntunnelactivesessions{YType::uint32, "cvpdnTunnelActiveSessions"},
    cvpdntunneldeniedusers{YType::uint32, "cvpdnTunnelDeniedUsers"},
    cvpdntunnellocalinitconnection{YType::boolean, "cvpdnTunnelLocalInitConnection"},
    cvpdntunnellocalipaddress{YType::str, "cvpdnTunnelLocalIpAddress"},
    cvpdntunnellocalname{YType::str, "cvpdnTunnelLocalName"},
    cvpdntunnelnetworkservicetype{YType::enumeration, "cvpdnTunnelNetworkServiceType"},
    cvpdntunnelorigcause{YType::enumeration, "cvpdnTunnelOrigCause"},
    cvpdntunnelremoteendpointname{YType::str, "cvpdnTunnelRemoteEndpointName"},
    cvpdntunnelremoteipaddress{YType::str, "cvpdnTunnelRemoteIpAddress"},
    cvpdntunnelremotename{YType::str, "cvpdnTunnelRemoteName"},
    cvpdntunnelremotetunnelid{YType::uint32, "cvpdnTunnelRemoteTunnelId"},
    cvpdntunnelsoftshut{YType::boolean, "cvpdnTunnelSoftshut"},
    cvpdntunnelsourceipaddress{YType::str, "cvpdnTunnelSourceIpAddress"},
    cvpdntunnelstate{YType::enumeration, "cvpdnTunnelState"}
{

    yang_name = "cvpdnTunnelEntry"; yang_parent_name = "cvpdnTunnelTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::~Cvpdntunnelentry()
{
}

bool CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::has_data() const
{
    return cvpdntunneltunnelid.is_set
	|| cvpdntunnelactivesessions.is_set
	|| cvpdntunneldeniedusers.is_set
	|| cvpdntunnellocalinitconnection.is_set
	|| cvpdntunnellocalipaddress.is_set
	|| cvpdntunnellocalname.is_set
	|| cvpdntunnelnetworkservicetype.is_set
	|| cvpdntunnelorigcause.is_set
	|| cvpdntunnelremoteendpointname.is_set
	|| cvpdntunnelremoteipaddress.is_set
	|| cvpdntunnelremotename.is_set
	|| cvpdntunnelremotetunnelid.is_set
	|| cvpdntunnelsoftshut.is_set
	|| cvpdntunnelsourceipaddress.is_set
	|| cvpdntunnelstate.is_set;
}

bool CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdntunneltunnelid.yfilter)
	|| ydk::is_set(cvpdntunnelactivesessions.yfilter)
	|| ydk::is_set(cvpdntunneldeniedusers.yfilter)
	|| ydk::is_set(cvpdntunnellocalinitconnection.yfilter)
	|| ydk::is_set(cvpdntunnellocalipaddress.yfilter)
	|| ydk::is_set(cvpdntunnellocalname.yfilter)
	|| ydk::is_set(cvpdntunnelnetworkservicetype.yfilter)
	|| ydk::is_set(cvpdntunnelorigcause.yfilter)
	|| ydk::is_set(cvpdntunnelremoteendpointname.yfilter)
	|| ydk::is_set(cvpdntunnelremoteipaddress.yfilter)
	|| ydk::is_set(cvpdntunnelremotename.yfilter)
	|| ydk::is_set(cvpdntunnelremotetunnelid.yfilter)
	|| ydk::is_set(cvpdntunnelsoftshut.yfilter)
	|| ydk::is_set(cvpdntunnelsourceipaddress.yfilter)
	|| ydk::is_set(cvpdntunnelstate.yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnTunnelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelEntry" <<"[cvpdnTunnelTunnelId='" <<cvpdntunneltunnelid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdntunneltunnelid.is_set || is_set(cvpdntunneltunnelid.yfilter)) leaf_name_data.push_back(cvpdntunneltunnelid.get_name_leafdata());
    if (cvpdntunnelactivesessions.is_set || is_set(cvpdntunnelactivesessions.yfilter)) leaf_name_data.push_back(cvpdntunnelactivesessions.get_name_leafdata());
    if (cvpdntunneldeniedusers.is_set || is_set(cvpdntunneldeniedusers.yfilter)) leaf_name_data.push_back(cvpdntunneldeniedusers.get_name_leafdata());
    if (cvpdntunnellocalinitconnection.is_set || is_set(cvpdntunnellocalinitconnection.yfilter)) leaf_name_data.push_back(cvpdntunnellocalinitconnection.get_name_leafdata());
    if (cvpdntunnellocalipaddress.is_set || is_set(cvpdntunnellocalipaddress.yfilter)) leaf_name_data.push_back(cvpdntunnellocalipaddress.get_name_leafdata());
    if (cvpdntunnellocalname.is_set || is_set(cvpdntunnellocalname.yfilter)) leaf_name_data.push_back(cvpdntunnellocalname.get_name_leafdata());
    if (cvpdntunnelnetworkservicetype.is_set || is_set(cvpdntunnelnetworkservicetype.yfilter)) leaf_name_data.push_back(cvpdntunnelnetworkservicetype.get_name_leafdata());
    if (cvpdntunnelorigcause.is_set || is_set(cvpdntunnelorigcause.yfilter)) leaf_name_data.push_back(cvpdntunnelorigcause.get_name_leafdata());
    if (cvpdntunnelremoteendpointname.is_set || is_set(cvpdntunnelremoteendpointname.yfilter)) leaf_name_data.push_back(cvpdntunnelremoteendpointname.get_name_leafdata());
    if (cvpdntunnelremoteipaddress.is_set || is_set(cvpdntunnelremoteipaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelremoteipaddress.get_name_leafdata());
    if (cvpdntunnelremotename.is_set || is_set(cvpdntunnelremotename.yfilter)) leaf_name_data.push_back(cvpdntunnelremotename.get_name_leafdata());
    if (cvpdntunnelremotetunnelid.is_set || is_set(cvpdntunnelremotetunnelid.yfilter)) leaf_name_data.push_back(cvpdntunnelremotetunnelid.get_name_leafdata());
    if (cvpdntunnelsoftshut.is_set || is_set(cvpdntunnelsoftshut.yfilter)) leaf_name_data.push_back(cvpdntunnelsoftshut.get_name_leafdata());
    if (cvpdntunnelsourceipaddress.is_set || is_set(cvpdntunnelsourceipaddress.yfilter)) leaf_name_data.push_back(cvpdntunnelsourceipaddress.get_name_leafdata());
    if (cvpdntunnelstate.is_set || is_set(cvpdntunnelstate.yfilter)) leaf_name_data.push_back(cvpdntunnelstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnTunnelTunnelId")
    {
        cvpdntunneltunnelid = value;
        cvpdntunneltunnelid.value_namespace = name_space;
        cvpdntunneltunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelActiveSessions")
    {
        cvpdntunnelactivesessions = value;
        cvpdntunnelactivesessions.value_namespace = name_space;
        cvpdntunnelactivesessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelDeniedUsers")
    {
        cvpdntunneldeniedusers = value;
        cvpdntunneldeniedusers.value_namespace = name_space;
        cvpdntunneldeniedusers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelLocalInitConnection")
    {
        cvpdntunnellocalinitconnection = value;
        cvpdntunnellocalinitconnection.value_namespace = name_space;
        cvpdntunnellocalinitconnection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelLocalIpAddress")
    {
        cvpdntunnellocalipaddress = value;
        cvpdntunnellocalipaddress.value_namespace = name_space;
        cvpdntunnellocalipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelLocalName")
    {
        cvpdntunnellocalname = value;
        cvpdntunnellocalname.value_namespace = name_space;
        cvpdntunnellocalname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelNetworkServiceType")
    {
        cvpdntunnelnetworkservicetype = value;
        cvpdntunnelnetworkservicetype.value_namespace = name_space;
        cvpdntunnelnetworkservicetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelOrigCause")
    {
        cvpdntunnelorigcause = value;
        cvpdntunnelorigcause.value_namespace = name_space;
        cvpdntunnelorigcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelRemoteEndpointName")
    {
        cvpdntunnelremoteendpointname = value;
        cvpdntunnelremoteendpointname.value_namespace = name_space;
        cvpdntunnelremoteendpointname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelRemoteIpAddress")
    {
        cvpdntunnelremoteipaddress = value;
        cvpdntunnelremoteipaddress.value_namespace = name_space;
        cvpdntunnelremoteipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelRemoteName")
    {
        cvpdntunnelremotename = value;
        cvpdntunnelremotename.value_namespace = name_space;
        cvpdntunnelremotename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelRemoteTunnelId")
    {
        cvpdntunnelremotetunnelid = value;
        cvpdntunnelremotetunnelid.value_namespace = name_space;
        cvpdntunnelremotetunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSoftshut")
    {
        cvpdntunnelsoftshut = value;
        cvpdntunnelsoftshut.value_namespace = name_space;
        cvpdntunnelsoftshut.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelSourceIpAddress")
    {
        cvpdntunnelsourceipaddress = value;
        cvpdntunnelsourceipaddress.value_namespace = name_space;
        cvpdntunnelsourceipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnTunnelState")
    {
        cvpdntunnelstate = value;
        cvpdntunnelstate.value_namespace = name_space;
        cvpdntunnelstate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnTunnelTunnelId")
    {
        cvpdntunneltunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelActiveSessions")
    {
        cvpdntunnelactivesessions.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelDeniedUsers")
    {
        cvpdntunneldeniedusers.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelLocalInitConnection")
    {
        cvpdntunnellocalinitconnection.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelLocalIpAddress")
    {
        cvpdntunnellocalipaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelLocalName")
    {
        cvpdntunnellocalname.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelNetworkServiceType")
    {
        cvpdntunnelnetworkservicetype.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelOrigCause")
    {
        cvpdntunnelorigcause.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelRemoteEndpointName")
    {
        cvpdntunnelremoteendpointname.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelRemoteIpAddress")
    {
        cvpdntunnelremoteipaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelRemoteName")
    {
        cvpdntunnelremotename.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelRemoteTunnelId")
    {
        cvpdntunnelremotetunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSoftshut")
    {
        cvpdntunnelsoftshut.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelSourceIpAddress")
    {
        cvpdntunnelsourceipaddress.yfilter = yfilter;
    }
    if(value_path == "cvpdnTunnelState")
    {
        cvpdntunnelstate.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnTunnelTunnelId" || name == "cvpdnTunnelActiveSessions" || name == "cvpdnTunnelDeniedUsers" || name == "cvpdnTunnelLocalInitConnection" || name == "cvpdnTunnelLocalIpAddress" || name == "cvpdnTunnelLocalName" || name == "cvpdnTunnelNetworkServiceType" || name == "cvpdnTunnelOrigCause" || name == "cvpdnTunnelRemoteEndpointName" || name == "cvpdnTunnelRemoteIpAddress" || name == "cvpdnTunnelRemoteName" || name == "cvpdnTunnelRemoteTunnelId" || name == "cvpdnTunnelSoftshut" || name == "cvpdnTunnelSourceIpAddress" || name == "cvpdnTunnelState")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfotable()
{

    yang_name = "cvpdnUserToFailHistInfoTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::~Cvpdnusertofailhistinfotable()
{
}

bool CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::has_data() const
{
    for (std::size_t index=0; index<cvpdnusertofailhistinfoentry.size(); index++)
    {
        if(cvpdnusertofailhistinfoentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnusertofailhistinfoentry.size(); index++)
    {
        if(cvpdnusertofailhistinfoentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnUserToFailHistInfoTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvpdnUserToFailHistInfoEntry")
    {
        for(auto const & c : cvpdnusertofailhistinfoentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry>();
        c->parent = this;
        cvpdnusertofailhistinfoentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdnusertofailhistinfoentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnUserToFailHistInfoEntry")
        return true;
    return false;
}

CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::Cvpdnusertofailhistinfoentry()
    :
    cvpdnunametofailhistuname{YType::str, "cvpdnUnameToFailHistUname"},
    cvpdnunametofailhisttunnelid{YType::uint32, "cvpdnUnameToFailHistTunnelId"},
    cvpdnunametofailhistcount{YType::uint32, "cvpdnUnameToFailHistCount"},
    cvpdnunametofailhistdestinetaddr{YType::str, "cvpdnUnameToFailHistDestInetAddr"},
    cvpdnunametofailhistdestinettype{YType::enumeration, "cvpdnUnameToFailHistDestInetType"},
    cvpdnunametofailhistdestip{YType::str, "cvpdnUnameToFailHistDestIp"},
    cvpdnunametofailhistfailreason{YType::str, "cvpdnUnameToFailHistFailReason"},
    cvpdnunametofailhistfailtime{YType::uint32, "cvpdnUnameToFailHistFailTime"},
    cvpdnunametofailhistfailtype{YType::str, "cvpdnUnameToFailHistFailType"},
    cvpdnunametofailhistlocalinitconn{YType::boolean, "cvpdnUnameToFailHistLocalInitConn"},
    cvpdnunametofailhistlocalname{YType::str, "cvpdnUnameToFailHistLocalName"},
    cvpdnunametofailhistremotename{YType::str, "cvpdnUnameToFailHistRemoteName"},
    cvpdnunametofailhistsourceinetaddr{YType::str, "cvpdnUnameToFailHistSourceInetAddr"},
    cvpdnunametofailhistsourceinettype{YType::enumeration, "cvpdnUnameToFailHistSourceInetType"},
    cvpdnunametofailhistsourceip{YType::str, "cvpdnUnameToFailHistSourceIp"},
    cvpdnunametofailhistuserid{YType::uint32, "cvpdnUnameToFailHistUserId"}
{

    yang_name = "cvpdnUserToFailHistInfoEntry"; yang_parent_name = "cvpdnUserToFailHistInfoTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::~Cvpdnusertofailhistinfoentry()
{
}

bool CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::has_data() const
{
    return cvpdnunametofailhistuname.is_set
	|| cvpdnunametofailhisttunnelid.is_set
	|| cvpdnunametofailhistcount.is_set
	|| cvpdnunametofailhistdestinetaddr.is_set
	|| cvpdnunametofailhistdestinettype.is_set
	|| cvpdnunametofailhistdestip.is_set
	|| cvpdnunametofailhistfailreason.is_set
	|| cvpdnunametofailhistfailtime.is_set
	|| cvpdnunametofailhistfailtype.is_set
	|| cvpdnunametofailhistlocalinitconn.is_set
	|| cvpdnunametofailhistlocalname.is_set
	|| cvpdnunametofailhistremotename.is_set
	|| cvpdnunametofailhistsourceinetaddr.is_set
	|| cvpdnunametofailhistsourceinettype.is_set
	|| cvpdnunametofailhistsourceip.is_set
	|| cvpdnunametofailhistuserid.is_set;
}

bool CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cvpdnunametofailhistuname.yfilter)
	|| ydk::is_set(cvpdnunametofailhisttunnelid.yfilter)
	|| ydk::is_set(cvpdnunametofailhistcount.yfilter)
	|| ydk::is_set(cvpdnunametofailhistdestinetaddr.yfilter)
	|| ydk::is_set(cvpdnunametofailhistdestinettype.yfilter)
	|| ydk::is_set(cvpdnunametofailhistdestip.yfilter)
	|| ydk::is_set(cvpdnunametofailhistfailreason.yfilter)
	|| ydk::is_set(cvpdnunametofailhistfailtime.yfilter)
	|| ydk::is_set(cvpdnunametofailhistfailtype.yfilter)
	|| ydk::is_set(cvpdnunametofailhistlocalinitconn.yfilter)
	|| ydk::is_set(cvpdnunametofailhistlocalname.yfilter)
	|| ydk::is_set(cvpdnunametofailhistremotename.yfilter)
	|| ydk::is_set(cvpdnunametofailhistsourceinetaddr.yfilter)
	|| ydk::is_set(cvpdnunametofailhistsourceinettype.yfilter)
	|| ydk::is_set(cvpdnunametofailhistsourceip.yfilter)
	|| ydk::is_set(cvpdnunametofailhistuserid.yfilter);
}

std::string CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnUserToFailHistInfoTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnUserToFailHistInfoEntry" <<"[cvpdnUnameToFailHistUname='" <<cvpdnunametofailhistuname <<"']" <<"[cvpdnUnameToFailHistTunnelId='" <<cvpdnunametofailhisttunnelid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnunametofailhistuname.is_set || is_set(cvpdnunametofailhistuname.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistuname.get_name_leafdata());
    if (cvpdnunametofailhisttunnelid.is_set || is_set(cvpdnunametofailhisttunnelid.yfilter)) leaf_name_data.push_back(cvpdnunametofailhisttunnelid.get_name_leafdata());
    if (cvpdnunametofailhistcount.is_set || is_set(cvpdnunametofailhistcount.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistcount.get_name_leafdata());
    if (cvpdnunametofailhistdestinetaddr.is_set || is_set(cvpdnunametofailhistdestinetaddr.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistdestinetaddr.get_name_leafdata());
    if (cvpdnunametofailhistdestinettype.is_set || is_set(cvpdnunametofailhistdestinettype.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistdestinettype.get_name_leafdata());
    if (cvpdnunametofailhistdestip.is_set || is_set(cvpdnunametofailhistdestip.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistdestip.get_name_leafdata());
    if (cvpdnunametofailhistfailreason.is_set || is_set(cvpdnunametofailhistfailreason.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistfailreason.get_name_leafdata());
    if (cvpdnunametofailhistfailtime.is_set || is_set(cvpdnunametofailhistfailtime.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistfailtime.get_name_leafdata());
    if (cvpdnunametofailhistfailtype.is_set || is_set(cvpdnunametofailhistfailtype.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistfailtype.get_name_leafdata());
    if (cvpdnunametofailhistlocalinitconn.is_set || is_set(cvpdnunametofailhistlocalinitconn.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistlocalinitconn.get_name_leafdata());
    if (cvpdnunametofailhistlocalname.is_set || is_set(cvpdnunametofailhistlocalname.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistlocalname.get_name_leafdata());
    if (cvpdnunametofailhistremotename.is_set || is_set(cvpdnunametofailhistremotename.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistremotename.get_name_leafdata());
    if (cvpdnunametofailhistsourceinetaddr.is_set || is_set(cvpdnunametofailhistsourceinetaddr.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistsourceinetaddr.get_name_leafdata());
    if (cvpdnunametofailhistsourceinettype.is_set || is_set(cvpdnunametofailhistsourceinettype.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistsourceinettype.get_name_leafdata());
    if (cvpdnunametofailhistsourceip.is_set || is_set(cvpdnunametofailhistsourceip.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistsourceip.get_name_leafdata());
    if (cvpdnunametofailhistuserid.is_set || is_set(cvpdnunametofailhistuserid.yfilter)) leaf_name_data.push_back(cvpdnunametofailhistuserid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cvpdnUnameToFailHistUname")
    {
        cvpdnunametofailhistuname = value;
        cvpdnunametofailhistuname.value_namespace = name_space;
        cvpdnunametofailhistuname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistTunnelId")
    {
        cvpdnunametofailhisttunnelid = value;
        cvpdnunametofailhisttunnelid.value_namespace = name_space;
        cvpdnunametofailhisttunnelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistCount")
    {
        cvpdnunametofailhistcount = value;
        cvpdnunametofailhistcount.value_namespace = name_space;
        cvpdnunametofailhistcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistDestInetAddr")
    {
        cvpdnunametofailhistdestinetaddr = value;
        cvpdnunametofailhistdestinetaddr.value_namespace = name_space;
        cvpdnunametofailhistdestinetaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistDestInetType")
    {
        cvpdnunametofailhistdestinettype = value;
        cvpdnunametofailhistdestinettype.value_namespace = name_space;
        cvpdnunametofailhistdestinettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistDestIp")
    {
        cvpdnunametofailhistdestip = value;
        cvpdnunametofailhistdestip.value_namespace = name_space;
        cvpdnunametofailhistdestip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistFailReason")
    {
        cvpdnunametofailhistfailreason = value;
        cvpdnunametofailhistfailreason.value_namespace = name_space;
        cvpdnunametofailhistfailreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistFailTime")
    {
        cvpdnunametofailhistfailtime = value;
        cvpdnunametofailhistfailtime.value_namespace = name_space;
        cvpdnunametofailhistfailtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistFailType")
    {
        cvpdnunametofailhistfailtype = value;
        cvpdnunametofailhistfailtype.value_namespace = name_space;
        cvpdnunametofailhistfailtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistLocalInitConn")
    {
        cvpdnunametofailhistlocalinitconn = value;
        cvpdnunametofailhistlocalinitconn.value_namespace = name_space;
        cvpdnunametofailhistlocalinitconn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistLocalName")
    {
        cvpdnunametofailhistlocalname = value;
        cvpdnunametofailhistlocalname.value_namespace = name_space;
        cvpdnunametofailhistlocalname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistRemoteName")
    {
        cvpdnunametofailhistremotename = value;
        cvpdnunametofailhistremotename.value_namespace = name_space;
        cvpdnunametofailhistremotename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistSourceInetAddr")
    {
        cvpdnunametofailhistsourceinetaddr = value;
        cvpdnunametofailhistsourceinetaddr.value_namespace = name_space;
        cvpdnunametofailhistsourceinetaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistSourceInetType")
    {
        cvpdnunametofailhistsourceinettype = value;
        cvpdnunametofailhistsourceinettype.value_namespace = name_space;
        cvpdnunametofailhistsourceinettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistSourceIp")
    {
        cvpdnunametofailhistsourceip = value;
        cvpdnunametofailhistsourceip.value_namespace = name_space;
        cvpdnunametofailhistsourceip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvpdnUnameToFailHistUserId")
    {
        cvpdnunametofailhistuserid = value;
        cvpdnunametofailhistuserid.value_namespace = name_space;
        cvpdnunametofailhistuserid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cvpdnUnameToFailHistUname")
    {
        cvpdnunametofailhistuname.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistTunnelId")
    {
        cvpdnunametofailhisttunnelid.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistCount")
    {
        cvpdnunametofailhistcount.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistDestInetAddr")
    {
        cvpdnunametofailhistdestinetaddr.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistDestInetType")
    {
        cvpdnunametofailhistdestinettype.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistDestIp")
    {
        cvpdnunametofailhistdestip.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistFailReason")
    {
        cvpdnunametofailhistfailreason.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistFailTime")
    {
        cvpdnunametofailhistfailtime.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistFailType")
    {
        cvpdnunametofailhistfailtype.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistLocalInitConn")
    {
        cvpdnunametofailhistlocalinitconn.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistLocalName")
    {
        cvpdnunametofailhistlocalname.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistRemoteName")
    {
        cvpdnunametofailhistremotename.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistSourceInetAddr")
    {
        cvpdnunametofailhistsourceinetaddr.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistSourceInetType")
    {
        cvpdnunametofailhistsourceinettype.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistSourceIp")
    {
        cvpdnunametofailhistsourceip.yfilter = yfilter;
    }
    if(value_path == "cvpdnUnameToFailHistUserId")
    {
        cvpdnunametofailhistuserid.yfilter = yfilter;
    }
}

bool CISCOVPDNMGMTMIB::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvpdnUnameToFailHistUname" || name == "cvpdnUnameToFailHistTunnelId" || name == "cvpdnUnameToFailHistCount" || name == "cvpdnUnameToFailHistDestInetAddr" || name == "cvpdnUnameToFailHistDestInetType" || name == "cvpdnUnameToFailHistDestIp" || name == "cvpdnUnameToFailHistFailReason" || name == "cvpdnUnameToFailHistFailTime" || name == "cvpdnUnameToFailHistFailType" || name == "cvpdnUnameToFailHistLocalInitConn" || name == "cvpdnUnameToFailHistLocalName" || name == "cvpdnUnameToFailHistRemoteName" || name == "cvpdnUnameToFailHistSourceInetAddr" || name == "cvpdnUnameToFailHistSourceInetType" || name == "cvpdnUnameToFailHistSourceIp" || name == "cvpdnUnameToFailHistUserId")
        return true;
    return false;
}

const Enum::YLeaf TunnelType::l2f {1, "l2f"};
const Enum::YLeaf TunnelType::l2tp {2, "l2tp"};
const Enum::YLeaf TunnelType::pptp {3, "pptp"};

const Enum::YLeaf EndpointClass::none {1, "none"};
const Enum::YLeaf EndpointClass::local {2, "local"};
const Enum::YLeaf EndpointClass::ipV4Address {3, "ipV4Address"};
const Enum::YLeaf EndpointClass::macAddress {4, "macAddress"};
const Enum::YLeaf EndpointClass::magicNumber {5, "magicNumber"};
const Enum::YLeaf EndpointClass::phone {6, "phone"};

const Enum::YLeaf CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::Cvpdnnotifsessionevent::up {1, "up"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::Cvpdnnotifsessionevent::down {2, "down"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::Cvpdnnotifsessionevent::pwUp {3, "pwUp"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Ciscovpdnmgmtmibnotifs::Cvpdnnotifsessionevent::pwDown {4, "pwDown"};

const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::Cvpdnbundleendpointtype::none {1, "none"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::Cvpdnbundleendpointtype::hostname {2, "hostname"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::Cvpdnbundleendpointtype::string {3, "string"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::Cvpdnbundleendpointtype::macAddress {4, "macAddress"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::Cvpdnbundleendpointtype::ipV4Address {5, "ipV4Address"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::Cvpdnbundleendpointtype::ipV6Address {6, "ipV6Address"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::Cvpdnbundleendpointtype::phone {7, "phone"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnbundletable::Cvpdnbundleentry::Cvpdnbundleendpointtype::magicNumber {8, "magicNumber"};

const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::unknown {1, "unknown"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::l2fOpening {2, "l2fOpening"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::l2fOpen {3, "l2fOpen"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::l2fCloseWait {4, "l2fCloseWait"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::l2fWaitingForTunnel {5, "l2fWaitingForTunnel"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::l2tpIdle {6, "l2tpIdle"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::l2tpWaitingTunnel {7, "l2tpWaitingTunnel"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::l2tpWaitReply {8, "l2tpWaitReply"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::l2tpWaitConnect {9, "l2tpWaitConnect"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::l2tpEstablished {10, "l2tpEstablished"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::l2tpShuttingDown {11, "l2tpShuttingDown"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::pptpWaitVAccess {12, "pptpWaitVAccess"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::pptpPacEstablished {13, "pptpPacEstablished"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::pptpWaitTunnel {14, "pptpWaitTunnel"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::pptpWaitOCRP {15, "pptpWaitOCRP"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::pptpPnsEstablished {16, "pptpPnsEstablished"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::pptpWaitCallDisc {17, "pptpWaitCallDisc"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrstate::pptpTerminal {18, "pptpTerminal"};

const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrdevicetype::other {1, "other"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrdevicetype::asyncInternalModem {2, "asyncInternalModem"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrdevicetype::async {3, "async"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrdevicetype::bchan {4, "bchan"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrdevicetype::sync {5, "sync"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrdevicetype::virtualAccess {6, "virtualAccess"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrdevicetype::xdsl {7, "xdsl"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrdevicetype::cable {8, "cable"};

const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsysteminfo::Cvpdnsystemclearsessions::none {1, "none"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsysteminfo::Cvpdnsystemclearsessions::all {2, "all"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsysteminfo::Cvpdnsystemclearsessions::l2f {3, "l2f"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsysteminfo::Cvpdnsystemclearsessions::l2tp {4, "l2tp"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdnsysteminfo::Cvpdnsystemclearsessions::pptp {5, "pptp"};

const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrorigcause::domain {1, "domain"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrorigcause::dnis {2, "dnis"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrorigcause::stack {3, "stack"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrorigcause::xconnect {4, "xconnect"};

const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::unknown {1, "unknown"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::l2fOpening {2, "l2fOpening"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::l2fOpenWait {3, "l2fOpenWait"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::l2fOpen {4, "l2fOpen"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::l2fClosing {5, "l2fClosing"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::l2fCloseWait {6, "l2fCloseWait"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::l2tpIdle {7, "l2tpIdle"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::l2tpWaitCtlReply {8, "l2tpWaitCtlReply"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::l2tpEstablished {9, "l2tpEstablished"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::l2tpShuttingDown {10, "l2tpShuttingDown"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::l2tpNoSessionLeft {11, "l2tpNoSessionLeft"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::pptpIdle {12, "pptpIdle"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::pptpWaitConnect {13, "pptpWaitConnect"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::pptpWaitCtlRequest {14, "pptpWaitCtlRequest"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::pptpWaitCtlReply {15, "pptpWaitCtlReply"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::pptpEstablished {16, "pptpEstablished"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::pptpWaitStopReply {17, "pptpWaitStopReply"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrstate::pptpTerminal {18, "pptpTerminal"};

const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrnetworkservicetype::ip {1, "ip"};

const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessionstate::unknown {1, "unknown"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessionstate::opening {2, "opening"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessionstate::open {3, "open"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessionstate::closing {4, "closing"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessionstate::waitingForTunnel {5, "waitingForTunnel"};

const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessiondevicetype::other {1, "other"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessiondevicetype::asyncInternalModem {2, "asyncInternalModem"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessiondevicetype::async {3, "async"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessiondevicetype::bchan {4, "bchan"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessiondevicetype::sync {5, "sync"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessiondevicetype::virtualAccess {6, "virtualAccess"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessiondevicetype::xdsl {7, "xdsl"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessiondevicetype::cable {8, "cable"};

const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::Cvpdntunnelorigcause::domain {1, "domain"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::Cvpdntunnelorigcause::dnis {2, "dnis"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::Cvpdntunnelorigcause::stack {3, "stack"};

const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::Cvpdntunnelstate::unknown {1, "unknown"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::Cvpdntunnelstate::opening {2, "opening"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::Cvpdntunnelstate::open {3, "open"};
const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::Cvpdntunnelstate::closing {4, "closing"};

const Enum::YLeaf CISCOVPDNMGMTMIB::Cvpdntunneltable::Cvpdntunnelentry::Cvpdntunnelnetworkservicetype::ip {1, "ip"};


}
}

