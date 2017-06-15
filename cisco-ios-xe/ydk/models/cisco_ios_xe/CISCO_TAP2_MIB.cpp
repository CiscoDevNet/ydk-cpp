
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_TAP2_MIB.hpp"

namespace ydk {
namespace CISCO_TAP2_MIB {

CiscoTap2Mib::CiscoTap2Mib()
    :
    ctap2debuggroup_(std::make_shared<CiscoTap2Mib::Ctap2Debuggroup>())
	,ctap2debugtable_(std::make_shared<CiscoTap2Mib::Ctap2Debugtable>())
	,ctap2debugusertable_(std::make_shared<CiscoTap2Mib::Ctap2Debugusertable>())
	,ctap2mediationgroup_(std::make_shared<CiscoTap2Mib::Ctap2Mediationgroup>())
	,ctap2mediationtable_(std::make_shared<CiscoTap2Mib::Ctap2Mediationtable>())
	,ctap2streamtable_(std::make_shared<CiscoTap2Mib::Ctap2Streamtable>())
{
    ctap2debuggroup_->parent = this;

    ctap2debugtable_->parent = this;

    ctap2debugusertable_->parent = this;

    ctap2mediationgroup_->parent = this;

    ctap2mediationtable_->parent = this;

    ctap2streamtable_->parent = this;

    yang_name = "CISCO-TAP2-MIB"; yang_parent_name = "CISCO-TAP2-MIB";
}

CiscoTap2Mib::~CiscoTap2Mib()
{
}

bool CiscoTap2Mib::has_data() const
{
    return (ctap2debuggroup_ !=  nullptr && ctap2debuggroup_->has_data())
	|| (ctap2debugtable_ !=  nullptr && ctap2debugtable_->has_data())
	|| (ctap2debugusertable_ !=  nullptr && ctap2debugusertable_->has_data())
	|| (ctap2mediationgroup_ !=  nullptr && ctap2mediationgroup_->has_data())
	|| (ctap2mediationtable_ !=  nullptr && ctap2mediationtable_->has_data())
	|| (ctap2streamtable_ !=  nullptr && ctap2streamtable_->has_data());
}

bool CiscoTap2Mib::has_operation() const
{
    return is_set(operation)
	|| (ctap2debuggroup_ !=  nullptr && ctap2debuggroup_->has_operation())
	|| (ctap2debugtable_ !=  nullptr && ctap2debugtable_->has_operation())
	|| (ctap2debugusertable_ !=  nullptr && ctap2debugusertable_->has_operation())
	|| (ctap2mediationgroup_ !=  nullptr && ctap2mediationgroup_->has_operation())
	|| (ctap2mediationtable_ !=  nullptr && ctap2mediationtable_->has_operation())
	|| (ctap2streamtable_ !=  nullptr && ctap2streamtable_->has_operation());
}

std::string CiscoTap2Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB";

    return path_buffer.str();

}

const EntityPath CiscoTap2Mib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoTap2Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cTap2DebugGroup")
    {
        if(ctap2debuggroup_ == nullptr)
        {
            ctap2debuggroup_ = std::make_shared<CiscoTap2Mib::Ctap2Debuggroup>();
        }
        return ctap2debuggroup_;
    }

    if(child_yang_name == "cTap2DebugTable")
    {
        if(ctap2debugtable_ == nullptr)
        {
            ctap2debugtable_ = std::make_shared<CiscoTap2Mib::Ctap2Debugtable>();
        }
        return ctap2debugtable_;
    }

    if(child_yang_name == "cTap2DebugUserTable")
    {
        if(ctap2debugusertable_ == nullptr)
        {
            ctap2debugusertable_ = std::make_shared<CiscoTap2Mib::Ctap2Debugusertable>();
        }
        return ctap2debugusertable_;
    }

    if(child_yang_name == "cTap2MediationGroup")
    {
        if(ctap2mediationgroup_ == nullptr)
        {
            ctap2mediationgroup_ = std::make_shared<CiscoTap2Mib::Ctap2Mediationgroup>();
        }
        return ctap2mediationgroup_;
    }

