
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_MEDIA_GATEWAY_MIB.hpp"

namespace ydk {
namespace CISCO_MEDIA_GATEWAY_MIB {

CiscoMediaGatewayMib::CiscoMediaGatewayMib()
    :
    cmediagwcallcontrolconfigtable(std::make_shared<CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable>())
	,cmediagwdnsipconfigtable(std::make_shared<CiscoMediaGatewayMib::Cmediagwdnsipconfigtable>())
	,cmediagwdomainnameconfigtable(std::make_shared<CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable>())
	,cmediagwipconfigtable(std::make_shared<CiscoMediaGatewayMib::Cmediagwipconfigtable>())
	,cmediagwrscstatstable(std::make_shared<CiscoMediaGatewayMib::Cmediagwrscstatstable>())
	,cmediagwtable(std::make_shared<CiscoMediaGatewayMib::Cmediagwtable>())
	,cmgwliftable(std::make_shared<CiscoMediaGatewayMib::Cmgwliftable>())
	,cmgwsignalprotocoltable(std::make_shared<CiscoMediaGatewayMib::Cmgwsignalprotocoltable>())
{
    cmediagwcallcontrolconfigtable->parent = this;

    cmediagwdnsipconfigtable->parent = this;

    cmediagwdomainnameconfigtable->parent = this;

    cmediagwipconfigtable->parent = this;

    cmediagwrscstatstable->parent = this;

    cmediagwtable->parent = this;

    cmgwliftable->parent = this;

    cmgwsignalprotocoltable->parent = this;

    yang_name = "CISCO-MEDIA-GATEWAY-MIB"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB";
}

CiscoMediaGatewayMib::~CiscoMediaGatewayMib()
{
}

bool CiscoMediaGatewayMib::has_data() const
{
    return (cmediagwcallcontrolconfigtable !=  nullptr && cmediagwcallcontrolconfigtable->has_data())
	|| (cmediagwdnsipconfigtable !=  nullptr && cmediagwdnsipconfigtable->has_data())
	|| (cmediagwdomainnameconfigtable !=  nullptr && cmediagwdomainnameconfigtable->has_data())
	|| (cmediagwipconfigtable !=  nullptr && cmediagwipconfigtable->has_data())
	|| (cmediagwrscstatstable !=  nullptr && cmediagwrscstatstable->has_data())
	|| (cmediagwtable !=  nullptr && cmediagwtable->has_data())
	|| (cmgwliftable !=  nullptr && cmgwliftable->has_data())
	|| (cmgwsignalprotocoltable !=  nullptr && cmgwsignalprotocoltable->has_data());
}

bool CiscoMediaGatewayMib::has_operation() const
{
    return is_set(operation)
	|| (cmediagwcallcontrolconfigtable !=  nullptr && cmediagwcallcontrolconfigtable->has_operation())
	|| (cmediagwdnsipconfigtable !=  nullptr && cmediagwdnsipconfigtable->has_operation())
	|| (cmediagwdomainnameconfigtable !=  nullptr && cmediagwdomainnameconfigtable->has_operation())
	|| (cmediagwipconfigtable !=  nullptr && cmediagwipconfigtable->has_operation())
	|| (cmediagwrscstatstable !=  nullptr && cmediagwrscstatstable->has_operation())
	|| (cmediagwtable !=  nullptr && cmediagwtable->has_operation())
	|| (cmgwliftable !=  nullptr && cmgwliftable->has_operation())
	|| (cmgwsignalprotocoltable !=  nullptr && cmgwsignalprotocoltable->has_operation());
}

std::string CiscoMediaGatewayMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoMediaGatewayMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwCallControlConfigTable")
    {
        if(cmediagwcallcontrolconfigtable == nullptr)
        {
            cmediagwcallcontrolconfigtable = std::make_shared<CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable>();
        }
        return cmediagwcallcontrolconfigtable;
    }

    if(child_yang_name == "cMediaGwDnsIpConfigTable")
    {
        if(cmediagwdnsipconfigtable == nullptr)
        {
            cmediagwdnsipconfigtable = std::make_shared<CiscoMediaGatewayMib::Cmediagwdnsipconfigtable>();
        }
        return cmediagwdnsipconfigtable;
    }

    if(child_yang_name == "cMediaGwDomainNameConfigTable")
    {
        if(cmediagwdomainnameconfigtable == nullptr)
        {
            cmediagwdomainnameconfigtable = std::make_shared<CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable>();
        }
        return cmediagwdomainnameconfigtable;
    }

    if(child_yang_name == "cMediaGwIpConfigTable")
    {
        if(cmediagwipconfigtable == nullptr)
        {
            cmediagwipconfigtable = std::make_shared<CiscoMediaGatewayMib::Cmediagwipconfigtable>();
        }
        return cmediagwipconfigtable;
    }

    if(child_yang_name == "cMediaGwRscStatsTable")
    {
        if(cmediagwrscstatstable == nullptr)
        {
            cmediagwrscstatstable = std::make_shared<CiscoMediaGatewayMib::Cmediagwrscstatstable>();
        }
        return cmediagwrscstatstable;
    }

    if(child_yang_name == "cMediaGwTable")
    {
        if(cmediagwtable == nullptr)
        {
            cmediagwtable = std::make_shared<CiscoMediaGatewayMib::Cmediagwtable>();
        }
        return cmediagwtable;
    }

    if(child_yang_name == "cmgwLifTable")
    {
        if(cmgwliftable == nullptr)
        {
            cmgwliftable = std::make_shared<CiscoMediaGatewayMib::Cmgwliftable>();
        }
        return cmgwliftable;
    }

    if(child_yang_name == "cmgwSignalProtocolTable")
    {
        if(cmgwsignalprotocoltable == nullptr)
        {
            cmgwsignalprotocoltable = std::make_shared<CiscoMediaGatewayMib::Cmgwsignalprotocoltable>();
        }
        return cmgwsignalprotocoltable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cmediagwcallcontrolconfigtable != nullptr)
    {
        children["cMediaGwCallControlConfigTable"] = cmediagwcallcontrolconfigtable;
    }

    if(cmediagwdnsipconfigtable != nullptr)
    {
        children["cMediaGwDnsIpConfigTable"] = cmediagwdnsipconfigtable;
    }

    if(cmediagwdomainnameconfigtable != nullptr)
    {
        children["cMediaGwDomainNameConfigTable"] = cmediagwdomainnameconfigtable;
    }

    if(cmediagwipconfigtable != nullptr)
    {
        children["cMediaGwIpConfigTable"] = cmediagwipconfigtable;
    }

    if(cmediagwrscstatstable != nullptr)
    {
        children["cMediaGwRscStatsTable"] = cmediagwrscstatstable;
    }

    if(cmediagwtable != nullptr)
    {
        children["cMediaGwTable"] = cmediagwtable;
    }

    if(cmgwliftable != nullptr)
    {
        children["cmgwLifTable"] = cmgwliftable;
    }

