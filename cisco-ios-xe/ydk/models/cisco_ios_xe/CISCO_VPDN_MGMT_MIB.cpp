
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VPDN_MGMT_MIB.hpp"

namespace ydk {
namespace CISCO_VPDN_MGMT_MIB {

CiscoVpdnMgmtMib::CiscoVpdnMgmtMib()
    :
    ciscovpdnmgmtmibnotifs(std::make_shared<CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs>())
	,cvpdnbundlechildtable(std::make_shared<CiscoVpdnMgmtMib::Cvpdnbundlechildtable>())
	,cvpdnbundletable(std::make_shared<CiscoVpdnMgmtMib::Cvpdnbundletable>())
	,cvpdnmultilinkinfo(std::make_shared<CiscoVpdnMgmtMib::Cvpdnmultilinkinfo>())
	,cvpdnsessionattrtable(std::make_shared<CiscoVpdnMgmtMib::Cvpdnsessionattrtable>())
	,cvpdnsysteminfo(std::make_shared<CiscoVpdnMgmtMib::Cvpdnsysteminfo>())
	,cvpdnsystemtable(std::make_shared<CiscoVpdnMgmtMib::Cvpdnsystemtable>())
	,cvpdntemplatetable(std::make_shared<CiscoVpdnMgmtMib::Cvpdntemplatetable>())
	,cvpdntunnelattrtable(std::make_shared<CiscoVpdnMgmtMib::Cvpdntunnelattrtable>())
	,cvpdntunnelsessiontable(std::make_shared<CiscoVpdnMgmtMib::Cvpdntunnelsessiontable>())
	,cvpdntunneltable(std::make_shared<CiscoVpdnMgmtMib::Cvpdntunneltable>())
	,cvpdnusertofailhistinfotable(std::make_shared<CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable>())
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