    if(child_yang_name == "cTap2MediationTable")
    {
        if(ctap2mediationtable_ == nullptr)
        {
            ctap2mediationtable_ = std::make_shared<CiscoTap2Mib::Ctap2Mediationtable>();
        }
        return ctap2mediationtable_;
    }

    if(child_yang_name == "cTap2StreamTable")
    {
        if(ctap2streamtable_ == nullptr)
        {
            ctap2streamtable_ = std::make_shared<CiscoTap2Mib::Ctap2Streamtable>();
        }
        return ctap2streamtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoTap2Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ctap2debuggroup_ != nullptr)
    {
        children["cTap2DebugGroup"] = ctap2debuggroup_;
    }

    if(ctap2debugtable_ != nullptr)
    {
        children["cTap2DebugTable"] = ctap2debugtable_;
    }

    if(ctap2debugusertable_ != nullptr)
    {
        children["cTap2DebugUserTable"] = ctap2debugusertable_;
    }

    if(ctap2mediationgroup_ != nullptr)
    {
        children["cTap2MediationGroup"] = ctap2mediationgroup_;
    }

    if(ctap2mediationtable_ != nullptr)
    {
        children["cTap2MediationTable"] = ctap2mediationtable_;
    }

    if(ctap2streamtable_ != nullptr)
    {
        children["cTap2StreamTable"] = ctap2streamtable_;
    }

    return children;
}

void CiscoTap2Mib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoTap2Mib::clone_ptr() const
{
    return std::make_shared<CiscoTap2Mib>();
}

std::string CiscoTap2Mib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoTap2Mib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoTap2Mib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoTap2Mib::Ctap2Mediationgroup::Ctap2Mediationgroup()
    :
    ctap2mediationcapabilities{YType::bits, "cTap2MediationCapabilities"},
    ctap2mediationnewindex{YType::int32, "cTap2MediationNewIndex"}
{
    yang_name = "cTap2MediationGroup"; yang_parent_name = "CISCO-TAP2-MIB";
}

CiscoTap2Mib::Ctap2Mediationgroup::~Ctap2Mediationgroup()
{
}

bool CiscoTap2Mib::Ctap2Mediationgroup::has_data() const
{
    return ctap2mediationcapabilities.is_set
	|| ctap2mediationnewindex.is_set;
}

bool CiscoTap2Mib::Ctap2Mediationgroup::has_operation() const
{
    return is_set(operation)
	|| is_set(ctap2mediationcapabilities.operation)
	|| is_set(ctap2mediationnewindex.operation);
}

std::string CiscoTap2Mib::Ctap2Mediationgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2MediationGroup";

    return path_buffer.str();

}

const EntityPath CiscoTap2Mib::Ctap2Mediationgroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctap2mediationcapabilities.is_set || is_set(ctap2mediationcapabilities.operation)) leaf_name_data.push_back(ctap2mediationcapabilities.get_name_leafdata());
    if (ctap2mediationnewindex.is_set || is_set(ctap2mediationnewindex.operation)) leaf_name_data.push_back(ctap2mediationnewindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoTap2Mib::Ctap2Mediationgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoTap2Mib::Ctap2Mediationgroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoTap2Mib::Ctap2Mediationgroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cTap2MediationCapabilities")
    {
        ctap2mediationcapabilities[value] = true;
    }
    if(value_path == "cTap2MediationNewIndex")
    {
        ctap2mediationnewindex = value;
    }
}

CiscoTap2Mib::Ctap2Debuggroup::Ctap2Debuggroup()
    :
    ctap2debugage{YType::int32, "cTap2DebugAge"},
    ctap2debugmaxentries{YType::int32, "cTap2DebugMaxEntries"}
{
    yang_name = "cTap2DebugGroup"; yang_parent_name = "CISCO-TAP2-MIB";
}

CiscoTap2Mib::Ctap2Debuggroup::~Ctap2Debuggroup()
{
}

bool CiscoTap2Mib::Ctap2Debuggroup::has_data() const
{
    return ctap2debugage.is_set
	|| ctap2debugmaxentries.is_set;
}

