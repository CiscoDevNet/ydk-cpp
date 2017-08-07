
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_RADIUS_EXT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_RADIUS_EXT_MIB {

CiscoRadiusExtMib::CiscoRadiusExtMib()
    :
    creclientaccounting(std::make_shared<CiscoRadiusExtMib::Creclientaccounting>())
	,creclientauthentication(std::make_shared<CiscoRadiusExtMib::Creclientauthentication>())
	,creclientglobal(std::make_shared<CiscoRadiusExtMib::Creclientglobal>())
{
    creclientaccounting->parent = this;

    creclientauthentication->parent = this;

    creclientglobal->parent = this;

    yang_name = "CISCO-RADIUS-EXT-MIB"; yang_parent_name = "CISCO-RADIUS-EXT-MIB";
}

CiscoRadiusExtMib::~CiscoRadiusExtMib()
{
}

bool CiscoRadiusExtMib::has_data() const
{
    return (creclientaccounting !=  nullptr && creclientaccounting->has_data())
	|| (creclientauthentication !=  nullptr && creclientauthentication->has_data())
	|| (creclientglobal !=  nullptr && creclientglobal->has_data());
}

bool CiscoRadiusExtMib::has_operation() const
{
    return is_set(yfilter)
	|| (creclientaccounting !=  nullptr && creclientaccounting->has_operation())
	|| (creclientauthentication !=  nullptr && creclientauthentication->has_operation())
	|| (creclientglobal !=  nullptr && creclientglobal->has_operation());
}

std::string CiscoRadiusExtMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RADIUS-EXT-MIB:CISCO-RADIUS-EXT-MIB";

    return path_buffer.str();

}

const EntityPath CiscoRadiusExtMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoRadiusExtMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "creClientAccounting")
    {
        if(creclientaccounting == nullptr)
        {
            creclientaccounting = std::make_shared<CiscoRadiusExtMib::Creclientaccounting>();
        }
        return creclientaccounting;
    }

    if(child_yang_name == "creClientAuthentication")
    {
        if(creclientauthentication == nullptr)
        {
            creclientauthentication = std::make_shared<CiscoRadiusExtMib::Creclientauthentication>();
        }
        return creclientauthentication;
    }

    if(child_yang_name == "creClientGlobal")
    {
        if(creclientglobal == nullptr)
        {
            creclientglobal = std::make_shared<CiscoRadiusExtMib::Creclientglobal>();
        }
        return creclientglobal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRadiusExtMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(creclientaccounting != nullptr)
    {
        children["creClientAccounting"] = creclientaccounting;
    }

    if(creclientauthentication != nullptr)
    {
        children["creClientAuthentication"] = creclientauthentication;
    }

    if(creclientglobal != nullptr)
    {
        children["creClientGlobal"] = creclientglobal;
    }

    return children;
}

void CiscoRadiusExtMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoRadiusExtMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoRadiusExtMib::clone_ptr() const
{
    return std::make_shared<CiscoRadiusExtMib>();
}

std::string CiscoRadiusExtMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoRadiusExtMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoRadiusExtMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoRadiusExtMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoRadiusExtMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creClientAccounting" || name == "creClientAuthentication" || name == "creClientGlobal")
        return true;
    return false;
}

CiscoRadiusExtMib::Creclientglobal::Creclientglobal()
    :
    creclientlastusedsourceid{YType::uint32, "creClientLastUsedSourceId"},
    creclientlastusedsourceport{YType::uint16, "creClientLastUsedSourcePort"},
    creclientsourceportrangeend{YType::uint16, "creClientSourcePortRangeEnd"},
    creclientsourceportrangestart{YType::uint16, "creClientSourcePortRangeStart"},
    creclienttotalaccessrejects{YType::uint32, "creClientTotalAccessRejects"},
    creclienttotalaverageresponsedelay{YType::int32, "creClientTotalAverageResponseDelay"},
    creclienttotalmaxdoneqlength{YType::uint32, "creClientTotalMaxDoneQLength"},
    creclienttotalmaxinqlength{YType::uint32, "creClientTotalMaxInQLength"},
    creclienttotalmaxwaitqlength{YType::uint32, "creClientTotalMaxWaitQLength"}
{
    yang_name = "creClientGlobal"; yang_parent_name = "CISCO-RADIUS-EXT-MIB";
}