    if(cmgwsignalprotocoltable != nullptr)
    {
        children["cmgwSignalProtocolTable"] = cmgwsignalprotocoltable;
    }

    return children;
}

void CiscoMediaGatewayMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoMediaGatewayMib::clone_ptr() const
{
    return std::make_shared<CiscoMediaGatewayMib>();
}

std::string CiscoMediaGatewayMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoMediaGatewayMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoMediaGatewayMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoMediaGatewayMib::Cmediagwtable::Cmediagwtable()
{
    yang_name = "cMediaGwTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB";
}

CiscoMediaGatewayMib::Cmediagwtable::~Cmediagwtable()
{
}

bool CiscoMediaGatewayMib::Cmediagwtable::has_data() const
{
    for (std::size_t index=0; index<cmediagwentry.size(); index++)
    {
        if(cmediagwentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoMediaGatewayMib::Cmediagwtable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwentry.size(); index++)
    {
        if(cmediagwentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoMediaGatewayMib::Cmediagwtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwTable";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmediagwtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmediagwtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwEntry")
    {
        for(auto const & c : cmediagwentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry>();
        c->parent = this;
        cmediagwentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmediagwtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmediagwentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoMediaGatewayMib::Cmediagwtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::Cmediagwentry()
    :
    cmgwindex{YType::int32, "cmgwIndex"},
    cmgwadminstate{YType::enumeration, "cmgwAdminState"},
    cmgwdomainname{YType::str, "cmgwDomainName"},
    cmgwgracetime{YType::int32, "cmgwGraceTime"},
    cmgwlawinterceptenabled{YType::boolean, "cmgwLawInterceptEnabled"},
    cmgwphysicalindex{YType::int32, "cmgwPhysicalIndex"},
    cmgwservicestate{YType::enumeration, "cmgwServiceState"},
    cmgwsrcfilterenabled{YType::boolean, "cmgwSrcFilterEnabled"},
    cmgwv23enabled{YType::boolean, "cmgwV23Enabled"},
    cmgwvtmappingmode{YType::enumeration, "cmgwVtMappingMode"}
{
    yang_name = "cMediaGwEntry"; yang_parent_name = "cMediaGwTable";
}

CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::~Cmediagwentry()
{
}

bool CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::has_data() const
{
    return cmgwindex.is_set
	|| cmgwadminstate.is_set
	|| cmgwdomainname.is_set
	|| cmgwgracetime.is_set
	|| cmgwlawinterceptenabled.is_set
	|| cmgwphysicalindex.is_set
	|| cmgwservicestate.is_set
	|| cmgwsrcfilterenabled.is_set
	|| cmgwv23enabled.is_set
	|| cmgwvtmappingmode.is_set;
}

bool CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmgwindex.operation)
	|| is_set(cmgwadminstate.operation)
	|| is_set(cmgwdomainname.operation)
	|| is_set(cmgwgracetime.operation)
	|| is_set(cmgwlawinterceptenabled.operation)
	|| is_set(cmgwphysicalindex.operation)
	|| is_set(cmgwservicestate.operation)
	|| is_set(cmgwsrcfilterenabled.operation)
	|| is_set(cmgwv23enabled.operation)
	|| is_set(cmgwvtmappingmode.operation);
}

std::string CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwEntry" <<"[cmgwIndex='" <<cmgwindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.operation)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwadminstate.is_set || is_set(cmgwadminstate.operation)) leaf_name_data.push_back(cmgwadminstate.get_name_leafdata());
    if (cmgwdomainname.is_set || is_set(cmgwdomainname.operation)) leaf_name_data.push_back(cmgwdomainname.get_name_leafdata());
    if (cmgwgracetime.is_set || is_set(cmgwgracetime.operation)) leaf_name_data.push_back(cmgwgracetime.get_name_leafdata());
    if (cmgwlawinterceptenabled.is_set || is_set(cmgwlawinterceptenabled.operation)) leaf_name_data.push_back(cmgwlawinterceptenabled.get_name_leafdata());
    if (cmgwphysicalindex.is_set || is_set(cmgwphysicalindex.operation)) leaf_name_data.push_back(cmgwphysicalindex.get_name_leafdata());
    if (cmgwservicestate.is_set || is_set(cmgwservicestate.operation)) leaf_name_data.push_back(cmgwservicestate.get_name_leafdata());
    if (cmgwsrcfilterenabled.is_set || is_set(cmgwsrcfilterenabled.operation)) leaf_name_data.push_back(cmgwsrcfilterenabled.get_name_leafdata());
    if (cmgwv23enabled.is_set || is_set(cmgwv23enabled.operation)) leaf_name_data.push_back(cmgwv23enabled.get_name_leafdata());
    if (cmgwvtmappingmode.is_set || is_set(cmgwvtmappingmode.operation)) leaf_name_data.push_back(cmgwvtmappingmode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
    }
    if(value_path == "cmgwAdminState")
    {
        cmgwadminstate = value;
    }
    if(value_path == "cmgwDomainName")
    {
        cmgwdomainname = value;
    }
    if(value_path == "cmgwGraceTime")
    {
        cmgwgracetime = value;
    }
    if(value_path == "cmgwLawInterceptEnabled")
    {
        cmgwlawinterceptenabled = value;
    }
    if(value_path == "cmgwPhysicalIndex")
    {
        cmgwphysicalindex = value;
    }
    if(value_path == "cmgwServiceState")
    {
        cmgwservicestate = value;
    }
    if(value_path == "cmgwSrcFilterEnabled")
    {
        cmgwsrcfilterenabled = value;
    }
    if(value_path == "cmgwV23Enabled")
    {
        cmgwv23enabled = value;
    }
    if(value_path == "cmgwVtMappingMode")
    {
        cmgwvtmappingmode = value;
    }
}

CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocoltable()
{
    yang_name = "cmgwSignalProtocolTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB";
}

CiscoMediaGatewayMib::Cmgwsignalprotocoltable::~Cmgwsignalprotocoltable()
{
}

bool CiscoMediaGatewayMib::Cmgwsignalprotocoltable::has_data() const
{
    for (std::size_t index=0; index<cmgwsignalprotocolentry.size(); index++)
    {
        if(cmgwsignalprotocolentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoMediaGatewayMib::Cmgwsignalprotocoltable::has_operation() const
{
    for (std::size_t index=0; index<cmgwsignalprotocolentry.size(); index++)
    {
        if(cmgwsignalprotocolentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoMediaGatewayMib::Cmgwsignalprotocoltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmgwSignalProtocolTable";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmgwsignalprotocoltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmgwsignalprotocoltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmgwSignalProtocolEntry")
    {
        for(auto const & c : cmgwsignalprotocolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry>();
        c->parent = this;
        cmgwsignalprotocolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmgwsignalprotocoltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmgwsignalprotocolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoMediaGatewayMib::Cmgwsignalprotocoltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::Cmgwsignalprotocolentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmgwsignalprotocolindex{YType::int32, "cmgwSignalProtocolIndex"},
    cmgwsignalmgcprotocolport{YType::uint16, "cmgwSignalMgcProtocolPort"},
    cmgwsignalprotocol{YType::enumeration, "cmgwSignalProtocol"},
    cmgwsignalprotocolconfigver{YType::str, "cmgwSignalProtocolConfigVer"},
    cmgwsignalprotocolport{YType::int32, "cmgwSignalProtocolPort"},
    cmgwsignalprotocolpreference{YType::int32, "cmgwSignalProtocolPreference"},
    cmgwsignalprotocolversion{YType::str, "cmgwSignalProtocolVersion"}
{
    yang_name = "cmgwSignalProtocolEntry"; yang_parent_name = "cmgwSignalProtocolTable";
}

CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::~Cmgwsignalprotocolentry()
{
}

bool CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::has_data() const
{
    return cmgwindex.is_set
	|| cmgwsignalprotocolindex.is_set
	|| cmgwsignalmgcprotocolport.is_set
	|| cmgwsignalprotocol.is_set
	|| cmgwsignalprotocolconfigver.is_set
	|| cmgwsignalprotocolport.is_set
	|| cmgwsignalprotocolpreference.is_set
	|| cmgwsignalprotocolversion.is_set;
}

bool CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmgwindex.operation)
	|| is_set(cmgwsignalprotocolindex.operation)
	|| is_set(cmgwsignalmgcprotocolport.operation)
	|| is_set(cmgwsignalprotocol.operation)
	|| is_set(cmgwsignalprotocolconfigver.operation)
	|| is_set(cmgwsignalprotocolport.operation)
	|| is_set(cmgwsignalprotocolpreference.operation)
	|| is_set(cmgwsignalprotocolversion.operation);
}

std::string CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmgwSignalProtocolEntry" <<"[cmgwIndex='" <<cmgwindex <<"']" <<"[cmgwSignalProtocolIndex='" <<cmgwsignalprotocolindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cmgwSignalProtocolTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.operation)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwsignalprotocolindex.is_set || is_set(cmgwsignalprotocolindex.operation)) leaf_name_data.push_back(cmgwsignalprotocolindex.get_name_leafdata());
    if (cmgwsignalmgcprotocolport.is_set || is_set(cmgwsignalmgcprotocolport.operation)) leaf_name_data.push_back(cmgwsignalmgcprotocolport.get_name_leafdata());
    if (cmgwsignalprotocol.is_set || is_set(cmgwsignalprotocol.operation)) leaf_name_data.push_back(cmgwsignalprotocol.get_name_leafdata());
    if (cmgwsignalprotocolconfigver.is_set || is_set(cmgwsignalprotocolconfigver.operation)) leaf_name_data.push_back(cmgwsignalprotocolconfigver.get_name_leafdata());
    if (cmgwsignalprotocolport.is_set || is_set(cmgwsignalprotocolport.operation)) leaf_name_data.push_back(cmgwsignalprotocolport.get_name_leafdata());
    if (cmgwsignalprotocolpreference.is_set || is_set(cmgwsignalprotocolpreference.operation)) leaf_name_data.push_back(cmgwsignalprotocolpreference.get_name_leafdata());
    if (cmgwsignalprotocolversion.is_set || is_set(cmgwsignalprotocolversion.operation)) leaf_name_data.push_back(cmgwsignalprotocolversion.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
    }
    if(value_path == "cmgwSignalProtocolIndex")
    {
        cmgwsignalprotocolindex = value;
    }
    if(value_path == "cmgwSignalMgcProtocolPort")
    {
        cmgwsignalmgcprotocolport = value;
    }
    if(value_path == "cmgwSignalProtocol")
    {
        cmgwsignalprotocol = value;
    }
    if(value_path == "cmgwSignalProtocolConfigVer")
    {
        cmgwsignalprotocolconfigver = value;
    }
    if(value_path == "cmgwSignalProtocolPort")
    {
        cmgwsignalprotocolport = value;
    }
    if(value_path == "cmgwSignalProtocolPreference")
    {
        cmgwsignalprotocolpreference = value;
    }
    if(value_path == "cmgwSignalProtocolVersion")
    {
        cmgwsignalprotocolversion = value;
    }
}

CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigtable()
{
    yang_name = "cMediaGwIpConfigTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB";
}

CiscoMediaGatewayMib::Cmediagwipconfigtable::~Cmediagwipconfigtable()
{
}

bool CiscoMediaGatewayMib::Cmediagwipconfigtable::has_data() const
{
    for (std::size_t index=0; index<cmediagwipconfigentry.size(); index++)
    {
        if(cmediagwipconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoMediaGatewayMib::Cmediagwipconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwipconfigentry.size(); index++)
    {
        if(cmediagwipconfigentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoMediaGatewayMib::Cmediagwipconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwIpConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmediagwipconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmediagwipconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwIpConfigEntry")
    {
        for(auto const & c : cmediagwipconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry>();
        c->parent = this;
        cmediagwipconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmediagwipconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmediagwipconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoMediaGatewayMib::Cmediagwipconfigtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry::Cmediagwipconfigentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmgwipconfigindex{YType::int32, "cmgwIpConfigIndex"},
    cmgwipconfigaddress{YType::str, "cmgwIpConfigAddress"},
    cmgwipconfigaddrtype{YType::enumeration, "cmgwIpConfigAddrType"},
    cmgwipconfigdefaultgwip{YType::boolean, "cmgwIpConfigDefaultGwIp"},
    cmgwipconfigforremotemapping{YType::boolean, "cmgwIpConfigForRemoteMapping"},
    cmgwipconfigifindex{YType::int32, "cmgwIpConfigIfIndex"},
    cmgwipconfigrowstatus{YType::enumeration, "cmgwIpConfigRowStatus"},
    cmgwipconfigsubnetmask{YType::uint32, "cmgwIpConfigSubnetMask"},
    cmgwipconfigvci{YType::int32, "cmgwIpConfigVci"},
    cmgwipconfigvpi{YType::int32, "cmgwIpConfigVpi"}
{
    yang_name = "cMediaGwIpConfigEntry"; yang_parent_name = "cMediaGwIpConfigTable";
}

CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry::~Cmediagwipconfigentry()
{
}

bool CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry::has_data() const
{
    return cmgwindex.is_set
	|| cmgwipconfigindex.is_set
	|| cmgwipconfigaddress.is_set
	|| cmgwipconfigaddrtype.is_set
	|| cmgwipconfigdefaultgwip.is_set
	|| cmgwipconfigforremotemapping.is_set
	|| cmgwipconfigifindex.is_set
	|| cmgwipconfigrowstatus.is_set
	|| cmgwipconfigsubnetmask.is_set
	|| cmgwipconfigvci.is_set
	|| cmgwipconfigvpi.is_set;
}

bool CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmgwindex.operation)
	|| is_set(cmgwipconfigindex.operation)
	|| is_set(cmgwipconfigaddress.operation)
	|| is_set(cmgwipconfigaddrtype.operation)
	|| is_set(cmgwipconfigdefaultgwip.operation)
	|| is_set(cmgwipconfigforremotemapping.operation)
	|| is_set(cmgwipconfigifindex.operation)
	|| is_set(cmgwipconfigrowstatus.operation)
	|| is_set(cmgwipconfigsubnetmask.operation)
	|| is_set(cmgwipconfigvci.operation)
	|| is_set(cmgwipconfigvpi.operation);
}

std::string CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwIpConfigEntry" <<"[cmgwIndex='" <<cmgwindex <<"']" <<"[cmgwIpConfigIndex='" <<cmgwipconfigindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwIpConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.operation)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwipconfigindex.is_set || is_set(cmgwipconfigindex.operation)) leaf_name_data.push_back(cmgwipconfigindex.get_name_leafdata());
    if (cmgwipconfigaddress.is_set || is_set(cmgwipconfigaddress.operation)) leaf_name_data.push_back(cmgwipconfigaddress.get_name_leafdata());
    if (cmgwipconfigaddrtype.is_set || is_set(cmgwipconfigaddrtype.operation)) leaf_name_data.push_back(cmgwipconfigaddrtype.get_name_leafdata());
    if (cmgwipconfigdefaultgwip.is_set || is_set(cmgwipconfigdefaultgwip.operation)) leaf_name_data.push_back(cmgwipconfigdefaultgwip.get_name_leafdata());
    if (cmgwipconfigforremotemapping.is_set || is_set(cmgwipconfigforremotemapping.operation)) leaf_name_data.push_back(cmgwipconfigforremotemapping.get_name_leafdata());
    if (cmgwipconfigifindex.is_set || is_set(cmgwipconfigifindex.operation)) leaf_name_data.push_back(cmgwipconfigifindex.get_name_leafdata());
    if (cmgwipconfigrowstatus.is_set || is_set(cmgwipconfigrowstatus.operation)) leaf_name_data.push_back(cmgwipconfigrowstatus.get_name_leafdata());
    if (cmgwipconfigsubnetmask.is_set || is_set(cmgwipconfigsubnetmask.operation)) leaf_name_data.push_back(cmgwipconfigsubnetmask.get_name_leafdata());
    if (cmgwipconfigvci.is_set || is_set(cmgwipconfigvci.operation)) leaf_name_data.push_back(cmgwipconfigvci.get_name_leafdata());
    if (cmgwipconfigvpi.is_set || is_set(cmgwipconfigvpi.operation)) leaf_name_data.push_back(cmgwipconfigvpi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoMediaGatewayMib::Cmediagwipconfigtable::Cmediagwipconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
    }
    if(value_path == "cmgwIpConfigIndex")
    {
        cmgwipconfigindex = value;
    }
    if(value_path == "cmgwIpConfigAddress")
    {
        cmgwipconfigaddress = value;
    }
    if(value_path == "cmgwIpConfigAddrType")
    {
        cmgwipconfigaddrtype = value;
    }
    if(value_path == "cmgwIpConfigDefaultGwIp")
    {
        cmgwipconfigdefaultgwip = value;
    }
    if(value_path == "cmgwIpConfigForRemoteMapping")
    {
        cmgwipconfigforremotemapping = value;
    }
    if(value_path == "cmgwIpConfigIfIndex")
    {
        cmgwipconfigifindex = value;
    }
    if(value_path == "cmgwIpConfigRowStatus")
    {
        cmgwipconfigrowstatus = value;
    }
    if(value_path == "cmgwIpConfigSubnetMask")
    {
        cmgwipconfigsubnetmask = value;
    }
    if(value_path == "cmgwIpConfigVci")
    {
        cmgwipconfigvci = value;
    }
    if(value_path == "cmgwIpConfigVpi")
    {
        cmgwipconfigvpi = value;
    }
}

CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigtable()
{
    yang_name = "cMediaGwDomainNameConfigTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB";
}

CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::~Cmediagwdomainnameconfigtable()
{
}

bool CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::has_data() const
{
    for (std::size_t index=0; index<cmediagwdomainnameconfigentry.size(); index++)
    {
        if(cmediagwdomainnameconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwdomainnameconfigentry.size(); index++)
    {
        if(cmediagwdomainnameconfigentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwDomainNameConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwDomainNameConfigEntry")
    {
        for(auto const & c : cmediagwdomainnameconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry>();
        c->parent = this;
        cmediagwdomainnameconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmediagwdomainnameconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::Cmediagwdomainnameconfigentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmgwconfigdomainnameindex{YType::int32, "cmgwConfigDomainNameIndex"},
    cmgwconfigdomainname{YType::str, "cmgwConfigDomainName"},
    cmgwconfigdomainnameentity{YType::enumeration, "cmgwConfigDomainNameEntity"},
    cmgwconfigdomainnamerowstatus{YType::enumeration, "cmgwConfigDomainNameRowStatus"}
{
    yang_name = "cMediaGwDomainNameConfigEntry"; yang_parent_name = "cMediaGwDomainNameConfigTable";
}

CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::~Cmediagwdomainnameconfigentry()
{
}

bool CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::has_data() const
{
    return cmgwindex.is_set
	|| cmgwconfigdomainnameindex.is_set
	|| cmgwconfigdomainname.is_set
	|| cmgwconfigdomainnameentity.is_set
	|| cmgwconfigdomainnamerowstatus.is_set;
}

bool CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmgwindex.operation)
	|| is_set(cmgwconfigdomainnameindex.operation)
	|| is_set(cmgwconfigdomainname.operation)
	|| is_set(cmgwconfigdomainnameentity.operation)
	|| is_set(cmgwconfigdomainnamerowstatus.operation);
}

std::string CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwDomainNameConfigEntry" <<"[cmgwIndex='" <<cmgwindex <<"']" <<"[cmgwConfigDomainNameIndex='" <<cmgwconfigdomainnameindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwDomainNameConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.operation)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwconfigdomainnameindex.is_set || is_set(cmgwconfigdomainnameindex.operation)) leaf_name_data.push_back(cmgwconfigdomainnameindex.get_name_leafdata());
    if (cmgwconfigdomainname.is_set || is_set(cmgwconfigdomainname.operation)) leaf_name_data.push_back(cmgwconfigdomainname.get_name_leafdata());
    if (cmgwconfigdomainnameentity.is_set || is_set(cmgwconfigdomainnameentity.operation)) leaf_name_data.push_back(cmgwconfigdomainnameentity.get_name_leafdata());
    if (cmgwconfigdomainnamerowstatus.is_set || is_set(cmgwconfigdomainnamerowstatus.operation)) leaf_name_data.push_back(cmgwconfigdomainnamerowstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
    }
    if(value_path == "cmgwConfigDomainNameIndex")
    {
        cmgwconfigdomainnameindex = value;
    }
    if(value_path == "cmgwConfigDomainName")
    {
        cmgwconfigdomainname = value;
    }
    if(value_path == "cmgwConfigDomainNameEntity")
    {
        cmgwconfigdomainnameentity = value;
    }
    if(value_path == "cmgwConfigDomainNameRowStatus")
    {
        cmgwconfigdomainnamerowstatus = value;
    }
}

CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigtable()
{
    yang_name = "cMediaGwDnsIpConfigTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB";
}

CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::~Cmediagwdnsipconfigtable()
{
}

bool CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::has_data() const
{
    for (std::size_t index=0; index<cmediagwdnsipconfigentry.size(); index++)
    {
        if(cmediagwdnsipconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwdnsipconfigentry.size(); index++)
    {
        if(cmediagwdnsipconfigentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwDnsIpConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwDnsIpConfigEntry")
    {
        for(auto const & c : cmediagwdnsipconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry>();
        c->parent = this;
        cmediagwdnsipconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmediagwdnsipconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::Cmediagwdnsipconfigentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmgwdnsipindex{YType::int32, "cmgwDnsIpIndex"},
    cmgwdnsdomainname{YType::str, "cmgwDnsDomainName"},
    cmgwdnsip{YType::str, "cmgwDnsIp"},
    cmgwdnsiprowstatus{YType::enumeration, "cmgwDnsIpRowStatus"},
    cmgwdnsiptype{YType::enumeration, "cmgwDnsIpType"}
{
    yang_name = "cMediaGwDnsIpConfigEntry"; yang_parent_name = "cMediaGwDnsIpConfigTable";
}

CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::~Cmediagwdnsipconfigentry()
{
}

bool CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::has_data() const
{
    return cmgwindex.is_set
	|| cmgwdnsipindex.is_set
	|| cmgwdnsdomainname.is_set
	|| cmgwdnsip.is_set
	|| cmgwdnsiprowstatus.is_set
	|| cmgwdnsiptype.is_set;
}

bool CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmgwindex.operation)
	|| is_set(cmgwdnsipindex.operation)
	|| is_set(cmgwdnsdomainname.operation)
	|| is_set(cmgwdnsip.operation)
	|| is_set(cmgwdnsiprowstatus.operation)
	|| is_set(cmgwdnsiptype.operation);
}

std::string CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwDnsIpConfigEntry" <<"[cmgwIndex='" <<cmgwindex <<"']" <<"[cmgwDnsIpIndex='" <<cmgwdnsipindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwDnsIpConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.operation)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwdnsipindex.is_set || is_set(cmgwdnsipindex.operation)) leaf_name_data.push_back(cmgwdnsipindex.get_name_leafdata());
    if (cmgwdnsdomainname.is_set || is_set(cmgwdnsdomainname.operation)) leaf_name_data.push_back(cmgwdnsdomainname.get_name_leafdata());
    if (cmgwdnsip.is_set || is_set(cmgwdnsip.operation)) leaf_name_data.push_back(cmgwdnsip.get_name_leafdata());
    if (cmgwdnsiprowstatus.is_set || is_set(cmgwdnsiprowstatus.operation)) leaf_name_data.push_back(cmgwdnsiprowstatus.get_name_leafdata());
    if (cmgwdnsiptype.is_set || is_set(cmgwdnsiptype.operation)) leaf_name_data.push_back(cmgwdnsiptype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoMediaGatewayMib::Cmediagwdnsipconfigtable::Cmediagwdnsipconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
    }
    if(value_path == "cmgwDnsIpIndex")
    {
        cmgwdnsipindex = value;
    }
    if(value_path == "cmgwDnsDomainName")
    {
        cmgwdnsdomainname = value;
    }
    if(value_path == "cmgwDnsIp")
    {
        cmgwdnsip = value;
    }
    if(value_path == "cmgwDnsIpRowStatus")
    {
        cmgwdnsiprowstatus = value;
    }
    if(value_path == "cmgwDnsIpType")
    {
        cmgwdnsiptype = value;
    }
}

CiscoMediaGatewayMib::Cmgwliftable::Cmgwliftable()
{
    yang_name = "cmgwLifTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB";
}

CiscoMediaGatewayMib::Cmgwliftable::~Cmgwliftable()
{
}

bool CiscoMediaGatewayMib::Cmgwliftable::has_data() const
{
    for (std::size_t index=0; index<cmgwlifentry.size(); index++)
    {
        if(cmgwlifentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoMediaGatewayMib::Cmgwliftable::has_operation() const
{
    for (std::size_t index=0; index<cmgwlifentry.size(); index++)
    {
        if(cmgwlifentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoMediaGatewayMib::Cmgwliftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmgwLifTable";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmgwliftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmgwliftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmgwLifEntry")
    {
        for(auto const & c : cmgwlifentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry>();
        c->parent = this;
        cmgwlifentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmgwliftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmgwlifentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoMediaGatewayMib::Cmgwliftable::set_value(const std::string & value_path, std::string value)
{
}

CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry::Cmgwlifentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmgwlifnumber{YType::uint32, "cmgwLifNumber"},
    cmgwlifpvccount{YType::uint32, "cmgwLifPvcCount"},
    cmgwlifvoiceifcount{YType::uint32, "cmgwLifVoiceIfCount"}
{
    yang_name = "cmgwLifEntry"; yang_parent_name = "cmgwLifTable";
}

CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry::~Cmgwlifentry()
{
}

bool CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry::has_data() const
{
    return cmgwindex.is_set
	|| cmgwlifnumber.is_set
	|| cmgwlifpvccount.is_set
	|| cmgwlifvoiceifcount.is_set;
}

bool CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmgwindex.operation)
	|| is_set(cmgwlifnumber.operation)
	|| is_set(cmgwlifpvccount.operation)
	|| is_set(cmgwlifvoiceifcount.operation);
}

std::string CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmgwLifEntry" <<"[cmgwIndex='" <<cmgwindex <<"']" <<"[cmgwLifNumber='" <<cmgwlifnumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cmgwLifTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.operation)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwlifnumber.is_set || is_set(cmgwlifnumber.operation)) leaf_name_data.push_back(cmgwlifnumber.get_name_leafdata());
    if (cmgwlifpvccount.is_set || is_set(cmgwlifpvccount.operation)) leaf_name_data.push_back(cmgwlifpvccount.get_name_leafdata());
    if (cmgwlifvoiceifcount.is_set || is_set(cmgwlifvoiceifcount.operation)) leaf_name_data.push_back(cmgwlifvoiceifcount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoMediaGatewayMib::Cmgwliftable::Cmgwlifentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
    }
    if(value_path == "cmgwLifNumber")
    {
        cmgwlifnumber = value;
    }
    if(value_path == "cmgwLifPvcCount")
    {
        cmgwlifpvccount = value;
    }
    if(value_path == "cmgwLifVoiceIfCount")
    {
        cmgwlifvoiceifcount = value;
    }
}

CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigtable()
{
    yang_name = "cMediaGwCallControlConfigTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB";
}

CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::~Cmediagwcallcontrolconfigtable()
{
}

bool CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::has_data() const
{
    for (std::size_t index=0; index<cmediagwcallcontrolconfigentry.size(); index++)
    {
        if(cmediagwcallcontrolconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwcallcontrolconfigentry.size(); index++)
    {
        if(cmediagwcallcontrolconfigentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwCallControlConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwCallControlConfigEntry")
    {
        for(auto const & c : cmediagwcallcontrolconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry>();
        c->parent = this;
        cmediagwcallcontrolconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmediagwcallcontrolconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::Cmediagwcallcontrolconfigentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmediagwcccfgaal1svcnameprefix{YType::str, "cMediaGwCcCfgAal1SvcNamePrefix"},
    cmediagwcccfgaal2svcnameprefix{YType::str, "cMediaGwCcCfgAal2SvcNamePrefix"},
    cmediagwcccfgbearertos{YType::uint32, "cMediaGwCcCfgBearerTos"},
    cmediagwcccfgclusterenabled{YType::enumeration, "cMediaGwCcCfgClusterEnabled"},
    cmediagwcccfgcontroltos{YType::uint32, "cMediaGwCcCfgControlTos"},
    cmediagwcccfgdefaulttoneplanid{YType::uint32, "cMediaGwCcCfgDefaultTonePlanId"},
    cmediagwcccfgdefbearertraffic{YType::enumeration, "cMediaGwCcCfgDefBearerTraffic"},
    cmediagwcccfgdefrtpnameprefix{YType::str, "cMediaGwCcCfgDefRtpNamePrefix"},
    cmediagwcccfgdescrinfoenabled{YType::boolean, "cMediaGwCcCfgDescrInfoEnabled"},
    cmediagwcccfgdsnameprefix{YType::str, "cMediaGwCcCfgDsNamePrefix"},
    cmediagwcccfgnsepayload{YType::uint32, "cMediaGwCcCfgNsePayload"},
    cmediagwcccfgnseresptimer{YType::uint32, "cMediaGwCcCfgNseRespTimer"},
    cmediagwcccfgntepayload{YType::uint32, "cMediaGwCcCfgNtePayload"},
    cmediagwcccfgrtpnameprefix{YType::str, "cMediaGwCcCfgRtpNamePrefix"},
    cmediagwcccfgvbdjitterdelaymode{YType::enumeration, "cMediaGwCcCfgVbdJitterDelayMode"},
    cmediagwcccfgvbdjittermaxdelay{YType::uint32, "cMediaGwCcCfgVbdJitterMaxDelay"},
    cmediagwcccfgvbdjittermindelay{YType::uint32, "cMediaGwCcCfgVbdJitterMinDelay"},
    cmediagwcccfgvbdjitternomdelay{YType::uint32, "cMediaGwCcCfgVbdJitterNomDelay"}
{
    yang_name = "cMediaGwCallControlConfigEntry"; yang_parent_name = "cMediaGwCallControlConfigTable";
}

CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::~Cmediagwcallcontrolconfigentry()
{
}

bool CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::has_data() const
{
    return cmgwindex.is_set
	|| cmediagwcccfgaal1svcnameprefix.is_set
	|| cmediagwcccfgaal2svcnameprefix.is_set
	|| cmediagwcccfgbearertos.is_set
	|| cmediagwcccfgclusterenabled.is_set
	|| cmediagwcccfgcontroltos.is_set
	|| cmediagwcccfgdefaulttoneplanid.is_set
	|| cmediagwcccfgdefbearertraffic.is_set
	|| cmediagwcccfgdefrtpnameprefix.is_set
	|| cmediagwcccfgdescrinfoenabled.is_set
	|| cmediagwcccfgdsnameprefix.is_set
	|| cmediagwcccfgnsepayload.is_set
	|| cmediagwcccfgnseresptimer.is_set
	|| cmediagwcccfgntepayload.is_set
	|| cmediagwcccfgrtpnameprefix.is_set
	|| cmediagwcccfgvbdjitterdelaymode.is_set
	|| cmediagwcccfgvbdjittermaxdelay.is_set
	|| cmediagwcccfgvbdjittermindelay.is_set
	|| cmediagwcccfgvbdjitternomdelay.is_set;
}

bool CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmgwindex.operation)
	|| is_set(cmediagwcccfgaal1svcnameprefix.operation)
	|| is_set(cmediagwcccfgaal2svcnameprefix.operation)
	|| is_set(cmediagwcccfgbearertos.operation)
	|| is_set(cmediagwcccfgclusterenabled.operation)
	|| is_set(cmediagwcccfgcontroltos.operation)
	|| is_set(cmediagwcccfgdefaulttoneplanid.operation)
	|| is_set(cmediagwcccfgdefbearertraffic.operation)
	|| is_set(cmediagwcccfgdefrtpnameprefix.operation)
	|| is_set(cmediagwcccfgdescrinfoenabled.operation)
	|| is_set(cmediagwcccfgdsnameprefix.operation)
	|| is_set(cmediagwcccfgnsepayload.operation)
	|| is_set(cmediagwcccfgnseresptimer.operation)
	|| is_set(cmediagwcccfgntepayload.operation)
	|| is_set(cmediagwcccfgrtpnameprefix.operation)
	|| is_set(cmediagwcccfgvbdjitterdelaymode.operation)
	|| is_set(cmediagwcccfgvbdjittermaxdelay.operation)
	|| is_set(cmediagwcccfgvbdjittermindelay.operation)
	|| is_set(cmediagwcccfgvbdjitternomdelay.operation);
}

std::string CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwCallControlConfigEntry" <<"[cmgwIndex='" <<cmgwindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwCallControlConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.operation)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmediagwcccfgaal1svcnameprefix.is_set || is_set(cmediagwcccfgaal1svcnameprefix.operation)) leaf_name_data.push_back(cmediagwcccfgaal1svcnameprefix.get_name_leafdata());
    if (cmediagwcccfgaal2svcnameprefix.is_set || is_set(cmediagwcccfgaal2svcnameprefix.operation)) leaf_name_data.push_back(cmediagwcccfgaal2svcnameprefix.get_name_leafdata());
    if (cmediagwcccfgbearertos.is_set || is_set(cmediagwcccfgbearertos.operation)) leaf_name_data.push_back(cmediagwcccfgbearertos.get_name_leafdata());
    if (cmediagwcccfgclusterenabled.is_set || is_set(cmediagwcccfgclusterenabled.operation)) leaf_name_data.push_back(cmediagwcccfgclusterenabled.get_name_leafdata());
    if (cmediagwcccfgcontroltos.is_set || is_set(cmediagwcccfgcontroltos.operation)) leaf_name_data.push_back(cmediagwcccfgcontroltos.get_name_leafdata());
    if (cmediagwcccfgdefaulttoneplanid.is_set || is_set(cmediagwcccfgdefaulttoneplanid.operation)) leaf_name_data.push_back(cmediagwcccfgdefaulttoneplanid.get_name_leafdata());
    if (cmediagwcccfgdefbearertraffic.is_set || is_set(cmediagwcccfgdefbearertraffic.operation)) leaf_name_data.push_back(cmediagwcccfgdefbearertraffic.get_name_leafdata());
    if (cmediagwcccfgdefrtpnameprefix.is_set || is_set(cmediagwcccfgdefrtpnameprefix.operation)) leaf_name_data.push_back(cmediagwcccfgdefrtpnameprefix.get_name_leafdata());
    if (cmediagwcccfgdescrinfoenabled.is_set || is_set(cmediagwcccfgdescrinfoenabled.operation)) leaf_name_data.push_back(cmediagwcccfgdescrinfoenabled.get_name_leafdata());
    if (cmediagwcccfgdsnameprefix.is_set || is_set(cmediagwcccfgdsnameprefix.operation)) leaf_name_data.push_back(cmediagwcccfgdsnameprefix.get_name_leafdata());
    if (cmediagwcccfgnsepayload.is_set || is_set(cmediagwcccfgnsepayload.operation)) leaf_name_data.push_back(cmediagwcccfgnsepayload.get_name_leafdata());
    if (cmediagwcccfgnseresptimer.is_set || is_set(cmediagwcccfgnseresptimer.operation)) leaf_name_data.push_back(cmediagwcccfgnseresptimer.get_name_leafdata());
    if (cmediagwcccfgntepayload.is_set || is_set(cmediagwcccfgntepayload.operation)) leaf_name_data.push_back(cmediagwcccfgntepayload.get_name_leafdata());
    if (cmediagwcccfgrtpnameprefix.is_set || is_set(cmediagwcccfgrtpnameprefix.operation)) leaf_name_data.push_back(cmediagwcccfgrtpnameprefix.get_name_leafdata());
    if (cmediagwcccfgvbdjitterdelaymode.is_set || is_set(cmediagwcccfgvbdjitterdelaymode.operation)) leaf_name_data.push_back(cmediagwcccfgvbdjitterdelaymode.get_name_leafdata());
    if (cmediagwcccfgvbdjittermaxdelay.is_set || is_set(cmediagwcccfgvbdjittermaxdelay.operation)) leaf_name_data.push_back(cmediagwcccfgvbdjittermaxdelay.get_name_leafdata());
    if (cmediagwcccfgvbdjittermindelay.is_set || is_set(cmediagwcccfgvbdjittermindelay.operation)) leaf_name_data.push_back(cmediagwcccfgvbdjittermindelay.get_name_leafdata());
    if (cmediagwcccfgvbdjitternomdelay.is_set || is_set(cmediagwcccfgvbdjitternomdelay.operation)) leaf_name_data.push_back(cmediagwcccfgvbdjitternomdelay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
    }
    if(value_path == "cMediaGwCcCfgAal1SvcNamePrefix")
    {
        cmediagwcccfgaal1svcnameprefix = value;
    }
    if(value_path == "cMediaGwCcCfgAal2SvcNamePrefix")
    {
        cmediagwcccfgaal2svcnameprefix = value;
    }
    if(value_path == "cMediaGwCcCfgBearerTos")
    {
        cmediagwcccfgbearertos = value;
    }
    if(value_path == "cMediaGwCcCfgClusterEnabled")
    {
        cmediagwcccfgclusterenabled = value;
    }
    if(value_path == "cMediaGwCcCfgControlTos")
    {
        cmediagwcccfgcontroltos = value;
    }
    if(value_path == "cMediaGwCcCfgDefaultTonePlanId")
    {
        cmediagwcccfgdefaulttoneplanid = value;
    }
    if(value_path == "cMediaGwCcCfgDefBearerTraffic")
    {
        cmediagwcccfgdefbearertraffic = value;
    }
    if(value_path == "cMediaGwCcCfgDefRtpNamePrefix")
    {
        cmediagwcccfgdefrtpnameprefix = value;
    }
    if(value_path == "cMediaGwCcCfgDescrInfoEnabled")
    {
        cmediagwcccfgdescrinfoenabled = value;
    }
    if(value_path == "cMediaGwCcCfgDsNamePrefix")
    {
        cmediagwcccfgdsnameprefix = value;
    }
    if(value_path == "cMediaGwCcCfgNsePayload")
    {
        cmediagwcccfgnsepayload = value;
    }
    if(value_path == "cMediaGwCcCfgNseRespTimer")
    {
        cmediagwcccfgnseresptimer = value;
    }
    if(value_path == "cMediaGwCcCfgNtePayload")
    {
        cmediagwcccfgntepayload = value;
    }
    if(value_path == "cMediaGwCcCfgRtpNamePrefix")
    {
        cmediagwcccfgrtpnameprefix = value;
    }
    if(value_path == "cMediaGwCcCfgVbdJitterDelayMode")
    {
        cmediagwcccfgvbdjitterdelaymode = value;
    }
    if(value_path == "cMediaGwCcCfgVbdJitterMaxDelay")
    {
        cmediagwcccfgvbdjittermaxdelay = value;
    }
    if(value_path == "cMediaGwCcCfgVbdJitterMinDelay")
    {
        cmediagwcccfgvbdjittermindelay = value;
    }
    if(value_path == "cMediaGwCcCfgVbdJitterNomDelay")
    {
        cmediagwcccfgvbdjitternomdelay = value;
    }
}

CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatstable()
{
    yang_name = "cMediaGwRscStatsTable"; yang_parent_name = "CISCO-MEDIA-GATEWAY-MIB";
}

CiscoMediaGatewayMib::Cmediagwrscstatstable::~Cmediagwrscstatstable()
{
}

bool CiscoMediaGatewayMib::Cmediagwrscstatstable::has_data() const
{
    for (std::size_t index=0; index<cmediagwrscstatsentry.size(); index++)
    {
        if(cmediagwrscstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoMediaGatewayMib::Cmediagwrscstatstable::has_operation() const
{
    for (std::size_t index=0; index<cmediagwrscstatsentry.size(); index++)
    {
        if(cmediagwrscstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoMediaGatewayMib::Cmediagwrscstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwRscStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmediagwrscstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmediagwrscstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cMediaGwRscStatsEntry")
    {
        for(auto const & c : cmediagwrscstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry>();
        c->parent = this;
        cmediagwrscstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmediagwrscstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmediagwrscstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoMediaGatewayMib::Cmediagwrscstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::Cmediagwrscstatsentry()
    :
    cmgwindex{YType::str, "cmgwIndex"},
    cmgwrscstatsindex{YType::enumeration, "cmgwRscStatsIndex"},
    cmgwrscaverageutilization{YType::uint32, "cmgwRscAverageUtilization"},
    cmgwrscmaximumutilization{YType::uint32, "cmgwRscMaximumUtilization"},
    cmgwrscminimumutilization{YType::uint32, "cmgwRscMinimumUtilization"},
    cmgwrscsincelastreset{YType::uint32, "cmgwRscSinceLastReset"}
{
    yang_name = "cMediaGwRscStatsEntry"; yang_parent_name = "cMediaGwRscStatsTable";
}

CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::~Cmediagwrscstatsentry()
{
}

bool CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::has_data() const
{
    return cmgwindex.is_set
	|| cmgwrscstatsindex.is_set
	|| cmgwrscaverageutilization.is_set
	|| cmgwrscmaximumutilization.is_set
	|| cmgwrscminimumutilization.is_set
	|| cmgwrscsincelastreset.is_set;
}

bool CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmgwindex.operation)
	|| is_set(cmgwrscstatsindex.operation)
	|| is_set(cmgwrscaverageutilization.operation)
	|| is_set(cmgwrscmaximumutilization.operation)
	|| is_set(cmgwrscminimumutilization.operation)
	|| is_set(cmgwrscsincelastreset.operation);
}

std::string CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cMediaGwRscStatsEntry" <<"[cmgwIndex='" <<cmgwindex <<"']" <<"[cmgwRscStatsIndex='" <<cmgwrscstatsindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-MEDIA-GATEWAY-MIB:CISCO-MEDIA-GATEWAY-MIB/cMediaGwRscStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmgwindex.is_set || is_set(cmgwindex.operation)) leaf_name_data.push_back(cmgwindex.get_name_leafdata());
    if (cmgwrscstatsindex.is_set || is_set(cmgwrscstatsindex.operation)) leaf_name_data.push_back(cmgwrscstatsindex.get_name_leafdata());
    if (cmgwrscaverageutilization.is_set || is_set(cmgwrscaverageutilization.operation)) leaf_name_data.push_back(cmgwrscaverageutilization.get_name_leafdata());
    if (cmgwrscmaximumutilization.is_set || is_set(cmgwrscmaximumutilization.operation)) leaf_name_data.push_back(cmgwrscmaximumutilization.get_name_leafdata());
    if (cmgwrscminimumutilization.is_set || is_set(cmgwrscminimumutilization.operation)) leaf_name_data.push_back(cmgwrscminimumutilization.get_name_leafdata());
    if (cmgwrscsincelastreset.is_set || is_set(cmgwrscsincelastreset.operation)) leaf_name_data.push_back(cmgwrscsincelastreset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmgwIndex")
    {
        cmgwindex = value;
    }
    if(value_path == "cmgwRscStatsIndex")
    {
        cmgwrscstatsindex = value;
    }
    if(value_path == "cmgwRscAverageUtilization")
    {
        cmgwrscaverageutilization = value;
    }
    if(value_path == "cmgwRscMaximumUtilization")
    {
        cmgwrscmaximumutilization = value;
    }
    if(value_path == "cmgwRscMinimumUtilization")
    {
        cmgwrscminimumutilization = value;
    }
    if(value_path == "cmgwRscSinceLastReset")
    {
        cmgwrscsincelastreset = value;
    }
}

const Enum::YLeaf CcallcontroljitterdelaymodeEnum::adaptive {1, "adaptive"};
const Enum::YLeaf CcallcontroljitterdelaymodeEnum::fixed {2, "fixed"};

const Enum::YLeaf CgwadminstateEnum::inService {1, "inService"};
const Enum::YLeaf CgwadminstateEnum::forcedOutOfService {2, "forcedOutOfService"};
const Enum::YLeaf CgwadminstateEnum::gracefulOutOfService {3, "gracefulOutOfService"};

const Enum::YLeaf CgwservicestateEnum::inService {1, "inService"};
const Enum::YLeaf CgwservicestateEnum::forcedOutOfService {2, "forcedOutOfService"};
const Enum::YLeaf CgwservicestateEnum::gracefulOutOfService {3, "gracefulOutOfService"};

const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::CmgwvtmappingmodeEnum::standard {1, "standard"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwtable::Cmediagwentry::CmgwvtmappingmodeEnum::titan {2, "titan"};

const Enum::YLeaf CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::CmgwsignalprotocolEnum::other {1, "other"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::CmgwsignalprotocolEnum::mgcp {2, "mgcp"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::CmgwsignalprotocolEnum::h248 {3, "h248"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmgwsignalprotocoltable::Cmgwsignalprotocolentry::CmgwsignalprotocolEnum::tgcp {4, "tgcp"};

const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::CmgwconfigdomainnameentityEnum::gateway {1, "gateway"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::CmgwconfigdomainnameentityEnum::dnsServer {2, "dnsServer"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwdomainnameconfigtable::Cmediagwdomainnameconfigentry::CmgwconfigdomainnameentityEnum::mgc {3, "mgc"};

const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::CmediagwcccfgclusterenabledEnum::disabled {1, "disabled"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::CmediagwcccfgclusterenabledEnum::enabled {2, "enabled"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::CmediagwcccfgclusterenabledEnum::conditionalEnabled {3, "conditionalEnabled"};

const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::CmediagwcccfgdefbearertrafficEnum::ipPvcAal5 {1, "ipPvcAal5"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::CmediagwcccfgdefbearertrafficEnum::atmPvcAal2 {2, "atmPvcAal2"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::CmediagwcccfgdefbearertrafficEnum::atmSvcAal2 {3, "atmSvcAal2"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwcallcontrolconfigtable::Cmediagwcallcontrolconfigentry::CmediagwcccfgdefbearertrafficEnum::atmSvcAal1 {4, "atmSvcAal1"};

const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::cpu {1, "cpu"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::staticmemory {2, "staticmemory"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::dynamicmemory {3, "dynamicmemory"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::sysmemory {4, "sysmemory"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::commbuffer {5, "commbuffer"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::msgq {6, "msgq"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::atmq {7, "atmq"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::svccongestion {8, "svccongestion"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::rsvpq {9, "rsvpq"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::dspq {10, "dspq"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::h248congestion {11, "h248congestion"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::callpersec {12, "callpersec"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::smallipcbuffer {13, "smallipcbuffer"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::mediumipcbuffer {14, "mediumipcbuffer"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::largeipcbuffer {15, "largeipcbuffer"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::hugeipcbuffer {16, "hugeipcbuffer"};
const Enum::YLeaf CiscoMediaGatewayMib::Cmediagwrscstatstable::Cmediagwrscstatsentry::CmgwrscstatsindexEnum::mblkipcbuffer {17, "mblkipcbuffer"};


}
}