bool CiscoTap2Mib::Ctap2Debuggroup::has_operation() const
{
    return is_set(operation)
	|| is_set(ctap2debugage.operation)
	|| is_set(ctap2debugmaxentries.operation);
}

std::string CiscoTap2Mib::Ctap2Debuggroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2DebugGroup";

    return path_buffer.str();

}

const EntityPath CiscoTap2Mib::Ctap2Debuggroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctap2debugage.is_set || is_set(ctap2debugage.operation)) leaf_name_data.push_back(ctap2debugage.get_name_leafdata());
    if (ctap2debugmaxentries.is_set || is_set(ctap2debugmaxentries.operation)) leaf_name_data.push_back(ctap2debugmaxentries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoTap2Mib::Ctap2Debuggroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoTap2Mib::Ctap2Debuggroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoTap2Mib::Ctap2Debuggroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cTap2DebugAge")
    {
        ctap2debugage = value;
    }
    if(value_path == "cTap2DebugMaxEntries")
    {
        ctap2debugmaxentries = value;
    }
}

CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationtable()
{
    yang_name = "cTap2MediationTable"; yang_parent_name = "CISCO-TAP2-MIB";
}

CiscoTap2Mib::Ctap2Mediationtable::~Ctap2Mediationtable()
{
}