CiscoRadiusExtMib::Creclientglobal::~Creclientglobal()
{
}

bool CiscoRadiusExtMib::Creclientglobal::has_data() const
{
    return creclientlastusedsourceid.is_set
	|| creclientlastusedsourceport.is_set
	|| creclientsourceportrangeend.is_set
	|| creclientsourceportrangestart.is_set
	|| creclienttotalaccessrejects.is_set
	|| creclienttotalaverageresponsedelay.is_set
	|| creclienttotalmaxdoneqlength.is_set
	|| creclienttotalmaxinqlength.is_set
	|| creclienttotalmaxwaitqlength.is_set;
}

bool CiscoRadiusExtMib::Creclientglobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(creclientlastusedsourceid.yfilter)
	|| ydk::is_set(creclientlastusedsourceport.yfilter)
	|| ydk::is_set(creclientsourceportrangeend.yfilter)
	|| ydk::is_set(creclientsourceportrangestart.yfilter)
	|| ydk::is_set(creclienttotalaccessrejects.yfilter)
	|| ydk::is_set(creclienttotalaverageresponsedelay.yfilter)
	|| ydk::is_set(creclienttotalmaxdoneqlength.yfilter)
	|| ydk::is_set(creclienttotalmaxinqlength.yfilter)
	|| ydk::is_set(creclienttotalmaxwaitqlength.yfilter);
}

std::string CiscoRadiusExtMib::Creclientglobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creClientGlobal";

    return path_buffer.str();

}