    yang_name = "CISCO-VPDN-MGMT-MIB"; yang_parent_name = "CISCO-VPDN-MGMT-MIB";
}

CiscoVpdnMgmtMib::~CiscoVpdnMgmtMib()
{
}

bool CiscoVpdnMgmtMib::has_data() const
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

bool CiscoVpdnMgmtMib::has_operation() const
{
    return is_set(operation)
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

std::string CiscoVpdnMgmtMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoVpdnMgmtMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoVpdnMgmtMIBNotifs")
    {
        if(ciscovpdnmgmtmibnotifs == nullptr)
        {
            ciscovpdnmgmtmibnotifs = std::make_shared<CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs>();
        }
        return ciscovpdnmgmtmibnotifs;
    }

    if(child_yang_name == "cvpdnBundleChildTable")
    {
        if(cvpdnbundlechildtable == nullptr)
        {
            cvpdnbundlechildtable = std::make_shared<CiscoVpdnMgmtMib::Cvpdnbundlechildtable>();
        }
        return cvpdnbundlechildtable;
    }

    if(child_yang_name == "cvpdnBundleTable")
    {
        if(cvpdnbundletable == nullptr)
        {
            cvpdnbundletable = std::make_shared<CiscoVpdnMgmtMib::Cvpdnbundletable>();
        }
        return cvpdnbundletable;
    }

    if(child_yang_name == "cvpdnMultilinkInfo")
    {
        if(cvpdnmultilinkinfo == nullptr)
        {
            cvpdnmultilinkinfo = std::make_shared<CiscoVpdnMgmtMib::Cvpdnmultilinkinfo>();
        }
        return cvpdnmultilinkinfo;
    }

    if(child_yang_name == "cvpdnSessionAttrTable")
    {
        if(cvpdnsessionattrtable == nullptr)
        {
            cvpdnsessionattrtable = std::make_shared<CiscoVpdnMgmtMib::Cvpdnsessionattrtable>();
        }
        return cvpdnsessionattrtable;
    }

    if(child_yang_name == "cvpdnSystemInfo")
    {
        if(cvpdnsysteminfo == nullptr)
        {
            cvpdnsysteminfo = std::make_shared<CiscoVpdnMgmtMib::Cvpdnsysteminfo>();
        }
        return cvpdnsysteminfo;
    }

    if(child_yang_name == "cvpdnSystemTable")
    {
        if(cvpdnsystemtable == nullptr)
        {
            cvpdnsystemtable = std::make_shared<CiscoVpdnMgmtMib::Cvpdnsystemtable>();
        }
        return cvpdnsystemtable;
    }

    if(child_yang_name == "cvpdnTemplateTable")
    {
        if(cvpdntemplatetable == nullptr)
        {
            cvpdntemplatetable = std::make_shared<CiscoVpdnMgmtMib::Cvpdntemplatetable>();
        }
        return cvpdntemplatetable;
    }

    if(child_yang_name == "cvpdnTunnelAttrTable")
    {
        if(cvpdntunnelattrtable == nullptr)
        {
            cvpdntunnelattrtable = std::make_shared<CiscoVpdnMgmtMib::Cvpdntunnelattrtable>();
        }
        return cvpdntunnelattrtable;
    }

    if(child_yang_name == "cvpdnTunnelSessionTable")
    {
        if(cvpdntunnelsessiontable == nullptr)
        {
            cvpdntunnelsessiontable = std::make_shared<CiscoVpdnMgmtMib::Cvpdntunnelsessiontable>();
        }
        return cvpdntunnelsessiontable;
    }

    if(child_yang_name == "cvpdnTunnelTable")
    {
        if(cvpdntunneltable == nullptr)
        {
            cvpdntunneltable = std::make_shared<CiscoVpdnMgmtMib::Cvpdntunneltable>();
        }
        return cvpdntunneltable;
    }

    if(child_yang_name == "cvpdnUserToFailHistInfoTable")
    {
        if(cvpdnusertofailhistinfotable == nullptr)
        {
            cvpdnusertofailhistinfotable = std::make_shared<CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable>();
        }
        return cvpdnusertofailhistinfotable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::get_children() const
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

void CiscoVpdnMgmtMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::clone_ptr() const
{
    return std::make_shared<CiscoVpdnMgmtMib>();
}

std::string CiscoVpdnMgmtMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoVpdnMgmtMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoVpdnMgmtMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::Ciscovpdnmgmtmibnotifs()
    :
    cvpdnnotifsessionevent{YType::enumeration, "cvpdnNotifSessionEvent"},
    cvpdnnotifsessionid{YType::int32, "cvpdnNotifSessionID"}
{
    yang_name = "ciscoVpdnMgmtMIBNotifs"; yang_parent_name = "CISCO-VPDN-MGMT-MIB";
}

CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::~Ciscovpdnmgmtmibnotifs()
{
}

bool CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::has_data() const
{
    return cvpdnnotifsessionevent.is_set
	|| cvpdnnotifsessionid.is_set;
}

bool CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::has_operation() const
{
    return is_set(operation)
	|| is_set(cvpdnnotifsessionevent.operation)
	|| is_set(cvpdnnotifsessionid.operation);
}

std::string CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoVpdnMgmtMIBNotifs";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnnotifsessionevent.is_set || is_set(cvpdnnotifsessionevent.operation)) leaf_name_data.push_back(cvpdnnotifsessionevent.get_name_leafdata());
    if (cvpdnnotifsessionid.is_set || is_set(cvpdnnotifsessionid.operation)) leaf_name_data.push_back(cvpdnnotifsessionid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvpdnNotifSessionEvent")
    {
        cvpdnnotifsessionevent = value;
    }
    if(value_path == "cvpdnNotifSessionID")
    {
        cvpdnnotifsessionid = value;
    }
}

CiscoVpdnMgmtMib::Cvpdnsysteminfo::Cvpdnsysteminfo()
    :
    cvpdndenieduserstotal{YType::uint32, "cvpdnDeniedUsersTotal"},
    cvpdnsessiontotal{YType::uint32, "cvpdnSessionTotal"},
    cvpdnsystemclearsessions{YType::enumeration, "cvpdnSystemClearSessions"},
    cvpdnsystemnotifsessionenabled{YType::boolean, "cvpdnSystemNotifSessionEnabled"},
    cvpdntunneltotal{YType::uint32, "cvpdnTunnelTotal"}
{
    yang_name = "cvpdnSystemInfo"; yang_parent_name = "CISCO-VPDN-MGMT-MIB";
}

CiscoVpdnMgmtMib::Cvpdnsysteminfo::~Cvpdnsysteminfo()
{
}

bool CiscoVpdnMgmtMib::Cvpdnsysteminfo::has_data() const
{
    return cvpdndenieduserstotal.is_set
	|| cvpdnsessiontotal.is_set
	|| cvpdnsystemclearsessions.is_set
	|| cvpdnsystemnotifsessionenabled.is_set
	|| cvpdntunneltotal.is_set;
}

bool CiscoVpdnMgmtMib::Cvpdnsysteminfo::has_operation() const
{
    return is_set(operation)
	|| is_set(cvpdndenieduserstotal.operation)
	|| is_set(cvpdnsessiontotal.operation)
	|| is_set(cvpdnsystemclearsessions.operation)
	|| is_set(cvpdnsystemnotifsessionenabled.operation)
	|| is_set(cvpdntunneltotal.operation);
}

std::string CiscoVpdnMgmtMib::Cvpdnsysteminfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSystemInfo";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdnsysteminfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdndenieduserstotal.is_set || is_set(cvpdndenieduserstotal.operation)) leaf_name_data.push_back(cvpdndenieduserstotal.get_name_leafdata());
    if (cvpdnsessiontotal.is_set || is_set(cvpdnsessiontotal.operation)) leaf_name_data.push_back(cvpdnsessiontotal.get_name_leafdata());
    if (cvpdnsystemclearsessions.is_set || is_set(cvpdnsystemclearsessions.operation)) leaf_name_data.push_back(cvpdnsystemclearsessions.get_name_leafdata());
    if (cvpdnsystemnotifsessionenabled.is_set || is_set(cvpdnsystemnotifsessionenabled.operation)) leaf_name_data.push_back(cvpdnsystemnotifsessionenabled.get_name_leafdata());
    if (cvpdntunneltotal.is_set || is_set(cvpdntunneltotal.operation)) leaf_name_data.push_back(cvpdntunneltotal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdnsysteminfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdnsysteminfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVpdnMgmtMib::Cvpdnsysteminfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvpdnDeniedUsersTotal")
    {
        cvpdndenieduserstotal = value;
    }
    if(value_path == "cvpdnSessionTotal")
    {
        cvpdnsessiontotal = value;
    }
    if(value_path == "cvpdnSystemClearSessions")
    {
        cvpdnsystemclearsessions = value;
    }
    if(value_path == "cvpdnSystemNotifSessionEnabled")
    {
        cvpdnsystemnotifsessionenabled = value;
    }
    if(value_path == "cvpdnTunnelTotal")
    {
        cvpdntunneltotal = value;
    }
}

CiscoVpdnMgmtMib::Cvpdnmultilinkinfo::Cvpdnmultilinkinfo()
    :
    cvpdnbundlelastchanged{YType::uint32, "cvpdnBundleLastChanged"},
    cvpdnbundleswithmorethantwolinks{YType::uint32, "cvpdnBundlesWithMoreThanTwoLinks"},
    cvpdnbundleswithonelink{YType::uint32, "cvpdnBundlesWithOneLink"},
    cvpdnbundleswithtwolinks{YType::uint32, "cvpdnBundlesWithTwoLinks"}
{
    yang_name = "cvpdnMultilinkInfo"; yang_parent_name = "CISCO-VPDN-MGMT-MIB";
}

CiscoVpdnMgmtMib::Cvpdnmultilinkinfo::~Cvpdnmultilinkinfo()
{
}

bool CiscoVpdnMgmtMib::Cvpdnmultilinkinfo::has_data() const
{
    return cvpdnbundlelastchanged.is_set
	|| cvpdnbundleswithmorethantwolinks.is_set
	|| cvpdnbundleswithonelink.is_set
	|| cvpdnbundleswithtwolinks.is_set;
}

bool CiscoVpdnMgmtMib::Cvpdnmultilinkinfo::has_operation() const
{
    return is_set(operation)
	|| is_set(cvpdnbundlelastchanged.operation)
	|| is_set(cvpdnbundleswithmorethantwolinks.operation)
	|| is_set(cvpdnbundleswithonelink.operation)
	|| is_set(cvpdnbundleswithtwolinks.operation);
}

std::string CiscoVpdnMgmtMib::Cvpdnmultilinkinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnMultilinkInfo";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdnmultilinkinfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnbundlelastchanged.is_set || is_set(cvpdnbundlelastchanged.operation)) leaf_name_data.push_back(cvpdnbundlelastchanged.get_name_leafdata());
    if (cvpdnbundleswithmorethantwolinks.is_set || is_set(cvpdnbundleswithmorethantwolinks.operation)) leaf_name_data.push_back(cvpdnbundleswithmorethantwolinks.get_name_leafdata());
    if (cvpdnbundleswithonelink.is_set || is_set(cvpdnbundleswithonelink.operation)) leaf_name_data.push_back(cvpdnbundleswithonelink.get_name_leafdata());
    if (cvpdnbundleswithtwolinks.is_set || is_set(cvpdnbundleswithtwolinks.operation)) leaf_name_data.push_back(cvpdnbundleswithtwolinks.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdnmultilinkinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdnmultilinkinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVpdnMgmtMib::Cvpdnmultilinkinfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvpdnBundleLastChanged")
    {
        cvpdnbundlelastchanged = value;
    }
    if(value_path == "cvpdnBundlesWithMoreThanTwoLinks")
    {
        cvpdnbundleswithmorethantwolinks = value;
    }
    if(value_path == "cvpdnBundlesWithOneLink")
    {
        cvpdnbundleswithonelink = value;
    }
    if(value_path == "cvpdnBundlesWithTwoLinks")
    {
        cvpdnbundleswithtwolinks = value;
    }
}

CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystemtable()
{
    yang_name = "cvpdnSystemTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB";
}

CiscoVpdnMgmtMib::Cvpdnsystemtable::~Cvpdnsystemtable()
{
}

bool CiscoVpdnMgmtMib::Cvpdnsystemtable::has_data() const
{
    for (std::size_t index=0; index<cvpdnsystementry.size(); index++)
    {
        if(cvpdnsystementry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVpdnMgmtMib::Cvpdnsystemtable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnsystementry.size(); index++)
    {
        if(cvpdnsystementry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVpdnMgmtMib::Cvpdnsystemtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSystemTable";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdnsystemtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdnsystemtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry>();
        c->parent = this;
        cvpdnsystementry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdnsystemtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdnsystementry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVpdnMgmtMib::Cvpdnsystemtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry::Cvpdnsystementry()
    :
    cvpdnsystemtunneltype{YType::enumeration, "cvpdnSystemTunnelType"},
    cvpdnsystemdenieduserstotal{YType::uint32, "cvpdnSystemDeniedUsersTotal"},
    cvpdnsystemfailedconnreq{YType::uint32, "cvpdnSystemFailedConnReq"},
    cvpdnsysteminitialconnreq{YType::uint32, "cvpdnSystemInitialConnReq"},
    cvpdnsystemsessiontotal{YType::uint32, "cvpdnSystemSessionTotal"},
    cvpdnsystemsuccessconnreq{YType::uint32, "cvpdnSystemSuccessConnReq"},
    cvpdnsystemtunneltotal{YType::uint32, "cvpdnSystemTunnelTotal"}
{
    yang_name = "cvpdnSystemEntry"; yang_parent_name = "cvpdnSystemTable";
}

CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry::~Cvpdnsystementry()
{
}

bool CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry::has_data() const
{
    return cvpdnsystemtunneltype.is_set
	|| cvpdnsystemdenieduserstotal.is_set
	|| cvpdnsystemfailedconnreq.is_set
	|| cvpdnsysteminitialconnreq.is_set
	|| cvpdnsystemsessiontotal.is_set
	|| cvpdnsystemsuccessconnreq.is_set
	|| cvpdnsystemtunneltotal.is_set;
}

bool CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvpdnsystemtunneltype.operation)
	|| is_set(cvpdnsystemdenieduserstotal.operation)
	|| is_set(cvpdnsystemfailedconnreq.operation)
	|| is_set(cvpdnsysteminitialconnreq.operation)
	|| is_set(cvpdnsystemsessiontotal.operation)
	|| is_set(cvpdnsystemsuccessconnreq.operation)
	|| is_set(cvpdnsystemtunneltotal.operation);
}

std::string CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSystemEntry" <<"[cvpdnSystemTunnelType='" <<cvpdnsystemtunneltype <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnSystemTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnsystemtunneltype.is_set || is_set(cvpdnsystemtunneltype.operation)) leaf_name_data.push_back(cvpdnsystemtunneltype.get_name_leafdata());
    if (cvpdnsystemdenieduserstotal.is_set || is_set(cvpdnsystemdenieduserstotal.operation)) leaf_name_data.push_back(cvpdnsystemdenieduserstotal.get_name_leafdata());
    if (cvpdnsystemfailedconnreq.is_set || is_set(cvpdnsystemfailedconnreq.operation)) leaf_name_data.push_back(cvpdnsystemfailedconnreq.get_name_leafdata());
    if (cvpdnsysteminitialconnreq.is_set || is_set(cvpdnsysteminitialconnreq.operation)) leaf_name_data.push_back(cvpdnsysteminitialconnreq.get_name_leafdata());
    if (cvpdnsystemsessiontotal.is_set || is_set(cvpdnsystemsessiontotal.operation)) leaf_name_data.push_back(cvpdnsystemsessiontotal.get_name_leafdata());
    if (cvpdnsystemsuccessconnreq.is_set || is_set(cvpdnsystemsuccessconnreq.operation)) leaf_name_data.push_back(cvpdnsystemsuccessconnreq.get_name_leafdata());
    if (cvpdnsystemtunneltotal.is_set || is_set(cvpdnsystemtunneltotal.operation)) leaf_name_data.push_back(cvpdnsystemtunneltotal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVpdnMgmtMib::Cvpdnsystemtable::Cvpdnsystementry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype = value;
    }
    if(value_path == "cvpdnSystemDeniedUsersTotal")
    {
        cvpdnsystemdenieduserstotal = value;
    }
    if(value_path == "cvpdnSystemFailedConnReq")
    {
        cvpdnsystemfailedconnreq = value;
    }
    if(value_path == "cvpdnSystemInitialConnReq")
    {
        cvpdnsysteminitialconnreq = value;
    }
    if(value_path == "cvpdnSystemSessionTotal")
    {
        cvpdnsystemsessiontotal = value;
    }
    if(value_path == "cvpdnSystemSuccessConnReq")
    {
        cvpdnsystemsuccessconnreq = value;
    }
    if(value_path == "cvpdnSystemTunnelTotal")
    {
        cvpdnsystemtunneltotal = value;
    }
}

CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunneltable()
{
    yang_name = "cvpdnTunnelTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB";
}

CiscoVpdnMgmtMib::Cvpdntunneltable::~Cvpdntunneltable()
{
}

bool CiscoVpdnMgmtMib::Cvpdntunneltable::has_data() const
{
    for (std::size_t index=0; index<cvpdntunnelentry.size(); index++)
    {
        if(cvpdntunnelentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVpdnMgmtMib::Cvpdntunneltable::has_operation() const
{
    for (std::size_t index=0; index<cvpdntunnelentry.size(); index++)
    {
        if(cvpdntunnelentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVpdnMgmtMib::Cvpdntunneltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelTable";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdntunneltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdntunneltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry>();
        c->parent = this;
        cvpdntunnelentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdntunneltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdntunnelentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVpdnMgmtMib::Cvpdntunneltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::Cvpdntunnelentry()
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
    yang_name = "cvpdnTunnelEntry"; yang_parent_name = "cvpdnTunnelTable";
}

CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::~Cvpdntunnelentry()
{
}

bool CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::has_data() const
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

bool CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvpdntunneltunnelid.operation)
	|| is_set(cvpdntunnelactivesessions.operation)
	|| is_set(cvpdntunneldeniedusers.operation)
	|| is_set(cvpdntunnellocalinitconnection.operation)
	|| is_set(cvpdntunnellocalipaddress.operation)
	|| is_set(cvpdntunnellocalname.operation)
	|| is_set(cvpdntunnelnetworkservicetype.operation)
	|| is_set(cvpdntunnelorigcause.operation)
	|| is_set(cvpdntunnelremoteendpointname.operation)
	|| is_set(cvpdntunnelremoteipaddress.operation)
	|| is_set(cvpdntunnelremotename.operation)
	|| is_set(cvpdntunnelremotetunnelid.operation)
	|| is_set(cvpdntunnelsoftshut.operation)
	|| is_set(cvpdntunnelsourceipaddress.operation)
	|| is_set(cvpdntunnelstate.operation);
}

std::string CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelEntry" <<"[cvpdnTunnelTunnelId='" <<cvpdntunneltunnelid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnTunnelTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdntunneltunnelid.is_set || is_set(cvpdntunneltunnelid.operation)) leaf_name_data.push_back(cvpdntunneltunnelid.get_name_leafdata());
    if (cvpdntunnelactivesessions.is_set || is_set(cvpdntunnelactivesessions.operation)) leaf_name_data.push_back(cvpdntunnelactivesessions.get_name_leafdata());
    if (cvpdntunneldeniedusers.is_set || is_set(cvpdntunneldeniedusers.operation)) leaf_name_data.push_back(cvpdntunneldeniedusers.get_name_leafdata());
    if (cvpdntunnellocalinitconnection.is_set || is_set(cvpdntunnellocalinitconnection.operation)) leaf_name_data.push_back(cvpdntunnellocalinitconnection.get_name_leafdata());
    if (cvpdntunnellocalipaddress.is_set || is_set(cvpdntunnellocalipaddress.operation)) leaf_name_data.push_back(cvpdntunnellocalipaddress.get_name_leafdata());
    if (cvpdntunnellocalname.is_set || is_set(cvpdntunnellocalname.operation)) leaf_name_data.push_back(cvpdntunnellocalname.get_name_leafdata());
    if (cvpdntunnelnetworkservicetype.is_set || is_set(cvpdntunnelnetworkservicetype.operation)) leaf_name_data.push_back(cvpdntunnelnetworkservicetype.get_name_leafdata());
    if (cvpdntunnelorigcause.is_set || is_set(cvpdntunnelorigcause.operation)) leaf_name_data.push_back(cvpdntunnelorigcause.get_name_leafdata());
    if (cvpdntunnelremoteendpointname.is_set || is_set(cvpdntunnelremoteendpointname.operation)) leaf_name_data.push_back(cvpdntunnelremoteendpointname.get_name_leafdata());
    if (cvpdntunnelremoteipaddress.is_set || is_set(cvpdntunnelremoteipaddress.operation)) leaf_name_data.push_back(cvpdntunnelremoteipaddress.get_name_leafdata());
    if (cvpdntunnelremotename.is_set || is_set(cvpdntunnelremotename.operation)) leaf_name_data.push_back(cvpdntunnelremotename.get_name_leafdata());
    if (cvpdntunnelremotetunnelid.is_set || is_set(cvpdntunnelremotetunnelid.operation)) leaf_name_data.push_back(cvpdntunnelremotetunnelid.get_name_leafdata());
    if (cvpdntunnelsoftshut.is_set || is_set(cvpdntunnelsoftshut.operation)) leaf_name_data.push_back(cvpdntunnelsoftshut.get_name_leafdata());
    if (cvpdntunnelsourceipaddress.is_set || is_set(cvpdntunnelsourceipaddress.operation)) leaf_name_data.push_back(cvpdntunnelsourceipaddress.get_name_leafdata());
    if (cvpdntunnelstate.is_set || is_set(cvpdntunnelstate.operation)) leaf_name_data.push_back(cvpdntunnelstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvpdnTunnelTunnelId")
    {
        cvpdntunneltunnelid = value;
    }
    if(value_path == "cvpdnTunnelActiveSessions")
    {
        cvpdntunnelactivesessions = value;
    }
    if(value_path == "cvpdnTunnelDeniedUsers")
    {
        cvpdntunneldeniedusers = value;
    }
    if(value_path == "cvpdnTunnelLocalInitConnection")
    {
        cvpdntunnellocalinitconnection = value;
    }
    if(value_path == "cvpdnTunnelLocalIpAddress")
    {
        cvpdntunnellocalipaddress = value;
    }
    if(value_path == "cvpdnTunnelLocalName")
    {
        cvpdntunnellocalname = value;
    }
    if(value_path == "cvpdnTunnelNetworkServiceType")
    {
        cvpdntunnelnetworkservicetype = value;
    }
    if(value_path == "cvpdnTunnelOrigCause")
    {
        cvpdntunnelorigcause = value;
    }
    if(value_path == "cvpdnTunnelRemoteEndpointName")
    {
        cvpdntunnelremoteendpointname = value;
    }
    if(value_path == "cvpdnTunnelRemoteIpAddress")
    {
        cvpdntunnelremoteipaddress = value;
    }
    if(value_path == "cvpdnTunnelRemoteName")
    {
        cvpdntunnelremotename = value;
    }
    if(value_path == "cvpdnTunnelRemoteTunnelId")
    {
        cvpdntunnelremotetunnelid = value;
    }
    if(value_path == "cvpdnTunnelSoftshut")
    {
        cvpdntunnelsoftshut = value;
    }
    if(value_path == "cvpdnTunnelSourceIpAddress")
    {
        cvpdntunnelsourceipaddress = value;
    }
    if(value_path == "cvpdnTunnelState")
    {
        cvpdntunnelstate = value;
    }
}

CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrtable()
{
    yang_name = "cvpdnTunnelAttrTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB";
}

CiscoVpdnMgmtMib::Cvpdntunnelattrtable::~Cvpdntunnelattrtable()
{
}

bool CiscoVpdnMgmtMib::Cvpdntunnelattrtable::has_data() const
{
    for (std::size_t index=0; index<cvpdntunnelattrentry.size(); index++)
    {
        if(cvpdntunnelattrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVpdnMgmtMib::Cvpdntunnelattrtable::has_operation() const
{
    for (std::size_t index=0; index<cvpdntunnelattrentry.size(); index++)
    {
        if(cvpdntunnelattrentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVpdnMgmtMib::Cvpdntunnelattrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelAttrTable";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdntunnelattrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdntunnelattrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry>();
        c->parent = this;
        cvpdntunnelattrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdntunnelattrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdntunnelattrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVpdnMgmtMib::Cvpdntunnelattrtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::Cvpdntunnelattrentry()
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
    yang_name = "cvpdnTunnelAttrEntry"; yang_parent_name = "cvpdnTunnelAttrTable";
}

CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::~Cvpdntunnelattrentry()
{
}

bool CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::has_data() const
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

bool CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvpdnsystemtunneltype.operation)
	|| is_set(cvpdntunnelattrtunnelid.operation)
	|| is_set(cvpdntunnelattractivesessions.operation)
	|| is_set(cvpdntunnelattrdeniedusers.operation)
	|| is_set(cvpdntunnelattrlocalinetaddress.operation)
	|| is_set(cvpdntunnelattrlocalinetaddresstype.operation)
	|| is_set(cvpdntunnelattrlocalinitconnection.operation)
	|| is_set(cvpdntunnelattrlocalipaddress.operation)
	|| is_set(cvpdntunnelattrlocalname.operation)
	|| is_set(cvpdntunnelattrnetworkservicetype.operation)
	|| is_set(cvpdntunnelattrorigcause.operation)
	|| is_set(cvpdntunnelattrremoteendpointname.operation)
	|| is_set(cvpdntunnelattrremoteinetaddress.operation)
	|| is_set(cvpdntunnelattrremoteinetaddresstype.operation)
	|| is_set(cvpdntunnelattrremoteipaddress.operation)
	|| is_set(cvpdntunnelattrremotename.operation)
	|| is_set(cvpdntunnelattrremotetunnelid.operation)
	|| is_set(cvpdntunnelattrsoftshut.operation)
	|| is_set(cvpdntunnelattrsourceinetaddress.operation)
	|| is_set(cvpdntunnelattrsourceinetaddresstype.operation)
	|| is_set(cvpdntunnelattrsourceipaddress.operation)
	|| is_set(cvpdntunnelattrstate.operation);
}

std::string CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelAttrEntry" <<"[cvpdnSystemTunnelType='" <<cvpdnsystemtunneltype <<"']" <<"[cvpdnTunnelAttrTunnelId='" <<cvpdntunnelattrtunnelid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnTunnelAttrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnsystemtunneltype.is_set || is_set(cvpdnsystemtunneltype.operation)) leaf_name_data.push_back(cvpdnsystemtunneltype.get_name_leafdata());
    if (cvpdntunnelattrtunnelid.is_set || is_set(cvpdntunnelattrtunnelid.operation)) leaf_name_data.push_back(cvpdntunnelattrtunnelid.get_name_leafdata());
    if (cvpdntunnelattractivesessions.is_set || is_set(cvpdntunnelattractivesessions.operation)) leaf_name_data.push_back(cvpdntunnelattractivesessions.get_name_leafdata());
    if (cvpdntunnelattrdeniedusers.is_set || is_set(cvpdntunnelattrdeniedusers.operation)) leaf_name_data.push_back(cvpdntunnelattrdeniedusers.get_name_leafdata());
    if (cvpdntunnelattrlocalinetaddress.is_set || is_set(cvpdntunnelattrlocalinetaddress.operation)) leaf_name_data.push_back(cvpdntunnelattrlocalinetaddress.get_name_leafdata());
    if (cvpdntunnelattrlocalinetaddresstype.is_set || is_set(cvpdntunnelattrlocalinetaddresstype.operation)) leaf_name_data.push_back(cvpdntunnelattrlocalinetaddresstype.get_name_leafdata());
    if (cvpdntunnelattrlocalinitconnection.is_set || is_set(cvpdntunnelattrlocalinitconnection.operation)) leaf_name_data.push_back(cvpdntunnelattrlocalinitconnection.get_name_leafdata());
    if (cvpdntunnelattrlocalipaddress.is_set || is_set(cvpdntunnelattrlocalipaddress.operation)) leaf_name_data.push_back(cvpdntunnelattrlocalipaddress.get_name_leafdata());
    if (cvpdntunnelattrlocalname.is_set || is_set(cvpdntunnelattrlocalname.operation)) leaf_name_data.push_back(cvpdntunnelattrlocalname.get_name_leafdata());
    if (cvpdntunnelattrnetworkservicetype.is_set || is_set(cvpdntunnelattrnetworkservicetype.operation)) leaf_name_data.push_back(cvpdntunnelattrnetworkservicetype.get_name_leafdata());
    if (cvpdntunnelattrorigcause.is_set || is_set(cvpdntunnelattrorigcause.operation)) leaf_name_data.push_back(cvpdntunnelattrorigcause.get_name_leafdata());
    if (cvpdntunnelattrremoteendpointname.is_set || is_set(cvpdntunnelattrremoteendpointname.operation)) leaf_name_data.push_back(cvpdntunnelattrremoteendpointname.get_name_leafdata());
    if (cvpdntunnelattrremoteinetaddress.is_set || is_set(cvpdntunnelattrremoteinetaddress.operation)) leaf_name_data.push_back(cvpdntunnelattrremoteinetaddress.get_name_leafdata());
    if (cvpdntunnelattrremoteinetaddresstype.is_set || is_set(cvpdntunnelattrremoteinetaddresstype.operation)) leaf_name_data.push_back(cvpdntunnelattrremoteinetaddresstype.get_name_leafdata());
    if (cvpdntunnelattrremoteipaddress.is_set || is_set(cvpdntunnelattrremoteipaddress.operation)) leaf_name_data.push_back(cvpdntunnelattrremoteipaddress.get_name_leafdata());
    if (cvpdntunnelattrremotename.is_set || is_set(cvpdntunnelattrremotename.operation)) leaf_name_data.push_back(cvpdntunnelattrremotename.get_name_leafdata());
    if (cvpdntunnelattrremotetunnelid.is_set || is_set(cvpdntunnelattrremotetunnelid.operation)) leaf_name_data.push_back(cvpdntunnelattrremotetunnelid.get_name_leafdata());
    if (cvpdntunnelattrsoftshut.is_set || is_set(cvpdntunnelattrsoftshut.operation)) leaf_name_data.push_back(cvpdntunnelattrsoftshut.get_name_leafdata());
    if (cvpdntunnelattrsourceinetaddress.is_set || is_set(cvpdntunnelattrsourceinetaddress.operation)) leaf_name_data.push_back(cvpdntunnelattrsourceinetaddress.get_name_leafdata());
    if (cvpdntunnelattrsourceinetaddresstype.is_set || is_set(cvpdntunnelattrsourceinetaddresstype.operation)) leaf_name_data.push_back(cvpdntunnelattrsourceinetaddresstype.get_name_leafdata());
    if (cvpdntunnelattrsourceipaddress.is_set || is_set(cvpdntunnelattrsourceipaddress.operation)) leaf_name_data.push_back(cvpdntunnelattrsourceipaddress.get_name_leafdata());
    if (cvpdntunnelattrstate.is_set || is_set(cvpdntunnelattrstate.operation)) leaf_name_data.push_back(cvpdntunnelattrstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype = value;
    }
    if(value_path == "cvpdnTunnelAttrTunnelId")
    {
        cvpdntunnelattrtunnelid = value;
    }
    if(value_path == "cvpdnTunnelAttrActiveSessions")
    {
        cvpdntunnelattractivesessions = value;
    }
    if(value_path == "cvpdnTunnelAttrDeniedUsers")
    {
        cvpdntunnelattrdeniedusers = value;
    }
    if(value_path == "cvpdnTunnelAttrLocalInetAddress")
    {
        cvpdntunnelattrlocalinetaddress = value;
    }
    if(value_path == "cvpdnTunnelAttrLocalInetAddressType")
    {
        cvpdntunnelattrlocalinetaddresstype = value;
    }
    if(value_path == "cvpdnTunnelAttrLocalInitConnection")
    {
        cvpdntunnelattrlocalinitconnection = value;
    }
    if(value_path == "cvpdnTunnelAttrLocalIpAddress")
    {
        cvpdntunnelattrlocalipaddress = value;
    }
    if(value_path == "cvpdnTunnelAttrLocalName")
    {
        cvpdntunnelattrlocalname = value;
    }
    if(value_path == "cvpdnTunnelAttrNetworkServiceType")
    {
        cvpdntunnelattrnetworkservicetype = value;
    }
    if(value_path == "cvpdnTunnelAttrOrigCause")
    {
        cvpdntunnelattrorigcause = value;
    }
    if(value_path == "cvpdnTunnelAttrRemoteEndpointName")
    {
        cvpdntunnelattrremoteendpointname = value;
    }
    if(value_path == "cvpdnTunnelAttrRemoteInetAddress")
    {
        cvpdntunnelattrremoteinetaddress = value;
    }
    if(value_path == "cvpdnTunnelAttrRemoteInetAddressType")
    {
        cvpdntunnelattrremoteinetaddresstype = value;
    }
    if(value_path == "cvpdnTunnelAttrRemoteIpAddress")
    {
        cvpdntunnelattrremoteipaddress = value;
    }
    if(value_path == "cvpdnTunnelAttrRemoteName")
    {
        cvpdntunnelattrremotename = value;
    }
    if(value_path == "cvpdnTunnelAttrRemoteTunnelId")
    {
        cvpdntunnelattrremotetunnelid = value;
    }
    if(value_path == "cvpdnTunnelAttrSoftshut")
    {
        cvpdntunnelattrsoftshut = value;
    }
    if(value_path == "cvpdnTunnelAttrSourceInetAddress")
    {
        cvpdntunnelattrsourceinetaddress = value;
    }
    if(value_path == "cvpdnTunnelAttrSourceInetAddressType")
    {
        cvpdntunnelattrsourceinetaddresstype = value;
    }
    if(value_path == "cvpdnTunnelAttrSourceIpAddress")
    {
        cvpdntunnelattrsourceipaddress = value;
    }
    if(value_path == "cvpdnTunnelAttrState")
    {
        cvpdntunnelattrstate = value;
    }
}

CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessiontable()
{
    yang_name = "cvpdnTunnelSessionTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB";
}

CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::~Cvpdntunnelsessiontable()
{
}

bool CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::has_data() const
{
    for (std::size_t index=0; index<cvpdntunnelsessionentry.size(); index++)
    {
        if(cvpdntunnelsessionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::has_operation() const
{
    for (std::size_t index=0; index<cvpdntunnelsessionentry.size(); index++)
    {
        if(cvpdntunnelsessionentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelSessionTable";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry>();
        c->parent = this;
        cvpdntunnelsessionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdntunnelsessionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::Cvpdntunnelsessionentry()
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
    yang_name = "cvpdnTunnelSessionEntry"; yang_parent_name = "cvpdnTunnelSessionTable";
}

CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::~Cvpdntunnelsessionentry()
{
}

bool CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::has_data() const
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

bool CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvpdntunneltunnelid.operation)
	|| is_set(cvpdntunnelsessionid.operation)
	|| is_set(cvpdntunnelsessionbytesin.operation)
	|| is_set(cvpdntunnelsessionbytesout.operation)
	|| is_set(cvpdntunnelsessioncallduration.operation)
	|| is_set(cvpdntunnelsessiondevicecallerid.operation)
	|| is_set(cvpdntunnelsessiondevicephyid.operation)
	|| is_set(cvpdntunnelsessiondevicetype.operation)
	|| is_set(cvpdntunnelsessionds1channelindex.operation)
	|| is_set(cvpdntunnelsessionds1portindex.operation)
	|| is_set(cvpdntunnelsessionds1slotindex.operation)
	|| is_set(cvpdntunnelsessionmodemcallstartindex.operation)
	|| is_set(cvpdntunnelsessionmodemcallstarttime.operation)
	|| is_set(cvpdntunnelsessionmodemportindex.operation)
	|| is_set(cvpdntunnelsessionmodemslotindex.operation)
	|| is_set(cvpdntunnelsessionmultilink.operation)
	|| is_set(cvpdntunnelsessionpacketsin.operation)
	|| is_set(cvpdntunnelsessionpacketsout.operation)
	|| is_set(cvpdntunnelsessionstate.operation)
	|| is_set(cvpdntunnelsessionusername.operation);
}

std::string CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTunnelSessionEntry" <<"[cvpdnTunnelTunnelId='" <<cvpdntunneltunnelid <<"']" <<"[cvpdnTunnelSessionId='" <<cvpdntunnelsessionid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnTunnelSessionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdntunneltunnelid.is_set || is_set(cvpdntunneltunnelid.operation)) leaf_name_data.push_back(cvpdntunneltunnelid.get_name_leafdata());
    if (cvpdntunnelsessionid.is_set || is_set(cvpdntunnelsessionid.operation)) leaf_name_data.push_back(cvpdntunnelsessionid.get_name_leafdata());
    if (cvpdntunnelsessionbytesin.is_set || is_set(cvpdntunnelsessionbytesin.operation)) leaf_name_data.push_back(cvpdntunnelsessionbytesin.get_name_leafdata());
    if (cvpdntunnelsessionbytesout.is_set || is_set(cvpdntunnelsessionbytesout.operation)) leaf_name_data.push_back(cvpdntunnelsessionbytesout.get_name_leafdata());
    if (cvpdntunnelsessioncallduration.is_set || is_set(cvpdntunnelsessioncallduration.operation)) leaf_name_data.push_back(cvpdntunnelsessioncallduration.get_name_leafdata());
    if (cvpdntunnelsessiondevicecallerid.is_set || is_set(cvpdntunnelsessiondevicecallerid.operation)) leaf_name_data.push_back(cvpdntunnelsessiondevicecallerid.get_name_leafdata());
    if (cvpdntunnelsessiondevicephyid.is_set || is_set(cvpdntunnelsessiondevicephyid.operation)) leaf_name_data.push_back(cvpdntunnelsessiondevicephyid.get_name_leafdata());
    if (cvpdntunnelsessiondevicetype.is_set || is_set(cvpdntunnelsessiondevicetype.operation)) leaf_name_data.push_back(cvpdntunnelsessiondevicetype.get_name_leafdata());
    if (cvpdntunnelsessionds1channelindex.is_set || is_set(cvpdntunnelsessionds1channelindex.operation)) leaf_name_data.push_back(cvpdntunnelsessionds1channelindex.get_name_leafdata());
    if (cvpdntunnelsessionds1portindex.is_set || is_set(cvpdntunnelsessionds1portindex.operation)) leaf_name_data.push_back(cvpdntunnelsessionds1portindex.get_name_leafdata());
    if (cvpdntunnelsessionds1slotindex.is_set || is_set(cvpdntunnelsessionds1slotindex.operation)) leaf_name_data.push_back(cvpdntunnelsessionds1slotindex.get_name_leafdata());
    if (cvpdntunnelsessionmodemcallstartindex.is_set || is_set(cvpdntunnelsessionmodemcallstartindex.operation)) leaf_name_data.push_back(cvpdntunnelsessionmodemcallstartindex.get_name_leafdata());
    if (cvpdntunnelsessionmodemcallstarttime.is_set || is_set(cvpdntunnelsessionmodemcallstarttime.operation)) leaf_name_data.push_back(cvpdntunnelsessionmodemcallstarttime.get_name_leafdata());
    if (cvpdntunnelsessionmodemportindex.is_set || is_set(cvpdntunnelsessionmodemportindex.operation)) leaf_name_data.push_back(cvpdntunnelsessionmodemportindex.get_name_leafdata());
    if (cvpdntunnelsessionmodemslotindex.is_set || is_set(cvpdntunnelsessionmodemslotindex.operation)) leaf_name_data.push_back(cvpdntunnelsessionmodemslotindex.get_name_leafdata());
    if (cvpdntunnelsessionmultilink.is_set || is_set(cvpdntunnelsessionmultilink.operation)) leaf_name_data.push_back(cvpdntunnelsessionmultilink.get_name_leafdata());
    if (cvpdntunnelsessionpacketsin.is_set || is_set(cvpdntunnelsessionpacketsin.operation)) leaf_name_data.push_back(cvpdntunnelsessionpacketsin.get_name_leafdata());
    if (cvpdntunnelsessionpacketsout.is_set || is_set(cvpdntunnelsessionpacketsout.operation)) leaf_name_data.push_back(cvpdntunnelsessionpacketsout.get_name_leafdata());
    if (cvpdntunnelsessionstate.is_set || is_set(cvpdntunnelsessionstate.operation)) leaf_name_data.push_back(cvpdntunnelsessionstate.get_name_leafdata());
    if (cvpdntunnelsessionusername.is_set || is_set(cvpdntunnelsessionusername.operation)) leaf_name_data.push_back(cvpdntunnelsessionusername.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvpdnTunnelTunnelId")
    {
        cvpdntunneltunnelid = value;
    }
    if(value_path == "cvpdnTunnelSessionId")
    {
        cvpdntunnelsessionid = value;
    }
    if(value_path == "cvpdnTunnelSessionBytesIn")
    {
        cvpdntunnelsessionbytesin = value;
    }
    if(value_path == "cvpdnTunnelSessionBytesOut")
    {
        cvpdntunnelsessionbytesout = value;
    }
    if(value_path == "cvpdnTunnelSessionCallDuration")
    {
        cvpdntunnelsessioncallduration = value;
    }
    if(value_path == "cvpdnTunnelSessionDeviceCallerId")
    {
        cvpdntunnelsessiondevicecallerid = value;
    }
    if(value_path == "cvpdnTunnelSessionDevicePhyId")
    {
        cvpdntunnelsessiondevicephyid = value;
    }
    if(value_path == "cvpdnTunnelSessionDeviceType")
    {
        cvpdntunnelsessiondevicetype = value;
    }
    if(value_path == "cvpdnTunnelSessionDS1ChannelIndex")
    {
        cvpdntunnelsessionds1channelindex = value;
    }
    if(value_path == "cvpdnTunnelSessionDS1PortIndex")
    {
        cvpdntunnelsessionds1portindex = value;
    }
    if(value_path == "cvpdnTunnelSessionDS1SlotIndex")
    {
        cvpdntunnelsessionds1slotindex = value;
    }
    if(value_path == "cvpdnTunnelSessionModemCallStartIndex")
    {
        cvpdntunnelsessionmodemcallstartindex = value;
    }
    if(value_path == "cvpdnTunnelSessionModemCallStartTime")
    {
        cvpdntunnelsessionmodemcallstarttime = value;
    }
    if(value_path == "cvpdnTunnelSessionModemPortIndex")
    {
        cvpdntunnelsessionmodemportindex = value;
    }
    if(value_path == "cvpdnTunnelSessionModemSlotIndex")
    {
        cvpdntunnelsessionmodemslotindex = value;
    }
    if(value_path == "cvpdnTunnelSessionMultilink")
    {
        cvpdntunnelsessionmultilink = value;
    }
    if(value_path == "cvpdnTunnelSessionPacketsIn")
    {
        cvpdntunnelsessionpacketsin = value;
    }
    if(value_path == "cvpdnTunnelSessionPacketsOut")
    {
        cvpdntunnelsessionpacketsout = value;
    }
    if(value_path == "cvpdnTunnelSessionState")
    {
        cvpdntunnelsessionstate = value;
    }
    if(value_path == "cvpdnTunnelSessionUserName")
    {
        cvpdntunnelsessionusername = value;
    }
}

CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrtable()
{
    yang_name = "cvpdnSessionAttrTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB";
}

CiscoVpdnMgmtMib::Cvpdnsessionattrtable::~Cvpdnsessionattrtable()
{
}

bool CiscoVpdnMgmtMib::Cvpdnsessionattrtable::has_data() const
{
    for (std::size_t index=0; index<cvpdnsessionattrentry.size(); index++)
    {
        if(cvpdnsessionattrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVpdnMgmtMib::Cvpdnsessionattrtable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnsessionattrentry.size(); index++)
    {
        if(cvpdnsessionattrentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVpdnMgmtMib::Cvpdnsessionattrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSessionAttrTable";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdnsessionattrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdnsessionattrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry>();
        c->parent = this;
        cvpdnsessionattrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdnsessionattrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdnsessionattrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVpdnMgmtMib::Cvpdnsessionattrtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::Cvpdnsessionattrentry()
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
    yang_name = "cvpdnSessionAttrEntry"; yang_parent_name = "cvpdnSessionAttrTable";
}

CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::~Cvpdnsessionattrentry()
{
}

bool CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::has_data() const
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

bool CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvpdnsystemtunneltype.operation)
	|| is_set(cvpdntunnelattrtunnelid.operation)
	|| is_set(cvpdnsessionattrsessionid.operation)
	|| is_set(cvpdnsessionattrbytesin.operation)
	|| is_set(cvpdnsessionattrbytesout.operation)
	|| is_set(cvpdnsessionattrcallduration.operation)
	|| is_set(cvpdnsessionattrdevicecallerid.operation)
	|| is_set(cvpdnsessionattrdevicephyid.operation)
	|| is_set(cvpdnsessionattrdevicetype.operation)
	|| is_set(cvpdnsessionattrds1channelindex.operation)
	|| is_set(cvpdnsessionattrds1portindex.operation)
	|| is_set(cvpdnsessionattrds1slotindex.operation)
	|| is_set(cvpdnsessionattrmodemcallstartindex.operation)
	|| is_set(cvpdnsessionattrmodemcallstarttime.operation)
	|| is_set(cvpdnsessionattrmodemportindex.operation)
	|| is_set(cvpdnsessionattrmodemslotindex.operation)
	|| is_set(cvpdnsessionattrmultilink.operation)
	|| is_set(cvpdnsessionattrmultilinkbundle.operation)
	|| is_set(cvpdnsessionattrmultilinkifindex.operation)
	|| is_set(cvpdnsessionattrpacketsin.operation)
	|| is_set(cvpdnsessionattrpacketsout.operation)
	|| is_set(cvpdnsessionattrrecvpktsdropped.operation)
	|| is_set(cvpdnsessionattrsentpktsdropped.operation)
	|| is_set(cvpdnsessionattrstate.operation)
	|| is_set(cvpdnsessionattrusername.operation)
	|| is_set(cvpdnsessionattrvirtualcircuitid.operation);
}

std::string CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnSessionAttrEntry" <<"[cvpdnSystemTunnelType='" <<cvpdnsystemtunneltype <<"']" <<"[cvpdnTunnelAttrTunnelId='" <<cvpdntunnelattrtunnelid <<"']" <<"[cvpdnSessionAttrSessionId='" <<cvpdnsessionattrsessionid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnSessionAttrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnsystemtunneltype.is_set || is_set(cvpdnsystemtunneltype.operation)) leaf_name_data.push_back(cvpdnsystemtunneltype.get_name_leafdata());
    if (cvpdntunnelattrtunnelid.is_set || is_set(cvpdntunnelattrtunnelid.operation)) leaf_name_data.push_back(cvpdntunnelattrtunnelid.get_name_leafdata());
    if (cvpdnsessionattrsessionid.is_set || is_set(cvpdnsessionattrsessionid.operation)) leaf_name_data.push_back(cvpdnsessionattrsessionid.get_name_leafdata());
    if (cvpdnsessionattrbytesin.is_set || is_set(cvpdnsessionattrbytesin.operation)) leaf_name_data.push_back(cvpdnsessionattrbytesin.get_name_leafdata());
    if (cvpdnsessionattrbytesout.is_set || is_set(cvpdnsessionattrbytesout.operation)) leaf_name_data.push_back(cvpdnsessionattrbytesout.get_name_leafdata());
    if (cvpdnsessionattrcallduration.is_set || is_set(cvpdnsessionattrcallduration.operation)) leaf_name_data.push_back(cvpdnsessionattrcallduration.get_name_leafdata());
    if (cvpdnsessionattrdevicecallerid.is_set || is_set(cvpdnsessionattrdevicecallerid.operation)) leaf_name_data.push_back(cvpdnsessionattrdevicecallerid.get_name_leafdata());
    if (cvpdnsessionattrdevicephyid.is_set || is_set(cvpdnsessionattrdevicephyid.operation)) leaf_name_data.push_back(cvpdnsessionattrdevicephyid.get_name_leafdata());
    if (cvpdnsessionattrdevicetype.is_set || is_set(cvpdnsessionattrdevicetype.operation)) leaf_name_data.push_back(cvpdnsessionattrdevicetype.get_name_leafdata());
    if (cvpdnsessionattrds1channelindex.is_set || is_set(cvpdnsessionattrds1channelindex.operation)) leaf_name_data.push_back(cvpdnsessionattrds1channelindex.get_name_leafdata());
    if (cvpdnsessionattrds1portindex.is_set || is_set(cvpdnsessionattrds1portindex.operation)) leaf_name_data.push_back(cvpdnsessionattrds1portindex.get_name_leafdata());
    if (cvpdnsessionattrds1slotindex.is_set || is_set(cvpdnsessionattrds1slotindex.operation)) leaf_name_data.push_back(cvpdnsessionattrds1slotindex.get_name_leafdata());
    if (cvpdnsessionattrmodemcallstartindex.is_set || is_set(cvpdnsessionattrmodemcallstartindex.operation)) leaf_name_data.push_back(cvpdnsessionattrmodemcallstartindex.get_name_leafdata());
    if (cvpdnsessionattrmodemcallstarttime.is_set || is_set(cvpdnsessionattrmodemcallstarttime.operation)) leaf_name_data.push_back(cvpdnsessionattrmodemcallstarttime.get_name_leafdata());
    if (cvpdnsessionattrmodemportindex.is_set || is_set(cvpdnsessionattrmodemportindex.operation)) leaf_name_data.push_back(cvpdnsessionattrmodemportindex.get_name_leafdata());
    if (cvpdnsessionattrmodemslotindex.is_set || is_set(cvpdnsessionattrmodemslotindex.operation)) leaf_name_data.push_back(cvpdnsessionattrmodemslotindex.get_name_leafdata());
    if (cvpdnsessionattrmultilink.is_set || is_set(cvpdnsessionattrmultilink.operation)) leaf_name_data.push_back(cvpdnsessionattrmultilink.get_name_leafdata());
    if (cvpdnsessionattrmultilinkbundle.is_set || is_set(cvpdnsessionattrmultilinkbundle.operation)) leaf_name_data.push_back(cvpdnsessionattrmultilinkbundle.get_name_leafdata());
    if (cvpdnsessionattrmultilinkifindex.is_set || is_set(cvpdnsessionattrmultilinkifindex.operation)) leaf_name_data.push_back(cvpdnsessionattrmultilinkifindex.get_name_leafdata());
    if (cvpdnsessionattrpacketsin.is_set || is_set(cvpdnsessionattrpacketsin.operation)) leaf_name_data.push_back(cvpdnsessionattrpacketsin.get_name_leafdata());
    if (cvpdnsessionattrpacketsout.is_set || is_set(cvpdnsessionattrpacketsout.operation)) leaf_name_data.push_back(cvpdnsessionattrpacketsout.get_name_leafdata());
    if (cvpdnsessionattrrecvpktsdropped.is_set || is_set(cvpdnsessionattrrecvpktsdropped.operation)) leaf_name_data.push_back(cvpdnsessionattrrecvpktsdropped.get_name_leafdata());
    if (cvpdnsessionattrsentpktsdropped.is_set || is_set(cvpdnsessionattrsentpktsdropped.operation)) leaf_name_data.push_back(cvpdnsessionattrsentpktsdropped.get_name_leafdata());
    if (cvpdnsessionattrstate.is_set || is_set(cvpdnsessionattrstate.operation)) leaf_name_data.push_back(cvpdnsessionattrstate.get_name_leafdata());
    if (cvpdnsessionattrusername.is_set || is_set(cvpdnsessionattrusername.operation)) leaf_name_data.push_back(cvpdnsessionattrusername.get_name_leafdata());
    if (cvpdnsessionattrvirtualcircuitid.is_set || is_set(cvpdnsessionattrvirtualcircuitid.operation)) leaf_name_data.push_back(cvpdnsessionattrvirtualcircuitid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvpdnSystemTunnelType")
    {
        cvpdnsystemtunneltype = value;
    }
    if(value_path == "cvpdnTunnelAttrTunnelId")
    {
        cvpdntunnelattrtunnelid = value;
    }
    if(value_path == "cvpdnSessionAttrSessionId")
    {
        cvpdnsessionattrsessionid = value;
    }
    if(value_path == "cvpdnSessionAttrBytesIn")
    {
        cvpdnsessionattrbytesin = value;
    }
    if(value_path == "cvpdnSessionAttrBytesOut")
    {
        cvpdnsessionattrbytesout = value;
    }
    if(value_path == "cvpdnSessionAttrCallDuration")
    {
        cvpdnsessionattrcallduration = value;
    }
    if(value_path == "cvpdnSessionAttrDeviceCallerId")
    {
        cvpdnsessionattrdevicecallerid = value;
    }
    if(value_path == "cvpdnSessionAttrDevicePhyId")
    {
        cvpdnsessionattrdevicephyid = value;
    }
    if(value_path == "cvpdnSessionAttrDeviceType")
    {
        cvpdnsessionattrdevicetype = value;
    }
    if(value_path == "cvpdnSessionAttrDS1ChannelIndex")
    {
        cvpdnsessionattrds1channelindex = value;
    }
    if(value_path == "cvpdnSessionAttrDS1PortIndex")
    {
        cvpdnsessionattrds1portindex = value;
    }
    if(value_path == "cvpdnSessionAttrDS1SlotIndex")
    {
        cvpdnsessionattrds1slotindex = value;
    }
    if(value_path == "cvpdnSessionAttrModemCallStartIndex")
    {
        cvpdnsessionattrmodemcallstartindex = value;
    }
    if(value_path == "cvpdnSessionAttrModemCallStartTime")
    {
        cvpdnsessionattrmodemcallstarttime = value;
    }
    if(value_path == "cvpdnSessionAttrModemPortIndex")
    {
        cvpdnsessionattrmodemportindex = value;
    }
    if(value_path == "cvpdnSessionAttrModemSlotIndex")
    {
        cvpdnsessionattrmodemslotindex = value;
    }
    if(value_path == "cvpdnSessionAttrMultilink")
    {
        cvpdnsessionattrmultilink = value;
    }
    if(value_path == "cvpdnSessionAttrMultilinkBundle")
    {
        cvpdnsessionattrmultilinkbundle = value;
    }
    if(value_path == "cvpdnSessionAttrMultilinkIfIndex")
    {
        cvpdnsessionattrmultilinkifindex = value;
    }
    if(value_path == "cvpdnSessionAttrPacketsIn")
    {
        cvpdnsessionattrpacketsin = value;
    }
    if(value_path == "cvpdnSessionAttrPacketsOut")
    {
        cvpdnsessionattrpacketsout = value;
    }
    if(value_path == "cvpdnSessionAttrRecvPktsDropped")
    {
        cvpdnsessionattrrecvpktsdropped = value;
    }
    if(value_path == "cvpdnSessionAttrSentPktsDropped")
    {
        cvpdnsessionattrsentpktsdropped = value;
    }
    if(value_path == "cvpdnSessionAttrState")
    {
        cvpdnsessionattrstate = value;
    }
    if(value_path == "cvpdnSessionAttrUserName")
    {
        cvpdnsessionattrusername = value;
    }
    if(value_path == "cvpdnSessionAttrVirtualCircuitID")
    {
        cvpdnsessionattrvirtualcircuitid = value;
    }
}

CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfotable()
{
    yang_name = "cvpdnUserToFailHistInfoTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB";
}

CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::~Cvpdnusertofailhistinfotable()
{
}

bool CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::has_data() const
{
    for (std::size_t index=0; index<cvpdnusertofailhistinfoentry.size(); index++)
    {
        if(cvpdnusertofailhistinfoentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnusertofailhistinfoentry.size(); index++)
    {
        if(cvpdnusertofailhistinfoentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnUserToFailHistInfoTable";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry>();
        c->parent = this;
        cvpdnusertofailhistinfoentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdnusertofailhistinfoentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::Cvpdnusertofailhistinfoentry()
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
    yang_name = "cvpdnUserToFailHistInfoEntry"; yang_parent_name = "cvpdnUserToFailHistInfoTable";
}

CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::~Cvpdnusertofailhistinfoentry()
{
}

bool CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::has_data() const
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

bool CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvpdnunametofailhistuname.operation)
	|| is_set(cvpdnunametofailhisttunnelid.operation)
	|| is_set(cvpdnunametofailhistcount.operation)
	|| is_set(cvpdnunametofailhistdestinetaddr.operation)
	|| is_set(cvpdnunametofailhistdestinettype.operation)
	|| is_set(cvpdnunametofailhistdestip.operation)
	|| is_set(cvpdnunametofailhistfailreason.operation)
	|| is_set(cvpdnunametofailhistfailtime.operation)
	|| is_set(cvpdnunametofailhistfailtype.operation)
	|| is_set(cvpdnunametofailhistlocalinitconn.operation)
	|| is_set(cvpdnunametofailhistlocalname.operation)
	|| is_set(cvpdnunametofailhistremotename.operation)
	|| is_set(cvpdnunametofailhistsourceinetaddr.operation)
	|| is_set(cvpdnunametofailhistsourceinettype.operation)
	|| is_set(cvpdnunametofailhistsourceip.operation)
	|| is_set(cvpdnunametofailhistuserid.operation);
}

std::string CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnUserToFailHistInfoEntry" <<"[cvpdnUnameToFailHistUname='" <<cvpdnunametofailhistuname <<"']" <<"[cvpdnUnameToFailHistTunnelId='" <<cvpdnunametofailhisttunnelid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnUserToFailHistInfoTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnunametofailhistuname.is_set || is_set(cvpdnunametofailhistuname.operation)) leaf_name_data.push_back(cvpdnunametofailhistuname.get_name_leafdata());
    if (cvpdnunametofailhisttunnelid.is_set || is_set(cvpdnunametofailhisttunnelid.operation)) leaf_name_data.push_back(cvpdnunametofailhisttunnelid.get_name_leafdata());
    if (cvpdnunametofailhistcount.is_set || is_set(cvpdnunametofailhistcount.operation)) leaf_name_data.push_back(cvpdnunametofailhistcount.get_name_leafdata());
    if (cvpdnunametofailhistdestinetaddr.is_set || is_set(cvpdnunametofailhistdestinetaddr.operation)) leaf_name_data.push_back(cvpdnunametofailhistdestinetaddr.get_name_leafdata());
    if (cvpdnunametofailhistdestinettype.is_set || is_set(cvpdnunametofailhistdestinettype.operation)) leaf_name_data.push_back(cvpdnunametofailhistdestinettype.get_name_leafdata());
    if (cvpdnunametofailhistdestip.is_set || is_set(cvpdnunametofailhistdestip.operation)) leaf_name_data.push_back(cvpdnunametofailhistdestip.get_name_leafdata());
    if (cvpdnunametofailhistfailreason.is_set || is_set(cvpdnunametofailhistfailreason.operation)) leaf_name_data.push_back(cvpdnunametofailhistfailreason.get_name_leafdata());
    if (cvpdnunametofailhistfailtime.is_set || is_set(cvpdnunametofailhistfailtime.operation)) leaf_name_data.push_back(cvpdnunametofailhistfailtime.get_name_leafdata());
    if (cvpdnunametofailhistfailtype.is_set || is_set(cvpdnunametofailhistfailtype.operation)) leaf_name_data.push_back(cvpdnunametofailhistfailtype.get_name_leafdata());
    if (cvpdnunametofailhistlocalinitconn.is_set || is_set(cvpdnunametofailhistlocalinitconn.operation)) leaf_name_data.push_back(cvpdnunametofailhistlocalinitconn.get_name_leafdata());
    if (cvpdnunametofailhistlocalname.is_set || is_set(cvpdnunametofailhistlocalname.operation)) leaf_name_data.push_back(cvpdnunametofailhistlocalname.get_name_leafdata());
    if (cvpdnunametofailhistremotename.is_set || is_set(cvpdnunametofailhistremotename.operation)) leaf_name_data.push_back(cvpdnunametofailhistremotename.get_name_leafdata());
    if (cvpdnunametofailhistsourceinetaddr.is_set || is_set(cvpdnunametofailhistsourceinetaddr.operation)) leaf_name_data.push_back(cvpdnunametofailhistsourceinetaddr.get_name_leafdata());
    if (cvpdnunametofailhistsourceinettype.is_set || is_set(cvpdnunametofailhistsourceinettype.operation)) leaf_name_data.push_back(cvpdnunametofailhistsourceinettype.get_name_leafdata());
    if (cvpdnunametofailhistsourceip.is_set || is_set(cvpdnunametofailhistsourceip.operation)) leaf_name_data.push_back(cvpdnunametofailhistsourceip.get_name_leafdata());
    if (cvpdnunametofailhistuserid.is_set || is_set(cvpdnunametofailhistuserid.operation)) leaf_name_data.push_back(cvpdnunametofailhistuserid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVpdnMgmtMib::Cvpdnusertofailhistinfotable::Cvpdnusertofailhistinfoentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvpdnUnameToFailHistUname")
    {
        cvpdnunametofailhistuname = value;
    }
    if(value_path == "cvpdnUnameToFailHistTunnelId")
    {
        cvpdnunametofailhisttunnelid = value;
    }
    if(value_path == "cvpdnUnameToFailHistCount")
    {
        cvpdnunametofailhistcount = value;
    }
    if(value_path == "cvpdnUnameToFailHistDestInetAddr")
    {
        cvpdnunametofailhistdestinetaddr = value;
    }
    if(value_path == "cvpdnUnameToFailHistDestInetType")
    {
        cvpdnunametofailhistdestinettype = value;
    }
    if(value_path == "cvpdnUnameToFailHistDestIp")
    {
        cvpdnunametofailhistdestip = value;
    }
    if(value_path == "cvpdnUnameToFailHistFailReason")
    {
        cvpdnunametofailhistfailreason = value;
    }
    if(value_path == "cvpdnUnameToFailHistFailTime")
    {
        cvpdnunametofailhistfailtime = value;
    }
    if(value_path == "cvpdnUnameToFailHistFailType")
    {
        cvpdnunametofailhistfailtype = value;
    }
    if(value_path == "cvpdnUnameToFailHistLocalInitConn")
    {
        cvpdnunametofailhistlocalinitconn = value;
    }
    if(value_path == "cvpdnUnameToFailHistLocalName")
    {
        cvpdnunametofailhistlocalname = value;
    }
    if(value_path == "cvpdnUnameToFailHistRemoteName")
    {
        cvpdnunametofailhistremotename = value;
    }
    if(value_path == "cvpdnUnameToFailHistSourceInetAddr")
    {
        cvpdnunametofailhistsourceinetaddr = value;
    }
    if(value_path == "cvpdnUnameToFailHistSourceInetType")
    {
        cvpdnunametofailhistsourceinettype = value;
    }
    if(value_path == "cvpdnUnameToFailHistSourceIp")
    {
        cvpdnunametofailhistsourceip = value;
    }
    if(value_path == "cvpdnUnameToFailHistUserId")
    {
        cvpdnunametofailhistuserid = value;
    }
}

CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplatetable()
{
    yang_name = "cvpdnTemplateTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB";
}

CiscoVpdnMgmtMib::Cvpdntemplatetable::~Cvpdntemplatetable()
{
}

bool CiscoVpdnMgmtMib::Cvpdntemplatetable::has_data() const
{
    for (std::size_t index=0; index<cvpdntemplateentry.size(); index++)
    {
        if(cvpdntemplateentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVpdnMgmtMib::Cvpdntemplatetable::has_operation() const
{
    for (std::size_t index=0; index<cvpdntemplateentry.size(); index++)
    {
        if(cvpdntemplateentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVpdnMgmtMib::Cvpdntemplatetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTemplateTable";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdntemplatetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdntemplatetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry>();
        c->parent = this;
        cvpdntemplateentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdntemplatetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdntemplateentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVpdnMgmtMib::Cvpdntemplatetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry::Cvpdntemplateentry()
    :
    cvpdntemplatename{YType::str, "cvpdnTemplateName"},
    cvpdntemplateactivesessions{YType::uint32, "cvpdnTemplateActiveSessions"}
{
    yang_name = "cvpdnTemplateEntry"; yang_parent_name = "cvpdnTemplateTable";
}

CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry::~Cvpdntemplateentry()
{
}

bool CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry::has_data() const
{
    return cvpdntemplatename.is_set
	|| cvpdntemplateactivesessions.is_set;
}

bool CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvpdntemplatename.operation)
	|| is_set(cvpdntemplateactivesessions.operation);
}

std::string CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnTemplateEntry" <<"[cvpdnTemplateName='" <<cvpdntemplatename <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnTemplateTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdntemplatename.is_set || is_set(cvpdntemplatename.operation)) leaf_name_data.push_back(cvpdntemplatename.get_name_leafdata());
    if (cvpdntemplateactivesessions.is_set || is_set(cvpdntemplateactivesessions.operation)) leaf_name_data.push_back(cvpdntemplateactivesessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVpdnMgmtMib::Cvpdntemplatetable::Cvpdntemplateentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvpdnTemplateName")
    {
        cvpdntemplatename = value;
    }
    if(value_path == "cvpdnTemplateActiveSessions")
    {
        cvpdntemplateactivesessions = value;
    }
}

CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundletable()
{
    yang_name = "cvpdnBundleTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB";
}

CiscoVpdnMgmtMib::Cvpdnbundletable::~Cvpdnbundletable()
{
}

bool CiscoVpdnMgmtMib::Cvpdnbundletable::has_data() const
{
    for (std::size_t index=0; index<cvpdnbundleentry.size(); index++)
    {
        if(cvpdnbundleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVpdnMgmtMib::Cvpdnbundletable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnbundleentry.size(); index++)
    {
        if(cvpdnbundleentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVpdnMgmtMib::Cvpdnbundletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnBundleTable";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdnbundletable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdnbundletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry>();
        c->parent = this;
        cvpdnbundleentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdnbundletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdnbundleentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVpdnMgmtMib::Cvpdnbundletable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::Cvpdnbundleentry()
    :
    cvpdnbundlename{YType::str, "cvpdnBundleName"},
    cvpdnbundleendpoint{YType::str, "cvpdnBundleEndpoint"},
    cvpdnbundleendpointclass{YType::enumeration, "cvpdnBundleEndpointClass"},
    cvpdnbundleendpointtype{YType::enumeration, "cvpdnBundleEndpointType"},
    cvpdnbundlelinkcount{YType::uint32, "cvpdnBundleLinkCount"},
    cvpdnbundlepeeripaddr{YType::str, "cvpdnBundlePeerIpAddr"},
    cvpdnbundlepeeripaddrtype{YType::enumeration, "cvpdnBundlePeerIpAddrType"}
{
    yang_name = "cvpdnBundleEntry"; yang_parent_name = "cvpdnBundleTable";
}

CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::~Cvpdnbundleentry()
{
}

bool CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::has_data() const
{
    return cvpdnbundlename.is_set
	|| cvpdnbundleendpoint.is_set
	|| cvpdnbundleendpointclass.is_set
	|| cvpdnbundleendpointtype.is_set
	|| cvpdnbundlelinkcount.is_set
	|| cvpdnbundlepeeripaddr.is_set
	|| cvpdnbundlepeeripaddrtype.is_set;
}

bool CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvpdnbundlename.operation)
	|| is_set(cvpdnbundleendpoint.operation)
	|| is_set(cvpdnbundleendpointclass.operation)
	|| is_set(cvpdnbundleendpointtype.operation)
	|| is_set(cvpdnbundlelinkcount.operation)
	|| is_set(cvpdnbundlepeeripaddr.operation)
	|| is_set(cvpdnbundlepeeripaddrtype.operation);
}

std::string CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnBundleEntry" <<"[cvpdnBundleName='" <<cvpdnbundlename <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnBundleTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnbundlename.is_set || is_set(cvpdnbundlename.operation)) leaf_name_data.push_back(cvpdnbundlename.get_name_leafdata());
    if (cvpdnbundleendpoint.is_set || is_set(cvpdnbundleendpoint.operation)) leaf_name_data.push_back(cvpdnbundleendpoint.get_name_leafdata());
    if (cvpdnbundleendpointclass.is_set || is_set(cvpdnbundleendpointclass.operation)) leaf_name_data.push_back(cvpdnbundleendpointclass.get_name_leafdata());
    if (cvpdnbundleendpointtype.is_set || is_set(cvpdnbundleendpointtype.operation)) leaf_name_data.push_back(cvpdnbundleendpointtype.get_name_leafdata());
    if (cvpdnbundlelinkcount.is_set || is_set(cvpdnbundlelinkcount.operation)) leaf_name_data.push_back(cvpdnbundlelinkcount.get_name_leafdata());
    if (cvpdnbundlepeeripaddr.is_set || is_set(cvpdnbundlepeeripaddr.operation)) leaf_name_data.push_back(cvpdnbundlepeeripaddr.get_name_leafdata());
    if (cvpdnbundlepeeripaddrtype.is_set || is_set(cvpdnbundlepeeripaddrtype.operation)) leaf_name_data.push_back(cvpdnbundlepeeripaddrtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvpdnBundleName")
    {
        cvpdnbundlename = value;
    }
    if(value_path == "cvpdnBundleEndpoint")
    {
        cvpdnbundleendpoint = value;
    }
    if(value_path == "cvpdnBundleEndpointClass")
    {
        cvpdnbundleendpointclass = value;
    }
    if(value_path == "cvpdnBundleEndpointType")
    {
        cvpdnbundleendpointtype = value;
    }
    if(value_path == "cvpdnBundleLinkCount")
    {
        cvpdnbundlelinkcount = value;
    }
    if(value_path == "cvpdnBundlePeerIpAddr")
    {
        cvpdnbundlepeeripaddr = value;
    }
    if(value_path == "cvpdnBundlePeerIpAddrType")
    {
        cvpdnbundlepeeripaddrtype = value;
    }
}

CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildtable()
{
    yang_name = "cvpdnBundleChildTable"; yang_parent_name = "CISCO-VPDN-MGMT-MIB";
}

CiscoVpdnMgmtMib::Cvpdnbundlechildtable::~Cvpdnbundlechildtable()
{
}

bool CiscoVpdnMgmtMib::Cvpdnbundlechildtable::has_data() const
{
    for (std::size_t index=0; index<cvpdnbundlechildentry.size(); index++)
    {
        if(cvpdnbundlechildentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVpdnMgmtMib::Cvpdnbundlechildtable::has_operation() const
{
    for (std::size_t index=0; index<cvpdnbundlechildentry.size(); index++)
    {
        if(cvpdnbundlechildentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoVpdnMgmtMib::Cvpdnbundlechildtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnBundleChildTable";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdnbundlechildtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdnbundlechildtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry>();
        c->parent = this;
        cvpdnbundlechildentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdnbundlechildtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvpdnbundlechildentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVpdnMgmtMib::Cvpdnbundlechildtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry::Cvpdnbundlechildentry()
    :
    cvpdnbundlename{YType::str, "cvpdnBundleName"},
    cvpdnbundlechildtunneltype{YType::enumeration, "cvpdnBundleChildTunnelType"},
    cvpdnbundlechildtunnelid{YType::uint32, "cvpdnBundleChildTunnelId"},
    cvpdnbundlechildsessionid{YType::uint32, "cvpdnBundleChildSessionId"}
{
    yang_name = "cvpdnBundleChildEntry"; yang_parent_name = "cvpdnBundleChildTable";
}

CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry::~Cvpdnbundlechildentry()
{
}

bool CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry::has_data() const
{
    return cvpdnbundlename.is_set
	|| cvpdnbundlechildtunneltype.is_set
	|| cvpdnbundlechildtunnelid.is_set
	|| cvpdnbundlechildsessionid.is_set;
}

bool CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cvpdnbundlename.operation)
	|| is_set(cvpdnbundlechildtunneltype.operation)
	|| is_set(cvpdnbundlechildtunnelid.operation)
	|| is_set(cvpdnbundlechildsessionid.operation);
}

std::string CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvpdnBundleChildEntry" <<"[cvpdnBundleName='" <<cvpdnbundlename <<"']" <<"[cvpdnBundleChildTunnelType='" <<cvpdnbundlechildtunneltype <<"']" <<"[cvpdnBundleChildTunnelId='" <<cvpdnbundlechildtunnelid <<"']" <<"[cvpdnBundleChildSessionId='" <<cvpdnbundlechildsessionid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VPDN-MGMT-MIB:CISCO-VPDN-MGMT-MIB/cvpdnBundleChildTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cvpdnbundlename.is_set || is_set(cvpdnbundlename.operation)) leaf_name_data.push_back(cvpdnbundlename.get_name_leafdata());
    if (cvpdnbundlechildtunneltype.is_set || is_set(cvpdnbundlechildtunneltype.operation)) leaf_name_data.push_back(cvpdnbundlechildtunneltype.get_name_leafdata());
    if (cvpdnbundlechildtunnelid.is_set || is_set(cvpdnbundlechildtunnelid.operation)) leaf_name_data.push_back(cvpdnbundlechildtunnelid.get_name_leafdata());
    if (cvpdnbundlechildsessionid.is_set || is_set(cvpdnbundlechildsessionid.operation)) leaf_name_data.push_back(cvpdnbundlechildsessionid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVpdnMgmtMib::Cvpdnbundlechildtable::Cvpdnbundlechildentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cvpdnBundleName")
    {
        cvpdnbundlename = value;
    }
    if(value_path == "cvpdnBundleChildTunnelType")
    {
        cvpdnbundlechildtunneltype = value;
    }
    if(value_path == "cvpdnBundleChildTunnelId")
    {
        cvpdnbundlechildtunnelid = value;
    }
    if(value_path == "cvpdnBundleChildSessionId")
    {
        cvpdnbundlechildsessionid = value;
    }
}

const Enum::YLeaf EndpointclassEnum::none {1, "none"};
const Enum::YLeaf EndpointclassEnum::local {2, "local"};
const Enum::YLeaf EndpointclassEnum::ipV4Address {3, "ipV4Address"};
const Enum::YLeaf EndpointclassEnum::macAddress {4, "macAddress"};
const Enum::YLeaf EndpointclassEnum::magicNumber {5, "magicNumber"};
const Enum::YLeaf EndpointclassEnum::phone {6, "phone"};

const Enum::YLeaf TunneltypeEnum::l2f {1, "l2f"};
const Enum::YLeaf TunneltypeEnum::l2tp {2, "l2tp"};
const Enum::YLeaf TunneltypeEnum::pptp {3, "pptp"};

const Enum::YLeaf CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::CvpdnnotifsessioneventEnum::up {1, "up"};
const Enum::YLeaf CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::CvpdnnotifsessioneventEnum::down {2, "down"};
const Enum::YLeaf CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::CvpdnnotifsessioneventEnum::pwUp {3, "pwUp"};
const Enum::YLeaf CiscoVpdnMgmtMib::Ciscovpdnmgmtmibnotifs::CvpdnnotifsessioneventEnum::pwDown {4, "pwDown"};

const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsysteminfo::CvpdnsystemclearsessionsEnum::none {1, "none"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsysteminfo::CvpdnsystemclearsessionsEnum::all {2, "all"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsysteminfo::CvpdnsystemclearsessionsEnum::l2f {3, "l2f"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsysteminfo::CvpdnsystemclearsessionsEnum::l2tp {4, "l2tp"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsysteminfo::CvpdnsystemclearsessionsEnum::pptp {5, "pptp"};

const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::CvpdntunnelorigcauseEnum::domain {1, "domain"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::CvpdntunnelorigcauseEnum::dnis {2, "dnis"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::CvpdntunnelorigcauseEnum::stack {3, "stack"};

const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::CvpdntunnelstateEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::CvpdntunnelstateEnum::opening {2, "opening"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::CvpdntunnelstateEnum::open {3, "open"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::CvpdntunnelstateEnum::closing {4, "closing"};

const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunneltable::Cvpdntunnelentry::CvpdntunnelnetworkservicetypeEnum::ip {1, "ip"};

const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrorigcauseEnum::domain {1, "domain"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrorigcauseEnum::dnis {2, "dnis"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrorigcauseEnum::stack {3, "stack"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrorigcauseEnum::xconnect {4, "xconnect"};

const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::l2fOpening {2, "l2fOpening"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::l2fOpenWait {3, "l2fOpenWait"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::l2fOpen {4, "l2fOpen"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::l2fClosing {5, "l2fClosing"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::l2fCloseWait {6, "l2fCloseWait"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::l2tpIdle {7, "l2tpIdle"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::l2tpWaitCtlReply {8, "l2tpWaitCtlReply"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::l2tpEstablished {9, "l2tpEstablished"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::l2tpShuttingDown {10, "l2tpShuttingDown"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::l2tpNoSessionLeft {11, "l2tpNoSessionLeft"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::pptpIdle {12, "pptpIdle"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::pptpWaitConnect {13, "pptpWaitConnect"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::pptpWaitCtlRequest {14, "pptpWaitCtlRequest"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::pptpWaitCtlReply {15, "pptpWaitCtlReply"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::pptpEstablished {16, "pptpEstablished"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::pptpWaitStopReply {17, "pptpWaitStopReply"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrstateEnum::pptpTerminal {18, "pptpTerminal"};

const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelattrtable::Cvpdntunnelattrentry::CvpdntunnelattrnetworkservicetypeEnum::ip {1, "ip"};

const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessionstateEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessionstateEnum::opening {2, "opening"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessionstateEnum::open {3, "open"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessionstateEnum::closing {4, "closing"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessionstateEnum::waitingForTunnel {5, "waitingForTunnel"};

const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessiondevicetypeEnum::other {1, "other"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessiondevicetypeEnum::asyncInternalModem {2, "asyncInternalModem"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessiondevicetypeEnum::async {3, "async"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessiondevicetypeEnum::bchan {4, "bchan"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessiondevicetypeEnum::sync {5, "sync"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessiondevicetypeEnum::virtualAccess {6, "virtualAccess"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessiondevicetypeEnum::xdsl {7, "xdsl"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdntunnelsessiontable::Cvpdntunnelsessionentry::CvpdntunnelsessiondevicetypeEnum::cable {8, "cable"};

const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::l2fOpening {2, "l2fOpening"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::l2fOpen {3, "l2fOpen"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::l2fCloseWait {4, "l2fCloseWait"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::l2fWaitingForTunnel {5, "l2fWaitingForTunnel"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::l2tpIdle {6, "l2tpIdle"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::l2tpWaitingTunnel {7, "l2tpWaitingTunnel"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::l2tpWaitReply {8, "l2tpWaitReply"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::l2tpWaitConnect {9, "l2tpWaitConnect"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::l2tpEstablished {10, "l2tpEstablished"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::l2tpShuttingDown {11, "l2tpShuttingDown"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::pptpWaitVAccess {12, "pptpWaitVAccess"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::pptpPacEstablished {13, "pptpPacEstablished"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::pptpWaitTunnel {14, "pptpWaitTunnel"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::pptpWaitOCRP {15, "pptpWaitOCRP"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::pptpPnsEstablished {16, "pptpPnsEstablished"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::pptpWaitCallDisc {17, "pptpWaitCallDisc"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrstateEnum::pptpTerminal {18, "pptpTerminal"};

const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrdevicetypeEnum::other {1, "other"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrdevicetypeEnum::asyncInternalModem {2, "asyncInternalModem"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrdevicetypeEnum::async {3, "async"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrdevicetypeEnum::bchan {4, "bchan"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrdevicetypeEnum::sync {5, "sync"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrdevicetypeEnum::virtualAccess {6, "virtualAccess"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrdevicetypeEnum::xdsl {7, "xdsl"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnsessionattrtable::Cvpdnsessionattrentry::CvpdnsessionattrdevicetypeEnum::cable {8, "cable"};

const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::CvpdnbundleendpointtypeEnum::none {1, "none"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::CvpdnbundleendpointtypeEnum::hostname {2, "hostname"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::CvpdnbundleendpointtypeEnum::string {3, "string"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::CvpdnbundleendpointtypeEnum::macAddress {4, "macAddress"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::CvpdnbundleendpointtypeEnum::ipV4Address {5, "ipV4Address"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::CvpdnbundleendpointtypeEnum::ipV6Address {6, "ipV6Address"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::CvpdnbundleendpointtypeEnum::phone {7, "phone"};
const Enum::YLeaf CiscoVpdnMgmtMib::Cvpdnbundletable::Cvpdnbundleentry::CvpdnbundleendpointtypeEnum::magicNumber {8, "magicNumber"};


}
}