bool CiscoTap2Mib::Ctap2Mediationtable::has_data() const
{
    for (std::size_t index=0; index<ctap2mediationentry_.size(); index++)
    {
        if(ctap2mediationentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoTap2Mib::Ctap2Mediationtable::has_operation() const
{
    for (std::size_t index=0; index<ctap2mediationentry_.size(); index++)
    {
        if(ctap2mediationentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoTap2Mib::Ctap2Mediationtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2MediationTable";

    return path_buffer.str();

}

const EntityPath CiscoTap2Mib::Ctap2Mediationtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoTap2Mib::Ctap2Mediationtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cTap2MediationEntry")
    {
        for(auto const & c : ctap2mediationentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry>();
        c->parent = this;
        ctap2mediationentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoTap2Mib::Ctap2Mediationtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ctap2mediationentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoTap2Mib::Ctap2Mediationtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::Ctap2Mediationentry()
    :
    ctap2mediationcontentid{YType::int32, "cTap2MediationContentId"},
    ctap2mediationdatatype{YType::int32, "cTap2MediationDataType"},
    ctap2mediationdestaddress{YType::str, "cTap2MediationDestAddress"},
    ctap2mediationdestaddresstype{YType::enumeration, "cTap2MediationDestAddressType"},
    ctap2mediationdestport{YType::uint16, "cTap2MediationDestPort"},
    ctap2mediationdscp{YType::int32, "cTap2MediationDscp"},
    ctap2mediationnotificationenable{YType::boolean, "cTap2MediationNotificationEnable"},
    ctap2mediationradiuskey{YType::str, "cTap2MediationRadiusKey"},
    ctap2mediationretransmittype{YType::int32, "cTap2MediationRetransmitType"},
    ctap2mediationrtcpport{YType::uint16, "cTap2MediationRtcpPort"},
    ctap2mediationsrcinterface{YType::int32, "cTap2MediationSrcInterface"},
    ctap2mediationstatus{YType::enumeration, "cTap2MediationStatus"},
    ctap2mediationtimeout{YType::str, "cTap2MediationTimeout"},
    ctap2mediationtransport{YType::enumeration, "cTap2MediationTransport"}
{
    yang_name = "cTap2MediationEntry"; yang_parent_name = "cTap2MediationTable";
}

CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::~Ctap2Mediationentry()
{
}

bool CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::has_data() const
{
    return ctap2mediationcontentid.is_set
	|| ctap2mediationdatatype.is_set
	|| ctap2mediationdestaddress.is_set
	|| ctap2mediationdestaddresstype.is_set
	|| ctap2mediationdestport.is_set
	|| ctap2mediationdscp.is_set
	|| ctap2mediationnotificationenable.is_set
	|| ctap2mediationradiuskey.is_set
	|| ctap2mediationretransmittype.is_set
	|| ctap2mediationrtcpport.is_set
	|| ctap2mediationsrcinterface.is_set
	|| ctap2mediationstatus.is_set
	|| ctap2mediationtimeout.is_set
	|| ctap2mediationtransport.is_set;
}

bool CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ctap2mediationcontentid.operation)
	|| is_set(ctap2mediationdatatype.operation)
	|| is_set(ctap2mediationdestaddress.operation)
	|| is_set(ctap2mediationdestaddresstype.operation)
	|| is_set(ctap2mediationdestport.operation)
	|| is_set(ctap2mediationdscp.operation)
	|| is_set(ctap2mediationnotificationenable.operation)
	|| is_set(ctap2mediationradiuskey.operation)
	|| is_set(ctap2mediationretransmittype.operation)
	|| is_set(ctap2mediationrtcpport.operation)
	|| is_set(ctap2mediationsrcinterface.operation)
	|| is_set(ctap2mediationstatus.operation)
	|| is_set(ctap2mediationtimeout.operation)
	|| is_set(ctap2mediationtransport.operation);
}

std::string CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2MediationEntry" <<"[cTap2MediationContentId='" <<ctap2mediationcontentid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/cTap2MediationTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctap2mediationcontentid.is_set || is_set(ctap2mediationcontentid.operation)) leaf_name_data.push_back(ctap2mediationcontentid.get_name_leafdata());
    if (ctap2mediationdatatype.is_set || is_set(ctap2mediationdatatype.operation)) leaf_name_data.push_back(ctap2mediationdatatype.get_name_leafdata());
    if (ctap2mediationdestaddress.is_set || is_set(ctap2mediationdestaddress.operation)) leaf_name_data.push_back(ctap2mediationdestaddress.get_name_leafdata());
    if (ctap2mediationdestaddresstype.is_set || is_set(ctap2mediationdestaddresstype.operation)) leaf_name_data.push_back(ctap2mediationdestaddresstype.get_name_leafdata());
    if (ctap2mediationdestport.is_set || is_set(ctap2mediationdestport.operation)) leaf_name_data.push_back(ctap2mediationdestport.get_name_leafdata());
    if (ctap2mediationdscp.is_set || is_set(ctap2mediationdscp.operation)) leaf_name_data.push_back(ctap2mediationdscp.get_name_leafdata());
    if (ctap2mediationnotificationenable.is_set || is_set(ctap2mediationnotificationenable.operation)) leaf_name_data.push_back(ctap2mediationnotificationenable.get_name_leafdata());
    if (ctap2mediationradiuskey.is_set || is_set(ctap2mediationradiuskey.operation)) leaf_name_data.push_back(ctap2mediationradiuskey.get_name_leafdata());
    if (ctap2mediationretransmittype.is_set || is_set(ctap2mediationretransmittype.operation)) leaf_name_data.push_back(ctap2mediationretransmittype.get_name_leafdata());
    if (ctap2mediationrtcpport.is_set || is_set(ctap2mediationrtcpport.operation)) leaf_name_data.push_back(ctap2mediationrtcpport.get_name_leafdata());
    if (ctap2mediationsrcinterface.is_set || is_set(ctap2mediationsrcinterface.operation)) leaf_name_data.push_back(ctap2mediationsrcinterface.get_name_leafdata());
    if (ctap2mediationstatus.is_set || is_set(ctap2mediationstatus.operation)) leaf_name_data.push_back(ctap2mediationstatus.get_name_leafdata());
    if (ctap2mediationtimeout.is_set || is_set(ctap2mediationtimeout.operation)) leaf_name_data.push_back(ctap2mediationtimeout.get_name_leafdata());
    if (ctap2mediationtransport.is_set || is_set(ctap2mediationtransport.operation)) leaf_name_data.push_back(ctap2mediationtransport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cTap2MediationContentId")
    {
        ctap2mediationcontentid = value;
    }
    if(value_path == "cTap2MediationDataType")
    {
        ctap2mediationdatatype = value;
    }
    if(value_path == "cTap2MediationDestAddress")
    {
        ctap2mediationdestaddress = value;
    }
    if(value_path == "cTap2MediationDestAddressType")
    {
        ctap2mediationdestaddresstype = value;
    }
    if(value_path == "cTap2MediationDestPort")
    {
        ctap2mediationdestport = value;
    }
    if(value_path == "cTap2MediationDscp")
    {
        ctap2mediationdscp = value;
    }
    if(value_path == "cTap2MediationNotificationEnable")
    {
        ctap2mediationnotificationenable = value;
    }
    if(value_path == "cTap2MediationRadiusKey")
    {
        ctap2mediationradiuskey = value;
    }
    if(value_path == "cTap2MediationRetransmitType")
    {
        ctap2mediationretransmittype = value;
    }
    if(value_path == "cTap2MediationRtcpPort")
    {
        ctap2mediationrtcpport = value;
    }
    if(value_path == "cTap2MediationSrcInterface")
    {
        ctap2mediationsrcinterface = value;
    }
    if(value_path == "cTap2MediationStatus")
    {
        ctap2mediationstatus = value;
    }
    if(value_path == "cTap2MediationTimeout")
    {
        ctap2mediationtimeout = value;
    }
    if(value_path == "cTap2MediationTransport")
    {
        ctap2mediationtransport = value;
    }
}

CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamtable()
{
    yang_name = "cTap2StreamTable"; yang_parent_name = "CISCO-TAP2-MIB";
}

CiscoTap2Mib::Ctap2Streamtable::~Ctap2Streamtable()
{
}

bool CiscoTap2Mib::Ctap2Streamtable::has_data() const
{
    for (std::size_t index=0; index<ctap2streamentry_.size(); index++)
    {
        if(ctap2streamentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoTap2Mib::Ctap2Streamtable::has_operation() const
{
    for (std::size_t index=0; index<ctap2streamentry_.size(); index++)
    {
        if(ctap2streamentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoTap2Mib::Ctap2Streamtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2StreamTable";

    return path_buffer.str();

}

const EntityPath CiscoTap2Mib::Ctap2Streamtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoTap2Mib::Ctap2Streamtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cTap2StreamEntry")
    {
        for(auto const & c : ctap2streamentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry>();
        c->parent = this;
        ctap2streamentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoTap2Mib::Ctap2Streamtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ctap2streamentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoTap2Mib::Ctap2Streamtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::Ctap2Streamentry()
    :
    ctap2mediationcontentid{YType::str, "cTap2MediationContentId"},
    ctap2streamindex{YType::int32, "cTap2StreamIndex"},
    ctap2streaminterceptdrops{YType::uint32, "cTap2StreamInterceptDrops"},
    ctap2streaminterceptedhcpackets{YType::uint64, "cTap2StreamInterceptedHCPackets"},
    ctap2streaminterceptedpackets{YType::uint32, "cTap2StreamInterceptedPackets"},
    ctap2streaminterceptenable{YType::boolean, "cTap2StreamInterceptEnable"},
    ctap2streamintercepthcdrops{YType::uint64, "cTap2StreamInterceptHCDrops"},
    ctap2streamstatus{YType::enumeration, "cTap2StreamStatus"},
    ctap2streamtype{YType::enumeration, "cTap2StreamType"}
{
    yang_name = "cTap2StreamEntry"; yang_parent_name = "cTap2StreamTable";
}

CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::~Ctap2Streamentry()
{
}

bool CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::has_data() const
{
    return ctap2mediationcontentid.is_set
	|| ctap2streamindex.is_set
	|| ctap2streaminterceptdrops.is_set
	|| ctap2streaminterceptedhcpackets.is_set
	|| ctap2streaminterceptedpackets.is_set
	|| ctap2streaminterceptenable.is_set
	|| ctap2streamintercepthcdrops.is_set
	|| ctap2streamstatus.is_set
	|| ctap2streamtype.is_set;
}

bool CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ctap2mediationcontentid.operation)
	|| is_set(ctap2streamindex.operation)
	|| is_set(ctap2streaminterceptdrops.operation)
	|| is_set(ctap2streaminterceptedhcpackets.operation)
	|| is_set(ctap2streaminterceptedpackets.operation)
	|| is_set(ctap2streaminterceptenable.operation)
	|| is_set(ctap2streamintercepthcdrops.operation)
	|| is_set(ctap2streamstatus.operation)
	|| is_set(ctap2streamtype.operation);
}

std::string CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2StreamEntry" <<"[cTap2MediationContentId='" <<ctap2mediationcontentid <<"']" <<"[cTap2StreamIndex='" <<ctap2streamindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/cTap2StreamTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctap2mediationcontentid.is_set || is_set(ctap2mediationcontentid.operation)) leaf_name_data.push_back(ctap2mediationcontentid.get_name_leafdata());
    if (ctap2streamindex.is_set || is_set(ctap2streamindex.operation)) leaf_name_data.push_back(ctap2streamindex.get_name_leafdata());
    if (ctap2streaminterceptdrops.is_set || is_set(ctap2streaminterceptdrops.operation)) leaf_name_data.push_back(ctap2streaminterceptdrops.get_name_leafdata());
    if (ctap2streaminterceptedhcpackets.is_set || is_set(ctap2streaminterceptedhcpackets.operation)) leaf_name_data.push_back(ctap2streaminterceptedhcpackets.get_name_leafdata());
    if (ctap2streaminterceptedpackets.is_set || is_set(ctap2streaminterceptedpackets.operation)) leaf_name_data.push_back(ctap2streaminterceptedpackets.get_name_leafdata());
    if (ctap2streaminterceptenable.is_set || is_set(ctap2streaminterceptenable.operation)) leaf_name_data.push_back(ctap2streaminterceptenable.get_name_leafdata());
    if (ctap2streamintercepthcdrops.is_set || is_set(ctap2streamintercepthcdrops.operation)) leaf_name_data.push_back(ctap2streamintercepthcdrops.get_name_leafdata());
    if (ctap2streamstatus.is_set || is_set(ctap2streamstatus.operation)) leaf_name_data.push_back(ctap2streamstatus.get_name_leafdata());
    if (ctap2streamtype.is_set || is_set(ctap2streamtype.operation)) leaf_name_data.push_back(ctap2streamtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cTap2MediationContentId")
    {
        ctap2mediationcontentid = value;
    }
    if(value_path == "cTap2StreamIndex")
    {
        ctap2streamindex = value;
    }
    if(value_path == "cTap2StreamInterceptDrops")
    {
        ctap2streaminterceptdrops = value;
    }
    if(value_path == "cTap2StreamInterceptedHCPackets")
    {
        ctap2streaminterceptedhcpackets = value;
    }
    if(value_path == "cTap2StreamInterceptedPackets")
    {
        ctap2streaminterceptedpackets = value;
    }
    if(value_path == "cTap2StreamInterceptEnable")
    {
        ctap2streaminterceptenable = value;
    }
    if(value_path == "cTap2StreamInterceptHCDrops")
    {
        ctap2streamintercepthcdrops = value;
    }
    if(value_path == "cTap2StreamStatus")
    {
        ctap2streamstatus = value;
    }
    if(value_path == "cTap2StreamType")
    {
        ctap2streamtype = value;
    }
}

CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugtable()
{
    yang_name = "cTap2DebugTable"; yang_parent_name = "CISCO-TAP2-MIB";
}

CiscoTap2Mib::Ctap2Debugtable::~Ctap2Debugtable()
{
}

bool CiscoTap2Mib::Ctap2Debugtable::has_data() const
{
    for (std::size_t index=0; index<ctap2debugentry_.size(); index++)
    {
        if(ctap2debugentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoTap2Mib::Ctap2Debugtable::has_operation() const
{
    for (std::size_t index=0; index<ctap2debugentry_.size(); index++)
    {
        if(ctap2debugentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoTap2Mib::Ctap2Debugtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2DebugTable";

    return path_buffer.str();

}

const EntityPath CiscoTap2Mib::Ctap2Debugtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoTap2Mib::Ctap2Debugtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cTap2DebugEntry")
    {
        for(auto const & c : ctap2debugentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry>();
        c->parent = this;
        ctap2debugentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoTap2Mib::Ctap2Debugtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ctap2debugentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoTap2Mib::Ctap2Debugtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry::Ctap2Debugentry()
    :
    ctap2debugindex{YType::int32, "cTap2DebugIndex"},
    ctap2debugmediationid{YType::uint32, "cTap2DebugMediationId"},
    ctap2debugmessage{YType::str, "cTap2DebugMessage"},
    ctap2debugstatus{YType::enumeration, "cTap2DebugStatus"},
    ctap2debugstreamid{YType::uint32, "cTap2DebugStreamId"}
{
    yang_name = "cTap2DebugEntry"; yang_parent_name = "cTap2DebugTable";
}

CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry::~Ctap2Debugentry()
{
}

bool CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry::has_data() const
{
    return ctap2debugindex.is_set
	|| ctap2debugmediationid.is_set
	|| ctap2debugmessage.is_set
	|| ctap2debugstatus.is_set
	|| ctap2debugstreamid.is_set;
}

bool CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ctap2debugindex.operation)
	|| is_set(ctap2debugmediationid.operation)
	|| is_set(ctap2debugmessage.operation)
	|| is_set(ctap2debugstatus.operation)
	|| is_set(ctap2debugstreamid.operation);
}

std::string CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2DebugEntry" <<"[cTap2DebugIndex='" <<ctap2debugindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/cTap2DebugTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctap2debugindex.is_set || is_set(ctap2debugindex.operation)) leaf_name_data.push_back(ctap2debugindex.get_name_leafdata());
    if (ctap2debugmediationid.is_set || is_set(ctap2debugmediationid.operation)) leaf_name_data.push_back(ctap2debugmediationid.get_name_leafdata());
    if (ctap2debugmessage.is_set || is_set(ctap2debugmessage.operation)) leaf_name_data.push_back(ctap2debugmessage.get_name_leafdata());
    if (ctap2debugstatus.is_set || is_set(ctap2debugstatus.operation)) leaf_name_data.push_back(ctap2debugstatus.get_name_leafdata());
    if (ctap2debugstreamid.is_set || is_set(ctap2debugstreamid.operation)) leaf_name_data.push_back(ctap2debugstreamid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cTap2DebugIndex")
    {
        ctap2debugindex = value;
    }
    if(value_path == "cTap2DebugMediationId")
    {
        ctap2debugmediationid = value;
    }
    if(value_path == "cTap2DebugMessage")
    {
        ctap2debugmessage = value;
    }
    if(value_path == "cTap2DebugStatus")
    {
        ctap2debugstatus = value;
    }
    if(value_path == "cTap2DebugStreamId")
    {
        ctap2debugstreamid = value;
    }
}

CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debugusertable()
{
    yang_name = "cTap2DebugUserTable"; yang_parent_name = "CISCO-TAP2-MIB";
}

CiscoTap2Mib::Ctap2Debugusertable::~Ctap2Debugusertable()
{
}

bool CiscoTap2Mib::Ctap2Debugusertable::has_data() const
{
    for (std::size_t index=0; index<ctap2debuguserentry_.size(); index++)
    {
        if(ctap2debuguserentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoTap2Mib::Ctap2Debugusertable::has_operation() const
{
    for (std::size_t index=0; index<ctap2debuguserentry_.size(); index++)
    {
        if(ctap2debuguserentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoTap2Mib::Ctap2Debugusertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2DebugUserTable";

    return path_buffer.str();

}

const EntityPath CiscoTap2Mib::Ctap2Debugusertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoTap2Mib::Ctap2Debugusertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cTap2DebugUserEntry")
    {
        for(auto const & c : ctap2debuguserentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry>();
        c->parent = this;
        ctap2debuguserentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoTap2Mib::Ctap2Debugusertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ctap2debuguserentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoTap2Mib::Ctap2Debugusertable::set_value(const std::string & value_path, std::string value)
{
}

CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry::Ctap2Debuguserentry()
    :
    ctap2mediationcontentid{YType::str, "cTap2MediationContentId"},
    ctap2debugusername{YType::str, "cTap2DebugUserName"},
    ctap2debuguserstatus{YType::enumeration, "cTap2DebugUserStatus"},
    ctap2debuguserstoragetype{YType::enumeration, "cTap2DebugUserStorageType"},
    ctap2debugusertimeout{YType::str, "cTap2DebugUserTimeout"}
{
    yang_name = "cTap2DebugUserEntry"; yang_parent_name = "cTap2DebugUserTable";
}

CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry::~Ctap2Debuguserentry()
{
}

bool CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry::has_data() const
{
    return ctap2mediationcontentid.is_set
	|| ctap2debugusername.is_set
	|| ctap2debuguserstatus.is_set
	|| ctap2debuguserstoragetype.is_set
	|| ctap2debugusertimeout.is_set;
}

bool CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ctap2mediationcontentid.operation)
	|| is_set(ctap2debugusername.operation)
	|| is_set(ctap2debuguserstatus.operation)
	|| is_set(ctap2debuguserstoragetype.operation)
	|| is_set(ctap2debugusertimeout.operation);
}

std::string CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cTap2DebugUserEntry" <<"[cTap2MediationContentId='" <<ctap2mediationcontentid <<"']" <<"[cTap2DebugUserName='" <<ctap2debugusername <<"']";

    return path_buffer.str();

}

const EntityPath CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-TAP2-MIB:CISCO-TAP2-MIB/cTap2DebugUserTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctap2mediationcontentid.is_set || is_set(ctap2mediationcontentid.operation)) leaf_name_data.push_back(ctap2mediationcontentid.get_name_leafdata());
    if (ctap2debugusername.is_set || is_set(ctap2debugusername.operation)) leaf_name_data.push_back(ctap2debugusername.get_name_leafdata());
    if (ctap2debuguserstatus.is_set || is_set(ctap2debuguserstatus.operation)) leaf_name_data.push_back(ctap2debuguserstatus.get_name_leafdata());
    if (ctap2debuguserstoragetype.is_set || is_set(ctap2debuguserstoragetype.operation)) leaf_name_data.push_back(ctap2debuguserstoragetype.get_name_leafdata());
    if (ctap2debugusertimeout.is_set || is_set(ctap2debugusertimeout.operation)) leaf_name_data.push_back(ctap2debugusertimeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cTap2MediationContentId")
    {
        ctap2mediationcontentid = value;
    }
    if(value_path == "cTap2DebugUserName")
    {
        ctap2debugusername = value;
    }
    if(value_path == "cTap2DebugUserStatus")
    {
        ctap2debuguserstatus = value;
    }
    if(value_path == "cTap2DebugUserStorageType")
    {
        ctap2debuguserstoragetype = value;
    }
    if(value_path == "cTap2DebugUserTimeout")
    {
        ctap2debugusertimeout = value;
    }
}

const Enum::YLeaf CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::Ctap2MediationtransportEnum::udp {1, "udp"};
const Enum::YLeaf CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::Ctap2MediationtransportEnum::rtpNack {2, "rtpNack"};
const Enum::YLeaf CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::Ctap2MediationtransportEnum::tcp {3, "tcp"};
const Enum::YLeaf CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::Ctap2MediationtransportEnum::sctp {4, "sctp"};
const Enum::YLeaf CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::Ctap2MediationtransportEnum::rtp {5, "rtp"};
const Enum::YLeaf CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::Ctap2MediationtransportEnum::radius {6, "radius"};

const Enum::YLeaf CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::Ctap2StreamtypeEnum::ip {1, "ip"};
const Enum::YLeaf CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::Ctap2StreamtypeEnum::mac {2, "mac"};
const Enum::YLeaf CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::Ctap2StreamtypeEnum::userConnection {3, "userConnection"};
const Enum::YLeaf CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::Ctap2StreamtypeEnum::msPdsn {4, "msPdsn"};
const Enum::YLeaf CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::Ctap2StreamtypeEnum::mobility {5, "mobility"};
const Enum::YLeaf CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::Ctap2StreamtypeEnum::voip {6, "voip"};


}
}