const EntityPath CiscoRadiusExtMib::Creclientglobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RADIUS-EXT-MIB:CISCO-RADIUS-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creclientlastusedsourceid.is_set || is_set(creclientlastusedsourceid.yfilter)) leaf_name_data.push_back(creclientlastusedsourceid.get_name_leafdata());
    if (creclientlastusedsourceport.is_set || is_set(creclientlastusedsourceport.yfilter)) leaf_name_data.push_back(creclientlastusedsourceport.get_name_leafdata());
    if (creclientsourceportrangeend.is_set || is_set(creclientsourceportrangeend.yfilter)) leaf_name_data.push_back(creclientsourceportrangeend.get_name_leafdata());
    if (creclientsourceportrangestart.is_set || is_set(creclientsourceportrangestart.yfilter)) leaf_name_data.push_back(creclientsourceportrangestart.get_name_leafdata());
    if (creclienttotalaccessrejects.is_set || is_set(creclienttotalaccessrejects.yfilter)) leaf_name_data.push_back(creclienttotalaccessrejects.get_name_leafdata());
    if (creclienttotalaverageresponsedelay.is_set || is_set(creclienttotalaverageresponsedelay.yfilter)) leaf_name_data.push_back(creclienttotalaverageresponsedelay.get_name_leafdata());
    if (creclienttotalmaxdoneqlength.is_set || is_set(creclienttotalmaxdoneqlength.yfilter)) leaf_name_data.push_back(creclienttotalmaxdoneqlength.get_name_leafdata());
    if (creclienttotalmaxinqlength.is_set || is_set(creclienttotalmaxinqlength.yfilter)) leaf_name_data.push_back(creclienttotalmaxinqlength.get_name_leafdata());
    if (creclienttotalmaxwaitqlength.is_set || is_set(creclienttotalmaxwaitqlength.yfilter)) leaf_name_data.push_back(creclienttotalmaxwaitqlength.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRadiusExtMib::Creclientglobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRadiusExtMib::Creclientglobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoRadiusExtMib::Creclientglobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "creClientLastUsedSourceId")
    {
        creclientlastusedsourceid = value;
        creclientlastusedsourceid.value_namespace = name_space;
        creclientlastusedsourceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientLastUsedSourcePort")
    {
        creclientlastusedsourceport = value;
        creclientlastusedsourceport.value_namespace = name_space;
        creclientlastusedsourceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientSourcePortRangeEnd")
    {
        creclientsourceportrangeend = value;
        creclientsourceportrangeend.value_namespace = name_space;
        creclientsourceportrangeend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientSourcePortRangeStart")
    {
        creclientsourceportrangestart = value;
        creclientsourceportrangestart.value_namespace = name_space;
        creclientsourceportrangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientTotalAccessRejects")
    {
        creclienttotalaccessrejects = value;
        creclienttotalaccessrejects.value_namespace = name_space;
        creclienttotalaccessrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientTotalAverageResponseDelay")
    {
        creclienttotalaverageresponsedelay = value;
        creclienttotalaverageresponsedelay.value_namespace = name_space;
        creclienttotalaverageresponsedelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientTotalMaxDoneQLength")
    {
        creclienttotalmaxdoneqlength = value;
        creclienttotalmaxdoneqlength.value_namespace = name_space;
        creclienttotalmaxdoneqlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientTotalMaxInQLength")
    {
        creclienttotalmaxinqlength = value;
        creclienttotalmaxinqlength.value_namespace = name_space;
        creclienttotalmaxinqlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientTotalMaxWaitQLength")
    {
        creclienttotalmaxwaitqlength = value;
        creclienttotalmaxwaitqlength.value_namespace = name_space;
        creclienttotalmaxwaitqlength.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoRadiusExtMib::Creclientglobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "creClientLastUsedSourceId")
    {
        creclientlastusedsourceid.yfilter = yfilter;
    }
    if(value_path == "creClientLastUsedSourcePort")
    {
        creclientlastusedsourceport.yfilter = yfilter;
    }
    if(value_path == "creClientSourcePortRangeEnd")
    {
        creclientsourceportrangeend.yfilter = yfilter;
    }
    if(value_path == "creClientSourcePortRangeStart")
    {
        creclientsourceportrangestart.yfilter = yfilter;
    }
    if(value_path == "creClientTotalAccessRejects")
    {
        creclienttotalaccessrejects.yfilter = yfilter;
    }
    if(value_path == "creClientTotalAverageResponseDelay")
    {
        creclienttotalaverageresponsedelay.yfilter = yfilter;
    }
    if(value_path == "creClientTotalMaxDoneQLength")
    {
        creclienttotalmaxdoneqlength.yfilter = yfilter;
    }
    if(value_path == "creClientTotalMaxInQLength")
    {
        creclienttotalmaxinqlength.yfilter = yfilter;
    }
    if(value_path == "creClientTotalMaxWaitQLength")
    {
        creclienttotalmaxwaitqlength.yfilter = yfilter;
    }
}

bool CiscoRadiusExtMib::Creclientglobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creClientLastUsedSourceId" || name == "creClientLastUsedSourcePort" || name == "creClientSourcePortRangeEnd" || name == "creClientSourcePortRangeStart" || name == "creClientTotalAccessRejects" || name == "creClientTotalAverageResponseDelay" || name == "creClientTotalMaxDoneQLength" || name == "creClientTotalMaxInQLength" || name == "creClientTotalMaxWaitQLength")
        return true;
    return false;
}

CiscoRadiusExtMib::Creclientauthentication::Creclientauthentication()
    :
    creauthclientaverageresponsedelay{YType::int32, "creAuthClientAverageResponseDelay"},
    creauthclientbadauthenticators{YType::uint32, "creAuthClientBadAuthenticators"},
    creauthclientbufferallocfailures{YType::uint32, "creAuthClientBufferAllocFailures"},
    creauthclientdupids{YType::uint32, "creAuthClientDupIDs"},
    creauthclientlastusedsourceid{YType::uint32, "creAuthClientLastUsedSourceId"},
    creauthclientmalformedresponses{YType::uint32, "creAuthClientMalformedResponses"},
    creauthclientmaxbuffersize{YType::uint32, "creAuthClientMaxBufferSize"},
    creauthclientmaxresponsedelay{YType::int32, "creAuthClientMaxResponseDelay"},
    creauthclienttimeouts{YType::uint32, "creAuthClientTimeouts"},
    creauthclienttotalpacketswithoutresponses{YType::uint32, "creAuthClientTotalPacketsWithoutResponses"},
    creauthclienttotalpacketswithresponses{YType::uint32, "creAuthClientTotalPacketsWithResponses"},
    creauthclienttotalresponses{YType::uint32, "creAuthClientTotalResponses"},
    creauthclientunknownresponses{YType::uint32, "creAuthClientUnknownResponses"}
{
    yang_name = "creClientAuthentication"; yang_parent_name = "CISCO-RADIUS-EXT-MIB";
}

CiscoRadiusExtMib::Creclientauthentication::~Creclientauthentication()
{
}

bool CiscoRadiusExtMib::Creclientauthentication::has_data() const
{
    return creauthclientaverageresponsedelay.is_set
	|| creauthclientbadauthenticators.is_set
	|| creauthclientbufferallocfailures.is_set
	|| creauthclientdupids.is_set
	|| creauthclientlastusedsourceid.is_set
	|| creauthclientmalformedresponses.is_set
	|| creauthclientmaxbuffersize.is_set
	|| creauthclientmaxresponsedelay.is_set
	|| creauthclienttimeouts.is_set
	|| creauthclienttotalpacketswithoutresponses.is_set
	|| creauthclienttotalpacketswithresponses.is_set
	|| creauthclienttotalresponses.is_set
	|| creauthclientunknownresponses.is_set;
}

bool CiscoRadiusExtMib::Creclientauthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(creauthclientaverageresponsedelay.yfilter)
	|| ydk::is_set(creauthclientbadauthenticators.yfilter)
	|| ydk::is_set(creauthclientbufferallocfailures.yfilter)
	|| ydk::is_set(creauthclientdupids.yfilter)
	|| ydk::is_set(creauthclientlastusedsourceid.yfilter)
	|| ydk::is_set(creauthclientmalformedresponses.yfilter)
	|| ydk::is_set(creauthclientmaxbuffersize.yfilter)
	|| ydk::is_set(creauthclientmaxresponsedelay.yfilter)
	|| ydk::is_set(creauthclienttimeouts.yfilter)
	|| ydk::is_set(creauthclienttotalpacketswithoutresponses.yfilter)
	|| ydk::is_set(creauthclienttotalpacketswithresponses.yfilter)
	|| ydk::is_set(creauthclienttotalresponses.yfilter)
	|| ydk::is_set(creauthclientunknownresponses.yfilter);
}

std::string CiscoRadiusExtMib::Creclientauthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creClientAuthentication";

    return path_buffer.str();

}

const EntityPath CiscoRadiusExtMib::Creclientauthentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RADIUS-EXT-MIB:CISCO-RADIUS-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creauthclientaverageresponsedelay.is_set || is_set(creauthclientaverageresponsedelay.yfilter)) leaf_name_data.push_back(creauthclientaverageresponsedelay.get_name_leafdata());
    if (creauthclientbadauthenticators.is_set || is_set(creauthclientbadauthenticators.yfilter)) leaf_name_data.push_back(creauthclientbadauthenticators.get_name_leafdata());
    if (creauthclientbufferallocfailures.is_set || is_set(creauthclientbufferallocfailures.yfilter)) leaf_name_data.push_back(creauthclientbufferallocfailures.get_name_leafdata());
    if (creauthclientdupids.is_set || is_set(creauthclientdupids.yfilter)) leaf_name_data.push_back(creauthclientdupids.get_name_leafdata());
    if (creauthclientlastusedsourceid.is_set || is_set(creauthclientlastusedsourceid.yfilter)) leaf_name_data.push_back(creauthclientlastusedsourceid.get_name_leafdata());
    if (creauthclientmalformedresponses.is_set || is_set(creauthclientmalformedresponses.yfilter)) leaf_name_data.push_back(creauthclientmalformedresponses.get_name_leafdata());
    if (creauthclientmaxbuffersize.is_set || is_set(creauthclientmaxbuffersize.yfilter)) leaf_name_data.push_back(creauthclientmaxbuffersize.get_name_leafdata());
    if (creauthclientmaxresponsedelay.is_set || is_set(creauthclientmaxresponsedelay.yfilter)) leaf_name_data.push_back(creauthclientmaxresponsedelay.get_name_leafdata());
    if (creauthclienttimeouts.is_set || is_set(creauthclienttimeouts.yfilter)) leaf_name_data.push_back(creauthclienttimeouts.get_name_leafdata());
    if (creauthclienttotalpacketswithoutresponses.is_set || is_set(creauthclienttotalpacketswithoutresponses.yfilter)) leaf_name_data.push_back(creauthclienttotalpacketswithoutresponses.get_name_leafdata());
    if (creauthclienttotalpacketswithresponses.is_set || is_set(creauthclienttotalpacketswithresponses.yfilter)) leaf_name_data.push_back(creauthclienttotalpacketswithresponses.get_name_leafdata());
    if (creauthclienttotalresponses.is_set || is_set(creauthclienttotalresponses.yfilter)) leaf_name_data.push_back(creauthclienttotalresponses.get_name_leafdata());
    if (creauthclientunknownresponses.is_set || is_set(creauthclientunknownresponses.yfilter)) leaf_name_data.push_back(creauthclientunknownresponses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRadiusExtMib::Creclientauthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRadiusExtMib::Creclientauthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoRadiusExtMib::Creclientauthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "creAuthClientAverageResponseDelay")
    {
        creauthclientaverageresponsedelay = value;
        creauthclientaverageresponsedelay.value_namespace = name_space;
        creauthclientaverageresponsedelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientBadAuthenticators")
    {
        creauthclientbadauthenticators = value;
        creauthclientbadauthenticators.value_namespace = name_space;
        creauthclientbadauthenticators.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientBufferAllocFailures")
    {
        creauthclientbufferallocfailures = value;
        creauthclientbufferallocfailures.value_namespace = name_space;
        creauthclientbufferallocfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientDupIDs")
    {
        creauthclientdupids = value;
        creauthclientdupids.value_namespace = name_space;
        creauthclientdupids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientLastUsedSourceId")
    {
        creauthclientlastusedsourceid = value;
        creauthclientlastusedsourceid.value_namespace = name_space;
        creauthclientlastusedsourceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientMalformedResponses")
    {
        creauthclientmalformedresponses = value;
        creauthclientmalformedresponses.value_namespace = name_space;
        creauthclientmalformedresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientMaxBufferSize")
    {
        creauthclientmaxbuffersize = value;
        creauthclientmaxbuffersize.value_namespace = name_space;
        creauthclientmaxbuffersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientMaxResponseDelay")
    {
        creauthclientmaxresponsedelay = value;
        creauthclientmaxresponsedelay.value_namespace = name_space;
        creauthclientmaxresponsedelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientTimeouts")
    {
        creauthclienttimeouts = value;
        creauthclienttimeouts.value_namespace = name_space;
        creauthclienttimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientTotalPacketsWithoutResponses")
    {
        creauthclienttotalpacketswithoutresponses = value;
        creauthclienttotalpacketswithoutresponses.value_namespace = name_space;
        creauthclienttotalpacketswithoutresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientTotalPacketsWithResponses")
    {
        creauthclienttotalpacketswithresponses = value;
        creauthclienttotalpacketswithresponses.value_namespace = name_space;
        creauthclienttotalpacketswithresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientTotalResponses")
    {
        creauthclienttotalresponses = value;
        creauthclienttotalresponses.value_namespace = name_space;
        creauthclienttotalresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientUnknownResponses")
    {
        creauthclientunknownresponses = value;
        creauthclientunknownresponses.value_namespace = name_space;
        creauthclientunknownresponses.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoRadiusExtMib::Creclientauthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "creAuthClientAverageResponseDelay")
    {
        creauthclientaverageresponsedelay.yfilter = yfilter;
    }
    if(value_path == "creAuthClientBadAuthenticators")
    {
        creauthclientbadauthenticators.yfilter = yfilter;
    }
    if(value_path == "creAuthClientBufferAllocFailures")
    {
        creauthclientbufferallocfailures.yfilter = yfilter;
    }
    if(value_path == "creAuthClientDupIDs")
    {
        creauthclientdupids.yfilter = yfilter;
    }
    if(value_path == "creAuthClientLastUsedSourceId")
    {
        creauthclientlastusedsourceid.yfilter = yfilter;
    }
    if(value_path == "creAuthClientMalformedResponses")
    {
        creauthclientmalformedresponses.yfilter = yfilter;
    }
    if(value_path == "creAuthClientMaxBufferSize")
    {
        creauthclientmaxbuffersize.yfilter = yfilter;
    }
    if(value_path == "creAuthClientMaxResponseDelay")
    {
        creauthclientmaxresponsedelay.yfilter = yfilter;
    }
    if(value_path == "creAuthClientTimeouts")
    {
        creauthclienttimeouts.yfilter = yfilter;
    }
    if(value_path == "creAuthClientTotalPacketsWithoutResponses")
    {
        creauthclienttotalpacketswithoutresponses.yfilter = yfilter;
    }
    if(value_path == "creAuthClientTotalPacketsWithResponses")
    {
        creauthclienttotalpacketswithresponses.yfilter = yfilter;
    }
    if(value_path == "creAuthClientTotalResponses")
    {
        creauthclienttotalresponses.yfilter = yfilter;
    }
    if(value_path == "creAuthClientUnknownResponses")
    {
        creauthclientunknownresponses.yfilter = yfilter;
    }
}

bool CiscoRadiusExtMib::Creclientauthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creAuthClientAverageResponseDelay" || name == "creAuthClientBadAuthenticators" || name == "creAuthClientBufferAllocFailures" || name == "creAuthClientDupIDs" || name == "creAuthClientLastUsedSourceId" || name == "creAuthClientMalformedResponses" || name == "creAuthClientMaxBufferSize" || name == "creAuthClientMaxResponseDelay" || name == "creAuthClientTimeouts" || name == "creAuthClientTotalPacketsWithoutResponses" || name == "creAuthClientTotalPacketsWithResponses" || name == "creAuthClientTotalResponses" || name == "creAuthClientUnknownResponses")
        return true;
    return false;
}

CiscoRadiusExtMib::Creclientaccounting::Creclientaccounting()
    :
    creacctclientaverageresponsedelay{YType::int32, "creAcctClientAverageResponseDelay"},
    creacctclientbadauthenticators{YType::uint32, "creAcctClientBadAuthenticators"},
    creacctclientbufferallocfailures{YType::uint32, "creAcctClientBufferAllocFailures"},
    creacctclientdupids{YType::uint32, "creAcctClientDupIDs"},
    creacctclientlastusedsourceid{YType::uint32, "creAcctClientLastUsedSourceId"},
    creacctclientmalformedresponses{YType::uint32, "creAcctClientMalformedResponses"},
    creacctclientmaxbuffersize{YType::uint32, "creAcctClientMaxBufferSize"},
    creacctclientmaxresponsedelay{YType::int32, "creAcctClientMaxResponseDelay"},
    creacctclienttimeouts{YType::uint32, "creAcctClientTimeouts"},
    creacctclienttotalpacketswithoutresponses{YType::uint32, "creAcctClientTotalPacketsWithoutResponses"},
    creacctclienttotalpacketswithresponses{YType::uint32, "creAcctClientTotalPacketsWithResponses"},
    creacctclienttotalresponses{YType::uint32, "creAcctClientTotalResponses"},
    creacctclientunknownresponses{YType::uint32, "creAcctClientUnknownResponses"}
{
    yang_name = "creClientAccounting"; yang_parent_name = "CISCO-RADIUS-EXT-MIB";
}

CiscoRadiusExtMib::Creclientaccounting::~Creclientaccounting()
{
}

bool CiscoRadiusExtMib::Creclientaccounting::has_data() const
{
    return creacctclientaverageresponsedelay.is_set
	|| creacctclientbadauthenticators.is_set
	|| creacctclientbufferallocfailures.is_set
	|| creacctclientdupids.is_set
	|| creacctclientlastusedsourceid.is_set
	|| creacctclientmalformedresponses.is_set
	|| creacctclientmaxbuffersize.is_set
	|| creacctclientmaxresponsedelay.is_set
	|| creacctclienttimeouts.is_set
	|| creacctclienttotalpacketswithoutresponses.is_set
	|| creacctclienttotalpacketswithresponses.is_set
	|| creacctclienttotalresponses.is_set
	|| creacctclientunknownresponses.is_set;
}

bool CiscoRadiusExtMib::Creclientaccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(creacctclientaverageresponsedelay.yfilter)
	|| ydk::is_set(creacctclientbadauthenticators.yfilter)
	|| ydk::is_set(creacctclientbufferallocfailures.yfilter)
	|| ydk::is_set(creacctclientdupids.yfilter)
	|| ydk::is_set(creacctclientlastusedsourceid.yfilter)
	|| ydk::is_set(creacctclientmalformedresponses.yfilter)
	|| ydk::is_set(creacctclientmaxbuffersize.yfilter)
	|| ydk::is_set(creacctclientmaxresponsedelay.yfilter)
	|| ydk::is_set(creacctclienttimeouts.yfilter)
	|| ydk::is_set(creacctclienttotalpacketswithoutresponses.yfilter)
	|| ydk::is_set(creacctclienttotalpacketswithresponses.yfilter)
	|| ydk::is_set(creacctclienttotalresponses.yfilter)
	|| ydk::is_set(creacctclientunknownresponses.yfilter);
}

std::string CiscoRadiusExtMib::Creclientaccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creClientAccounting";

    return path_buffer.str();

}

const EntityPath CiscoRadiusExtMib::Creclientaccounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RADIUS-EXT-MIB:CISCO-RADIUS-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creacctclientaverageresponsedelay.is_set || is_set(creacctclientaverageresponsedelay.yfilter)) leaf_name_data.push_back(creacctclientaverageresponsedelay.get_name_leafdata());
    if (creacctclientbadauthenticators.is_set || is_set(creacctclientbadauthenticators.yfilter)) leaf_name_data.push_back(creacctclientbadauthenticators.get_name_leafdata());
    if (creacctclientbufferallocfailures.is_set || is_set(creacctclientbufferallocfailures.yfilter)) leaf_name_data.push_back(creacctclientbufferallocfailures.get_name_leafdata());
    if (creacctclientdupids.is_set || is_set(creacctclientdupids.yfilter)) leaf_name_data.push_back(creacctclientdupids.get_name_leafdata());
    if (creacctclientlastusedsourceid.is_set || is_set(creacctclientlastusedsourceid.yfilter)) leaf_name_data.push_back(creacctclientlastusedsourceid.get_name_leafdata());
    if (creacctclientmalformedresponses.is_set || is_set(creacctclientmalformedresponses.yfilter)) leaf_name_data.push_back(creacctclientmalformedresponses.get_name_leafdata());
    if (creacctclientmaxbuffersize.is_set || is_set(creacctclientmaxbuffersize.yfilter)) leaf_name_data.push_back(creacctclientmaxbuffersize.get_name_leafdata());
    if (creacctclientmaxresponsedelay.is_set || is_set(creacctclientmaxresponsedelay.yfilter)) leaf_name_data.push_back(creacctclientmaxresponsedelay.get_name_leafdata());
    if (creacctclienttimeouts.is_set || is_set(creacctclienttimeouts.yfilter)) leaf_name_data.push_back(creacctclienttimeouts.get_name_leafdata());
    if (creacctclienttotalpacketswithoutresponses.is_set || is_set(creacctclienttotalpacketswithoutresponses.yfilter)) leaf_name_data.push_back(creacctclienttotalpacketswithoutresponses.get_name_leafdata());
    if (creacctclienttotalpacketswithresponses.is_set || is_set(creacctclienttotalpacketswithresponses.yfilter)) leaf_name_data.push_back(creacctclienttotalpacketswithresponses.get_name_leafdata());
    if (creacctclienttotalresponses.is_set || is_set(creacctclienttotalresponses.yfilter)) leaf_name_data.push_back(creacctclienttotalresponses.get_name_leafdata());
    if (creacctclientunknownresponses.is_set || is_set(creacctclientunknownresponses.yfilter)) leaf_name_data.push_back(creacctclientunknownresponses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRadiusExtMib::Creclientaccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRadiusExtMib::Creclientaccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoRadiusExtMib::Creclientaccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "creAcctClientAverageResponseDelay")
    {
        creacctclientaverageresponsedelay = value;
        creacctclientaverageresponsedelay.value_namespace = name_space;
        creacctclientaverageresponsedelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientBadAuthenticators")
    {
        creacctclientbadauthenticators = value;
        creacctclientbadauthenticators.value_namespace = name_space;
        creacctclientbadauthenticators.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientBufferAllocFailures")
    {
        creacctclientbufferallocfailures = value;
        creacctclientbufferallocfailures.value_namespace = name_space;
        creacctclientbufferallocfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientDupIDs")
    {
        creacctclientdupids = value;
        creacctclientdupids.value_namespace = name_space;
        creacctclientdupids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientLastUsedSourceId")
    {
        creacctclientlastusedsourceid = value;
        creacctclientlastusedsourceid.value_namespace = name_space;
        creacctclientlastusedsourceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientMalformedResponses")
    {
        creacctclientmalformedresponses = value;
        creacctclientmalformedresponses.value_namespace = name_space;
        creacctclientmalformedresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientMaxBufferSize")
    {
        creacctclientmaxbuffersize = value;
        creacctclientmaxbuffersize.value_namespace = name_space;
        creacctclientmaxbuffersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientMaxResponseDelay")
    {
        creacctclientmaxresponsedelay = value;
        creacctclientmaxresponsedelay.value_namespace = name_space;
        creacctclientmaxresponsedelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientTimeouts")
    {
        creacctclienttimeouts = value;
        creacctclienttimeouts.value_namespace = name_space;
        creacctclienttimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientTotalPacketsWithoutResponses")
    {
        creacctclienttotalpacketswithoutresponses = value;
        creacctclienttotalpacketswithoutresponses.value_namespace = name_space;
        creacctclienttotalpacketswithoutresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientTotalPacketsWithResponses")
    {
        creacctclienttotalpacketswithresponses = value;
        creacctclienttotalpacketswithresponses.value_namespace = name_space;
        creacctclienttotalpacketswithresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientTotalResponses")
    {
        creacctclienttotalresponses = value;
        creacctclienttotalresponses.value_namespace = name_space;
        creacctclienttotalresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientUnknownResponses")
    {
        creacctclientunknownresponses = value;
        creacctclientunknownresponses.value_namespace = name_space;
        creacctclientunknownresponses.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoRadiusExtMib::Creclientaccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "creAcctClientAverageResponseDelay")
    {
        creacctclientaverageresponsedelay.yfilter = yfilter;
    }
    if(value_path == "creAcctClientBadAuthenticators")
    {
        creacctclientbadauthenticators.yfilter = yfilter;
    }
    if(value_path == "creAcctClientBufferAllocFailures")
    {
        creacctclientbufferallocfailures.yfilter = yfilter;
    }
    if(value_path == "creAcctClientDupIDs")
    {
        creacctclientdupids.yfilter = yfilter;
    }
    if(value_path == "creAcctClientLastUsedSourceId")
    {
        creacctclientlastusedsourceid.yfilter = yfilter;
    }
    if(value_path == "creAcctClientMalformedResponses")
    {
        creacctclientmalformedresponses.yfilter = yfilter;
    }
    if(value_path == "creAcctClientMaxBufferSize")
    {
        creacctclientmaxbuffersize.yfilter = yfilter;
    }
    if(value_path == "creAcctClientMaxResponseDelay")
    {
        creacctclientmaxresponsedelay.yfilter = yfilter;
    }
    if(value_path == "creAcctClientTimeouts")
    {
        creacctclienttimeouts.yfilter = yfilter;
    }
    if(value_path == "creAcctClientTotalPacketsWithoutResponses")
    {
        creacctclienttotalpacketswithoutresponses.yfilter = yfilter;
    }
    if(value_path == "creAcctClientTotalPacketsWithResponses")
    {
        creacctclienttotalpacketswithresponses.yfilter = yfilter;
    }
    if(value_path == "creAcctClientTotalResponses")
    {
        creacctclienttotalresponses.yfilter = yfilter;
    }
    if(value_path == "creAcctClientUnknownResponses")
    {
        creacctclientunknownresponses.yfilter = yfilter;
    }
}

bool CiscoRadiusExtMib::Creclientaccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creAcctClientAverageResponseDelay" || name == "creAcctClientBadAuthenticators" || name == "creAcctClientBufferAllocFailures" || name == "creAcctClientDupIDs" || name == "creAcctClientLastUsedSourceId" || name == "creAcctClientMalformedResponses" || name == "creAcctClientMaxBufferSize" || name == "creAcctClientMaxResponseDelay" || name == "creAcctClientTimeouts" || name == "creAcctClientTotalPacketsWithoutResponses" || name == "creAcctClientTotalPacketsWithResponses" || name == "creAcctClientTotalResponses" || name == "creAcctClientUnknownResponses")
        return true;
    return false;
}


}
}

